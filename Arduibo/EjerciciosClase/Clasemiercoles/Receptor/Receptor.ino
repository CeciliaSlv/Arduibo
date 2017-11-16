#include <VirtualWire.h>
#include <VirtualWire_Config.h>
int led=12;

void setup() {
  // put your setup code here, to run once:
vw_setup(7000);//mismo que el emisor
vw_rx_start();
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  uint8_t msg[VW_MAX_MESSAGE_LEN];
  uint8_t len=VW_MAX_MESSAGE_LEN;
  if(vw_get_message(msg,&len)){
    if(msg[0]=='A'){
      digitalWrite(led,HIGH);
    }
    else if(msg[0]=='E'){
      digitalWrite(led,LOW);
    }
    else{
      
    }
  }
}
