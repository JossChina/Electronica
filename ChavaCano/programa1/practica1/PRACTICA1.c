#include <16f877.h>
#FUSES XT,NOWDT,NOPROTECT,PUT
#USE DELAY( CLOCK=20000000)
//DEFINICIONES GLOBALES
#define prende_pin(x) output_high(x)
#define apaga_pin(x) output_low(x)
//Definiciones de Variables Globales
//declaraci�n de subrutinas o M�todos
//Programa Principal
void main(){
//Definiciones de Variables Locales
//Configuraci�n de Puertos
//Prueba de Definiciones globales
prende_pin(PIN_D0);
//Bucle principal
  while(1){
     //Instrucciones del programa
  }//end while
}//end main
