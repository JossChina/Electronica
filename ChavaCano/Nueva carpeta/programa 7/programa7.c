#include <16f877.h>
#FUSES XT,NOWDT,NOPROTECT,PUT
#USE DELAY( CLOCK=4000000)
#include <lcd.c>
//DEFINICIONES GLOBALES
//Definiciones de Variables Globales
//declaraci�n de subrutinas o M�todos
//Programa Principal
void main(){
//Definiciones de Variables Locales
//Configuraci�n de Puertos
//Inicializacion del LCD
int x, y;
lcd_init();
//Prueba de Definiciones globales
//Bucle principal
  while(1){
     //Instrucciones del programa
     
     for(x=0;x<=20;x+=2){
                    lcd_gotoxy(x-1,1);
                    lcd_putc("*");
                    delay_ms(400);
                    lcd_gotoxy(x-1,1);
                    lcd_putc(" ");
                    
                    
                    lcd_gotoxy(x,2);
                    lcd_putc("*");
         

         delay_ms(400);
         lcd_gotoxy(x,2);
         lcd_putc(" ");
         
         
     }

  }//end while
}//end main
