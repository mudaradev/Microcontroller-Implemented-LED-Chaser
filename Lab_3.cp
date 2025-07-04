#line 1 "C:/Users/Hp/Desktop/Elec_Lab/Lab3/Lab_3.c"
void knightrider(void) {
 int i;

 TRISB = 0x00;
 PORTB = 0x01;
 for (i = 1; i <= 7; i++) {
 PORTB = (PORTB << 1);
 Delay_ms(100);

 }

 for (i = 7; i >= 1; i--) {
 PORTB = (PORTB >> 1 );
 Delay_ms(100);
 }
}
void main()
 {
 CMCON = 0x07;
 TRISA = 0xff;
 while (1)
 knightrider();
}
