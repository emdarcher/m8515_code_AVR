
#include "main.h"

/* defines */

/* function prototypes */

void main(void){

    /* init stuff */
    DDRE |= (1<<PE1);    
    /* infinite loop */
    while(1){
       PORTE ^= (1<<PE1);
        _delay_ms(500); 
    }
}

/* function bodies */



/* Interrupt Service Routines */



