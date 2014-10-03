
#include "uart.h"
#include "main.h"

/* defines */

const char * hw_string = "Hello, World!\n\r";

/* function prototypes */

void main(void){

    /* init stuff */
    DDRD |= (1<<PD1);
    DDRE |= (1<<PE1);
    uart0_init(UART_BAUD_SELECT(BAUD, F_CPU));

    sei();
    /* infinite loop */
    while(1){
    uart0_puts(hw_string);
    PORTE ^= (1<<PE1);
    _delay_ms(1000);     
    }
}

/* function bodies */



/* Interrupt Service Routines */



