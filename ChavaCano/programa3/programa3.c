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
int ochopinocho[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
//Configuración de Puertos
//Prueba de Definiciones globales
//Bucle principal
  while(1){
     //Instrucciones del programa
     if(input_state(PIN_B0)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[0]);//encedemos el 0 con el puerto d
     
     if(input_state(PIN_B1)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[1]);//encedemos el 0 con el puerto d
       
     if(input_state(PIN_B2)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[2]);//encedemos el 0 con el puerto d
       
     if(input_state(PIN_B3)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[3]);//encedemos el 0 con el puerto d
     
     if(input_state(PIN_B4)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[4]);//encedemos el 0 con el puerto d
       
     if(input_state(PIN_B5)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[5]);//encedemos el 0 con el puerto d
     
     if(input_state(PIN_B6)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[6]);//encedemos el 0 con el puerto d
     
     if(input_state(PIN_B7)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[7]);//encedemos el 0 con el puerto d
       
     if(input_state(PIN_B1)==0 && input_state(PIN_B7)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[8]);//encedemos el 0 con el puerto d
       
     if(input_state(PIN_B2)==0 && input_state(PIN_B7)==0)//si oprimimos el botun que esta conectado al pin b0
       output_d(ochopinocho[9]);//encedemos el 0 con el puerto d
     
  }//end while
}//end main
