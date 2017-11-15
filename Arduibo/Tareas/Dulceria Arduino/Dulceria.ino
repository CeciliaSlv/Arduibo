int Btn1=2;//pin para interrupciones
int Btn2=3;//pin para interrupciones
int Btn3=20;//pin para interrupciones
int Btn4=21;//pin para interrupciones
int Led1=8;
int Led2=9;
int Led3=10;
int Led4=11;
int Sensor=A0;//Pin analogico
int contador;//Dinero
int auxnumero;
void setup() {
  // put your setup code here, to run once:
  pinMode(Led1,OUTPUT);          
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  pinMode(Led4,OUTPUT);
  Serial.begin(9600);//PARA EL SENSOR
  attachInterrupt(digitalPinToInterrupt(Btn1),diminuir5,RISING); 
  attachInterrupt(digitalPinToInterrupt(Btn2),diminuir6,RISING); 
  attachInterrupt(digitalPinToInterrupt(Btn3),diminuir7,RISING); 
  attachInterrupt(digitalPinToInterrupt(Btn4),diminuir8,RISING);  
}
void loop() {
  int sensorValue = analogRead(Sensor);
  //Serial.println(sensorValue);
  auxnumero=0;//hacemos la variable auxnumero 0. Esta variable nos ayuda a contar solo 1 cada vez que entremos en el bucle de más abajo
  while(sensorValue<400){//Entramos en el bucle si valorLDR es menor de 400. Esto ocurre cuando no hay conexion.
    sensorValue = analogRead(Sensor);// Leemos el valor del sensor y lo guardamos en sensorValue 
    if(auxnumero==0){// Entramos en el if si auxnumero es 0. Esto solo ocurre la primera vez que recorremos el while.
    contador++;//Sumamos 1 a la variable contador
    auxnumero=1;//hacemos auxnumero 1, para que solo sume una vez 1 a la variable numero cuando estamos dando vueltas dentro del bucle.
      }
    }
   Serial.println(contador);
   if(contador>=5){
    digitalWrite(Led1,HIGH);
   }else{
    digitalWrite(Led1,LOW);
   }
   if(contador>=6){
    digitalWrite(Led2,HIGH);
   }else{
    digitalWrite(Led2,LOW);
   }
   if(contador>=7){
    digitalWrite(Led3,HIGH);
   }else{
    digitalWrite(Led3,LOW);
   }
   if(contador>=8){
    digitalWrite(Led4,HIGH);
   }else{
    digitalWrite(Led4,LOW);
   }
  delay(1); 
}
void diminuir5(){
  if(contador>=5){
  contador-=5;}
}
void diminuir6(){
  if(contador>=6){
  contador-=6;}
}
void diminuir7(){
  if(contador>=7){
  contador-=7;}
}
void diminuir8(){
  if(contador>=8){
  contador-=8;}
}
