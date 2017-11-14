int led=7;
int Boton=5;
void setup() {
pinMode(led, OUTPUT);
pinMode(Boton,INPUT);
}
void loop() {  
if(digitalRead(Boton)==HIGH){
  digitalWrite(led,HIGH);
  delay(1000);
  }
  else{
    digitalWrite(led,LOW);
  }
}

