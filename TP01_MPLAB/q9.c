#define byte unsigned char
#include "iq.h"

byte *trisb = 0xf93 ;
byte *portb = 0xf81 ;

void affiche_7seg(byte val)
{
    /* a compléter */
    byte tab_7seg[] = {0b00111111,0b00000110,0b01011011,0b01001111, 0b01100110, 0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111};
    *portb = tab_7seg[val];
}

void main(void)
{
    *trisb = 0;
    /*test de la fonction */
    affiche_7seg(2);
    while(1);
} 