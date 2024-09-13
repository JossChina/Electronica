#include <16F877A.h>
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP
#use delay(clock=20000000)
//DEFINICIONES GLOBALES
//Definiciones de Variables Globales
//declaraci�n de subrutinas o M�todos
//Programa Principal
int cont = 1;

const int U[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
//Definiciones de Variables Locales
//output_d(0x00);//para borrar la entrada de los puertos
void main() {
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_psp(PSP_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   
   set_tris_a(0xFF); // Configura todos los pines de PORTA como entrada
   set_tris_b(0xFF); // Configura todos los pines de PORTB como entrada
   set_tris_c(0x00); // Configura todos los pines de PORTC como salida
   set_tris_d(0x00); // Configura todos los pines de PORTD como salida
   set_tris_e(0x00); // Configura todos los pines de PORTE como salida

   output_a(0x00);
   output_b(0x00);
   output_c(0x3F); // Inicializa PORTC con el valor del primer elemento de U
   output_d(0x00);
   output_e(0x00);

   while(1) {
      if(input(PIN_A3) == 1) {
         delay_ms(25);
         if(input(PIN_A3)) {
            output_c(U[cont]);
            cont = cont + 1;
            if(cont > 9) {
               cont = 0;
            }
         }
      }
   }
}
