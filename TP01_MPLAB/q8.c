#define byte unsigned char

byte *trisb = 0xf93;
byte *portb = 0xf81;

void main(void)
{
    *trisb = 0;
    *portb = 0x55;
    while(1);
} 