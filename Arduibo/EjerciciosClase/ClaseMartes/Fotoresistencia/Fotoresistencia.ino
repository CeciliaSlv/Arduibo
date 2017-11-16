/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(15,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  //brillo = analogRead(A0)/4; 
  //analogWrite(11, brillo);
   int brillo=analogRead(A3);
   brillo=map(analogRead(brillo),1023,0,0,255);
  // brillo=map(brillo,0,1023,0,255);
   analogWrite(15,brillo);
  // print out the value you read:
  Serial.println(brillo);
 // delay(1);        // delay in between reads for stability
}
