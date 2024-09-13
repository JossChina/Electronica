#include <16f877A.h>
#FUSES XT,NOWDT,NOPROTECT,PUT
#USE DELAY( CLOCK=2000000)
#include <lcd.c>
//DEFINICIONES GLOBALES
//Definiciones de Variables Globales
//declaración de subrutinas o Métodos
//Programa Principal
void main(){
//Definiciones de Variables Locales
//Configuración de Puertos
//Inicializacion del LCD
int x, y;
lcd_init();
//Prueba de Definiciones globales
//Bucle principal
  while(TRUE){
       for(x=0; x<=16; x=x+2){

       lcd_gotoxy(x,1);
       lcd_putc("*");
       delay_ms(400);
       lcd_gotoxy(x,1);
       lcd_putc("");
       delay_ms(400);

       x=x+2;

       lcd_gotoxy(x,3);
       lcd_putc("*");
       delay_ms(400);
       lcd_gotoxy(x,3);
       lcd_putc("");
       delay_ms(400);


     }

  }//end while
}//end main
