int boton = 5;
int boton2 = 6;
int led = 7;  
int led2= 8;
int buzzer=9;
float sinVal;
int toneVal;
  
void setup() {
  pinMode(led,OUTPUT);          
  pinMode(led2,OUTPUT); 
  pinMode(buzzer, OUTPUT);
}
void loop(){
  if((digitalRead(boton)== 1)&&(digitalRead(boton2)== 1)){
     digitalWrite(led,HIGH);
     digitalWrite(led2,HIGH);
    for (int x=0; x<180; x++) {
  // pasamos de grados a radianes
  sinVal = (sin(x*(3.1412/180)));
  // Generamos la frecuencia
  toneVal = 2000+(int(sinVal*1000));
  tone(8, toneVal,2);
  }
  }
    if(digitalRead(boton)== 1){
    digitalWrite(led,HIGH);
    noTone(buzzer); 
  }
  if(digitalRead(boton2)== 1){
    digitalWrite(led2,HIGH);
    noTone(buzzer); 
  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(led2,LOW);
   noTone(buzzer); 
  }
}

