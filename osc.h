/* 
 * File:   
 * Author: Irenne Cruz
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef OSC_H
#define	OSC_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>


void initosc (uint8_t frecuencia);

/*  111 = 8 MHz
    110 = 4 MHz (default)
    101 = 2 MHz
    100 = 1 MHz
 */


#endif	/* XC_HEADER_TEMPLATE_H */
