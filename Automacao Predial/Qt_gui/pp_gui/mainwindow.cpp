#include "mainwindow.h"
#include "ui_mainwindow.h"

//Variéveis de encanamento:
double nivel_cano1 = 0;
double nivel_cano2 = 0;
double nivel_cano3 = 0;
double vazao_canos = 15;

//Variáveis dos tanques:
double nivel_tanque1 = 0;
double nivel_tanque2 = 0;
double nivel_tanque3 = 0;
double volume_tanque1 = 0;
double volume_tanque2 = 0*10;
double volume_tanque3 = 0*10;
double temperatura_tanque3 = 25.0;
//volume máximo dos tanques:
//1 e 2: 1000
//3: 250

//Variáveis das válvulas e bombas:
double vazao_v1 = 1;
double vazao_b1 = 1;
double vazao_v2 = 1;
double dT = 0.01; //variação da temperatura

//Variável de consumo:
double consumo = 0.6*1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    tbehavior.start();

    connect(&timer10ms,
            SIGNAL(timeout()),
            this,
            SLOT(AtualizaInterface()));
    connect(&timer10ms,
            SIGNAL(timeout()),
            this,
            SLOT(ProcessoFisico()));
    timer10ms.start(10);
}

MainWindow::~MainWindow()
{
    tbehavior.terminate();
    delete ui;
}

#include "../../common/datatypes.h"
extern boolean pin_v1;
extern boolean pin_b1;
extern boolean pin_v2;
extern boolean pin_r1;
extern boolean pin_s11;
extern boolean pin_s12;
extern boolean pin_s21;
extern boolean pin_s22;
extern boolean pin_s31;
extern boolean pin_s32;
extern int32 temperaturaTanque3;

void MainWindow::AtualizaInterface(){
    ui->checkBox_v1->setChecked(pin_v1);
    ui->checkBox_b1->setChecked(pin_b1);
    ui->checkBox_v2->setChecked(pin_v2);
    ui->checkBox_r1->setChecked(pin_r1);

    ui->checkBox_s11->setChecked(pin_s11);
    ui->checkBox_s12->setChecked(pin_s12);
    ui->checkBox_s21->setChecked(pin_s21);
    ui->checkBox_s22->setChecked(pin_s22);
    ui->checkBox_s31->setChecked(pin_s31);
    ui->checkBox_s32->setChecked(pin_s32);

    ui->progressBar_tanque1->setValue(nivel_tanque1);
    ui->progressBar_tanque2->setValue(nivel_tanque2);
    ui->progressBar_tanque3->setValue(nivel_tanque3);
    ui->progressBar_cano1->setValue(nivel_cano1);
    ui->progressBar_cano2->setValue(nivel_cano2);
    ui->progressBar_cano3->setValue(nivel_cano3);

    ui->label_temperatura->setText(QString::number(temperatura_tanque3));

    //ui->label_niveltanque2->setText(QString::number(nivel_tanque2));
    //ui->label_niveltanque3->setText(QString::number(nivel_tanque3));
}

void MainWindow::ProcessoFisico(){

    nivel_tanque1 = volume_tanque1/10;
    nivel_tanque2 = volume_tanque2/10;
    nivel_tanque3 = volume_tanque3/5;

    if(pin_v1==TRUE) //adiciona água no tanque 1
        volume_tanque1 += vazao_v1;

    if(pin_b1==TRUE){ //retira água do tanque 1 e adiciona no tanque 2
        volume_tanque1 -= vazao_b1;
        volume_tanque2 += vazao_b1;

        //para a animação do encanamento (nível subindo)
        nivel_cano1 += vazao_canos;
        if(nivel_cano1>=100){
            nivel_cano2 += vazao_canos;
            if(nivel_cano2>=99){
                nivel_cano3 += vazao_canos;
            }
        }
    } else {
        //para a animação do encanamento (nível abaixando)
        nivel_cano3 -= vazao_canos;
        if(nivel_cano3<=0){
            nivel_cano2 -= vazao_canos;
            if(nivel_cano2<=0){
                nivel_cano1 -= vazao_canos;
            }
        }
    }

    if(pin_v2==TRUE){
            //água passa do tanque que tem mais água para o tanque que tem menos
            //volume do tanque2 = 4 * volume do tanque3
            //tem q ter o mesmo nível físico -> tanque2 na metade = tanque3 cheio
            if(nivel_tanque2 > nivel_tanque3){
                volume_tanque2 -= vazao_v2;
                volume_tanque3 += vazao_v2;
            } else if (nivel_tanque3 > nivel_tanque2){
                volume_tanque2 += vazao_v2;
                volume_tanque3 -= vazao_v2;
            }
    }

    if(pin_r1==TRUE){ //aumenta a temperatura da água no tanque3
        temperatura_tanque3 += dT; //dT -> variação da temperatura
    } else {
        if(temperatura_tanque3 > 25)
            temperatura_tanque3 -= dT;
    }

    //consumo:
    volume_tanque2 -= consumo;
    volume_tanque3 -= consumo*0.25;

    //controle de fidelidade de volume máximo dos tanques
    if(volume_tanque1>1000)
        volume_tanque1=1000;
    if(volume_tanque1<0)
        volume_tanque1=0;
    if(volume_tanque2>1000)
        volume_tanque2=1000;
    if(volume_tanque2<0)
        volume_tanque2=0;
    if(volume_tanque3>250)
        volume_tanque3=250;
    if(volume_tanque3<0)
        volume_tanque3=0;


    //controle de fidelidade do tamanho do tanque
    if(nivel_tanque1>100)
        nivel_tanque1=100;
    if(nivel_tanque1<0)
        nivel_tanque1 = 0;
    if(nivel_tanque2>100)
        nivel_tanque2=100;
    if(nivel_tanque2<0)
        nivel_tanque2 = 0;
    if(nivel_tanque3>50)
        nivel_tanque3=50;
    if(nivel_tanque3<0)
        nivel_tanque3 = 0;

    //controle de fidelidade de temperatura ambiente
    if(temperatura_tanque3 < 25)
        temperatura_tanque3 = 25;

    //controle de fidelidade para encanamento
    if(nivel_cano1>100)
        nivel_cano1=100;
    if(nivel_cano1<0)
        nivel_cano1 = 0;
    if(nivel_cano2>100)
        nivel_cano2=100;
    if(nivel_cano2<0)
        nivel_cano2 = 0;
    if(nivel_cano3>100)
        nivel_cano3=100;
    if(nivel_cano3<0)
        nivel_cano3 = 0;


    //atualiza os sensores
    pin_s11 = nivel_tanque1>=10;
    pin_s12 = nivel_tanque1>=90;
    pin_s21 = nivel_tanque2>=10;
    pin_s22 = nivel_tanque2>=90;
    pin_s31 = nivel_tanque3>=10*0.5;
    pin_s32 = nivel_tanque3>=90*0.5;
    temperaturaTanque3 = temperatura_tanque3;
}
