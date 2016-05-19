/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:


// the setup routine runs once when you press reset:
int d=50; //variable que lleva el tiempo que encendido y apagado de los led
void setup() {                
  // initialize the digital pin as an output.
  pinMode(9, OUTPUT); //salida del pin 9    
  pinMode(10, OUTPUT); //salida del pin 10
  pinMode(11, OUTPUT); //salida del pin 11
  pinMode(12, OUTPUT); //salidad del pin 12
  pinMode(13, OUTPUT); //salidad del pin 13
}

// the loop routine runs over and over again forever:
void loop() {
  int i=9;//variable que cambia el pin que encedera
  for(i; i<=13; i++){//for para ir variando el pin que seran las salidad
  digitalWrite(i, HIGH);//encedemos el led que correponde
  delay(d);//hacemos una pausa
  digitalWrite(i, LOW);//apagamos el led que corresponde
  }
  for(i=12; i>10; i--){//for que ira en decremento
   digitalWrite(i, HIGH);//encedemos el led que corresponde
  delay(d);//hacemos una pausa
  digitalWrite(i, LOW);//apagamos el led que corresponde
  }
  
}
