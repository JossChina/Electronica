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
int i=0;
//Configuración de Puertos
//Prueba de Definiciones globales
//Bucle principal
  while(1){
     //Instrucciones del programa
     if(input_state(PIN_A3)==1){
       if(i>=9){
         i=0;
       }else{
                    i++;
                    output_c(ochopinocho[i]);
       }

     }//si oprimimos el botun que esta conectado al pin b0

        delay_ms(250);
  }//end while
  output_c(0x00);//para borrar la entrada de los puertos
}//end main
