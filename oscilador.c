/*
 * File:   oscilador.c
 * Author: ire
 *
 * Created on July 22, 2022, 8:42 AM
 */


#include <xc.h>
#include "osc.h"

void initosc (uint8_t frecuencia){
    switch (frecuencia){
        case 1: 
            OSCCONbits.IRCF = 0b100;
            break;
            
        case 2:
            OSCCONbits.IRCF = 0b101;
            break;
            
        case 4:
            OSCCONbits.IRCF = 0b110;
            break;  
            
        case 8:
            OSCCONbits.IRCF = 0b111;
            break; 
            
        default: 
            OSCCONbits.IRCF = 0b110;
            break;  
    }
    OSCCONbits.SCS = 1;
    return;
}
