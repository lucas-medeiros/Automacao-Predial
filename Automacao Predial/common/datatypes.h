#ifndef DATATYPES_H
#define DATATYPES_H

#ifdef  __MINGW32__
    typedef unsigned char       uint8;
    typedef unsigned short      uint16;
    typedef unsigned int        uint32;

    typedef char                int8;
    typedef short               int16;
    typedef int                 int32;
#endif

//Macro compilação Keil Vision
#ifdef __C51__
    typedef unsigned char       uint8;
    typedef unsigned short      uint16;
    typedef unsigned long       uint32;

    typedef char                int8;
    typedef short               int16;
    typedef long                int32;
#endif

//Macro compilação Renesas
#ifdef __RENESAS__
    typedef char                int8;
    typedef short               int16;
    typedef int                 int32;

    typedef unsigned char       uint8;
    typedef unsigned short      uint16;
    typedef unsigned int        uint32;
#endif

typedef uint8   boolean;

#define TRUE    1
#define FALSE   0


#endif // DATATYPES_H
