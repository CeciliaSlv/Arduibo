int led=8;
int Boton=4;
void setup() {
pinMode(led, OUTPUT);
pinMode(Boton,INPUT);
}
void loop() {  
if(digitalRead(Boton)==0){
  digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}

