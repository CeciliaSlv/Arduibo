#include <VirtualWire.h>
#include <VirtualWire_Config.h>
int boton=2;
char *msg="";
int estado_Btn=0;//checamos el estado del boton

void setup() {
  // put your setup code here, to run once:
  //Conf. la velocidad con la que va a transmitir los datod el emisor
  vw_setup(6000);
  pinMode(boton,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
estado_Btn=digitalRead(boton);
if(estado_Btn==HIGH){
  *msg='A';
  vw_send((uint8_t *)msg,strlen(msg));
}else{
  *msg='E';
  vw_send((uint8_t *)msg,strlen(msg));
}
}
