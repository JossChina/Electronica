#include <16f877.h>
#FUSES XT,NOWDT,NOPROTECT,PUT
#USE DELAY( CLOCK=20000000)
//DEFINICIONES GLOBALES
//Definiciones de Variables Globales
//declaración de subrutinas o Métodos
//Programa Principal
void main(){
//Definiciones de Variables Locales
//output_d(0x00);//para borrar la entrada de los puertos 
int ochopinocho[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
int c;
//Configuración de Puertos
//Prueba de Definiciones globales
//Bucle principal
  while(1){
     //Instrucciones del programa
     for(c=0;c<=9;c++){
        output_d(ochopinocho[c]);
        delay_ms(1000);  
     }
  }//end while
}//end main
