#include "mainwindow.h"
#include "ui_mainwindow.h"

//testar com niveis de tanques diferentes
// COM VAZÃO DE ENTRADA E BOMBA =
//| Tanque_1  | Tanque_2  |
//|     0     |     0     | - TUDO OK
//|     50    |     0     | - COM 5s, O TANQUE 1 ESVAZIA QUASE QUE TOTALMENTE, POR ISSO MUDOU PARA 3s
//|     12    |     0     | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     0     |     50    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     50    |     50    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     15    |     15    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     95    |     95    | - TUDO OK

// COM VAZÃO DE ENTRADA DO TANQUE1 > TANQUE2
//| Tanque_1  | Tanque_2  |A DEMORA SÃO OS SEGUNDOS QUE JÁ ESTÃO SETADOS
//|     0     |     0     | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     50    |     0     | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     12    |     0     | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     0     |     50    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     50    |     50    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     15    |     15    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1
//|     95    |     95    | - TUDO OK, SÓ DEMORA UM POUCO PARA LIGAR A B1

// COM VAZÃO DE ENTRADA DO TANQUE2 > TANQUE1
//| Tanque_1  | Tanque_2  |
//|     0     |     0     | - TUDO OK
//|     50    |     0     | - TUDO OK
//|     12    |     0     | - TUDO OK
//|     0     |     50    | - TUDO OK
//|     50    |     50    | - TUDO OK
//|     15    |     15    | - TUDO OK
//|     95    |     95    | - TUDO OK

// COM VAZÃO DE ENTRADA(MAIOR) E SAÍDA(MENOR)
//| Tanque_1  | Tanque_2  |
//|     0.2   |     0.1   | - TUDO OK

// COM VAZÃO DE ENTRADA(MENOR) E SAÍDA(MAIOR)
//| Tanque_1  | Tanque_2  |
//|     0.1   |     0.2   | - TUDO OK

//___________________________________________________________________________________________________
// COM VAZÃO DE ENTRADA E BOMBA = E SEM CRONÔMETRO
//| Tanque_1  | Tanque_2  | -(TANQUE 2 E TANQUE 1 FICAM CHEIOS)
//|     0     |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     50    |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     12    |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     0     |     50    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     50    |     50    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     15    |     15    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     95    |     95    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)

// COM VAZÃO DE ENTRADA DO TANQUE1 > TANQUE2
//| Tanque_1  | Tanque_2  | -(TANQUE 2 E TANQUE 1 FICAM CHEIOS)
//|     0     |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     50    |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     12    |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     0     |     50    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     50    |     50    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     15    |     15    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     95    |     95    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)

// COM VAZÃO DA ENTRADA DO TANQUE2 > TANQUE1
//| Tanque_1  | Tanque_2  | -(TANQUE 2 FICA VAZIO E TANQUE 1 FICA NO MINIMO)
//|     0     |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     50    |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     12    |     0     | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     0     |     50    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     50    |     50    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     15    |     15    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)
//|     95    |     95    | - FICA TILTADO (LIGANDO E DESLIGANDO SEM PAUSA - PODENDO QUEIMAR O EQUIPAMENTO)



double nivel_tanque1 = 0;
double nivel_tanque2 = 0;
double nivel_tanque3 = 0;

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
extern boolean pin_s11;
extern boolean pin_s12;
extern boolean pin_s22;
extern boolean pin_s21;

extern boolean pin_v2;
extern boolean pin_s31;
extern boolean pin_s32;

void MainWindow::AtualizaInterface(){
    ui->checkBox_v1->setChecked(pin_v1);
    ui->checkBox_s11->setChecked(pin_s11);
    ui->checkBox_s12->setChecked(pin_s12);
    ui->progressBar_tanque1->setValue(nivel_tanque1);

    ui->checkBox_bomba->setChecked(pin_b1);
    ui->checkBox_s22->setChecked(pin_s22);
    ui->checkBox_s21->setChecked(pin_s21);
    ui->progressBar_tanque2->setValue(nivel_tanque2);

    ui->checkBox_v2->setChecked(pin_v2);
    ui->checkBox_s32->setChecked(pin_s32);
    ui->checkBox_s31->setChecked(pin_s31);
    ui->progressBar_tanque3->setValue(nivel_tanque3);
}


void MainWindow::ProcessoFisico(){
//TANQUE 1
    if(pin_v1==TRUE)
        //VAZAO DA V1
        nivel_tanque1 += 0.07; //+= 0.15;
    //nivel_tanque2 -= .06; //-= 0.06;

    if(nivel_tanque1>100)
        nivel_tanque1=100;

    pin_s11 = nivel_tanque1>=10;
    pin_s12 = nivel_tanque1>=90;


//TANQUE 2
    if(pin_b1==TRUE){

        nivel_tanque2 += 0.08; //+= 0.15;
        nivel_tanque1 -= 0.08; //-= 0.15;
    }


    if(nivel_tanque2<0)
        nivel_tanque2=0;

    if(nivel_tanque2>100)
        nivel_tanque2=100;

    pin_s21 = nivel_tanque2>=10;
    pin_s22 = nivel_tanque2>=90;



//TANQUE 3
    if(pin_v2==TRUE){

        if(nivel_tanque2!=nivel_tanque3){ //ate equilibrar, how?
        if(nivel_tanque3>nivel_tanque2)
        {
            nivel_tanque3 -= 0.09; //+= 0.15;
            nivel_tanque2 += 0.09; //-= 0.15;

        }
        if(nivel_tanque2>nivel_tanque3)
        {
        nivel_tanque3 += 0.09; //+= 0.15;
        nivel_tanque2 -= 0.09; //-= 0.15
        }
      }
    }


    nivel_tanque3 -= .06; //-= 0.06;


    if(nivel_tanque3<0)
        nivel_tanque3=0;

    if(nivel_tanque3>100)
        nivel_tanque3=100;

    pin_s31 = nivel_tanque3>=10;
    pin_s32 = nivel_tanque3>=90;


//




}
