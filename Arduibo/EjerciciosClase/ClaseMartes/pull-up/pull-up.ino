int vel=2000;
int led=5;
int Boton=2;
void setup() {
pinMode(led, OUTPUT);
digitalWrite(led,LOW);
attachInterrupt(digitalPinToInterrupt(Boton),diminuir,CHANGE);
}
void loop() {  
  digitalWrite(led,HIGH);
  delay(vel);
  digitalWrite(led,LOW);
  delay(vel);
  }
void diminuir(){
  vel-=10
  0;
}

