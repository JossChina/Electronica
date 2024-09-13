#include <16f877.h>
#FUSES XT,NOWDT,NOPROTECT,PUT
#USE DELAY( CLOCK=20000000)
//DEFINICIONES GLOBALES
//Definiciones de Variables Globales
//declaración de subrutinas o Métodos
//Programa Principal
void main(){
//Definiciones de Variables Locales
//Configuración de Puertos
set_tris_b(0xff);
set_tris_d(0x00);
//Prueba de Definiciones globales
//Bucle principal
  while(1){
     //Instrucciones del programa
     if(input_state(PIN_B0)==1)
     {
         output_high(PIN_D0);
         output_low(PIN_D1);
     }
     else
     {
         output_low(PIN_D0);
         output_high(PIN_D1);
     }
  }//end while
}//end main
