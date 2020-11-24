//
//  defines.h
//  H0_Decoder
//
//  Created by Ruedi Heimlicher on 11.09.2020.
//

#ifndef defines_h
#define defines_h


#define LOOPLEDPORT     PORTA
#define LOOPLEDDDR      DDRA
#define LOOPLED         7 // 

#define INT0_RISING      0
#define INT0_FALLING      1


#define SHORT 0 // Abstand im doppelpaket
#define LONG 2 // Abstand zwischen Daten

#define OSZIPORT  PORTB      // Ausgang fuer Servo
#define OSZIDDR   DDRB

#define OSZIA 1           // 


#define PAKETA   0
#define PAKETB   1

#define OSZIALO OSZIPORT &= ~(1<<OSZIA)
#define OSZIAHI OSZIPORT |= (1<<OSZIA)
#define OSZIATOG OSZIPORT ^= (1<<OSZIA)


#define TESTPORT        PORTB
#define TESTDDR        DDRB

#define TEST0     0
#define TEST1     1
#define TEST2     2




#define MOTORPORT   PORTA
#define MOTORDDR    DDRA
#define MOTORPIN    PINA

//PINS

#define MOTORDIR      0
#define MOTOROUT      1
#define LAMPE         2
#define MOTORAUX      3




// Bits
#define FUNKTIONOK   2
#define ADDRESSOK    3
#define DATAOK       4


// lokstatus-Bits
#define FUNKTION     0
#define OLDFUNKTION  1
#define FUNKTIONSTATUS 2






#define ADDRESSBIT   0
#define DATABIT      2
#define FUNKTIONBIT  4
#define OLDRICHTUNGBIT  5
#define RICHTUNGBIT  6
#define STARTDELAYBIT  7

#define STARTDELAY 100

#define TRIT0 0
#define TRIT1 1
#define TRIT2 2
#define TRIT3 3
#define TRIT4 4

#define HI_IMPULSDAUER 10
#define LO_IMPULSDAUER 20

#define INPIN     PINA
#define INT0_START   0
#define INT0_END   1
#define INT0_WAIT 2

#define INT0_PAKET_A 4
#define INT0_PAKET_B 5

//#define SPEEDFAKTOR 18

#endif /* defines_h */
