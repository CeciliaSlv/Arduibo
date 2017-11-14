int led =11;
int poten=A0;
int brillo;  
void setup ()  {
  pinMode (led, OUTPUT); 
}
void loop (){
  brillo = analogRead(poten)/4; 
  analogWrite(led, brillo);
}
