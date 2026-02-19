/*
 * UART_TX.c
 *
 *  Created on: Jan 7, 2020
 *      Author: Ralph & Daniel
 */

/***************************** Include Files *********************************/

#include "xparameters.h"
#include "xil_io.h"
#include "xstatus.h"
#include "xil_printf.h"

/************************** Constant Definitions *****************************/
/* Adresse de base de l'IP UART (� adapter selon Vivado) */
#define UART_BASE_ADDRESS        0x43C00000


/************************** Main Code Entry **********************************/
int main(void)
{ 
    u32 data = 0x00000193;

    xil_printf("Debut de la transmission cyclique via AXI...\n\r");

    while (1)
    {

        // R�initialisation du signal de transmission
        Xil_Out32(UART_BASE_ADDRESS, data);

     }

    return 0;
}






