#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);//Pantallita inicializacion
//Inicializacion Potenciometro
int led =11;
int poten=A1;
int brillo; 
//Fin iniciallizacion Potenciometro
void setup() {
  // put your setup code here, to run once:
  //Inicializacion Pantallita
lcd.begin(16,2);
lcd.print("Hola boli!");
//Fin Inicializacion Pantallita

}

void loop() {
  // put your main code here, to run repeatedly:

}
