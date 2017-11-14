void setup() {
  // Todo lo que solamente
  //necesitamos que se ejecute una vez:pins de entrada etc
 // Establece un pin digital como salida.
 // El Pin 13 tiene un LED conectado a el.
pinMode(13, OUTPUT);
}
void loop() {  
// Lo que queremos que se este ejecuntando continuamente
digitalWrite(13, HIGH);   // enciende el LED
delay(10000);              // espera un segundo
digitalWrite(13, LOW);    // apaga el LED
delay(10000);              // espera un segundo
}

