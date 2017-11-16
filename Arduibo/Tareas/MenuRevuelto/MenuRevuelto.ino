#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);//Pantallita inicializacion
//Primer Sensor Potenciometro
int Led =14;
int poten=A1;
//Segundo Sensor QRD1114
int Sensor=A0;
//Tercer Sensor Fotosensor
int Led2=15;
int Sensor3=A3;
//Cuearto Sensor Herradura
int Sensor2=10;
int Buzzer=13;
//Menu
int Btn1=21;
int Btn2=20;
int Btn3=19;
int Btn4=18;
int op=0;
//**********Funcion SETUP*************//
void setup() {
//Inicializacion Pantallita
lcd.begin(16,2);
//Inicializacion Sensores
Serial.begin(9600);
//Inicializacion Led del Sensor Potenciometro
pinMode (Led, OUTPUT); 
//Inicializacion Led del Sensor Fotosensor
pinMode (Led2, OUTPUT); 
//Inicializacion Led del Buzzer
pinMode (Buzzer,OUTPUT);
//Interrupciones
attachInterrupt(digitalPinToInterrupt(Btn1),Case1,CHANGE);
attachInterrupt(digitalPinToInterrupt(Btn2),Case2,CHANGE); 
attachInterrupt(digitalPinToInterrupt(Btn3),Case3,CHANGE); 
attachInterrupt(digitalPinToInterrupt(Btn4),Case4,CHANGE);
}
void loop() {
//Inicializacion Potenciometro
    int sensorPoten = analogRead(poten)/4; 
    analogWrite(Led, sensorPoten);
//Sensor de qrd1114
    float sensorQRD1114 = analogRead(Sensor);
//fotosensor
    int sensorFoto=analogRead(Sensor3);
    sensorFoto = map(analogRead(Sensor3),1023,0,0,255);
    analogWrite(Led2, sensorFoto);
//Herradura 
    int sensorHerr= digitalRead(Sensor2);
    digitalWrite(Buzzer,sensorHerr);
switch(op){
    case 1:
      lcd.setCursor(0,0);
      lcd.write("Potenciador");
      lcd.setCursor(2,1);
      Serial.println(String(sensorPoten));
      lcd.print(sensorPoten);
      break;
    case 2:
      lcd.setCursor(0,0);
      lcd.write("QRD1114");
      lcd.setCursor(2,1);
      Serial.println(sensorQRD1114);
        lcd.print(sensorQRD1114);
      break;
    case 3:
      lcd.setCursor(0,0);
      lcd.write("Fotosensor");
      lcd.setCursor(2,1);
      Serial.println(sensorFoto);
        lcd.print(sensorFoto);
      break;
    case 4:
      lcd.setCursor(0,0);
      lcd.write("Herradura");
      lcd.setCursor(2,1);
       Serial.println(sensorHerr);
        lcd.print(sensorHerr);
      break;
    default:
      break;
    }
//******************************todos******************
  delay(1);
}
void Case1(){
  lcd.clear();
  op=1;
}
void Case2(){
  lcd.clear();
  op=2;
}
void Case3(){
  lcd.clear();
  op=3;
}
void Case4(){
  lcd.clear();
  op=4;
}
