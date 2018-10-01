/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
#define LED 12
#define INPUT 2

// the setup routine runs once when you press reset:
int d=50;//variable que lleva el tiempo que encendido y apagado de los led
void setup() {                
  // initialize the digital pin as an output.
   pinMode(LED, OUTPUT);
   pinMode(INPUT, INPUT);
   Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  if(digitalRead(2) == HIGH){
 Serial.println("alto");
 digitalWrite(12, HIGH);
 }
  else{
  Serial.println("bajo");
} 
 
  
}
