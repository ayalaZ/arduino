/*
---------------------------------------------
  Contador de pulsos
---------------------------------------------

  Programa que muestra por pantalla (consola serial) el número
  de veces que el pulsador ha sido presionado. Además, cada vez
  que aumenta la cuenta, se enciende un LED.

*/

//--------------------------------------------------
//Declara puertos de entradas y salidas y variables
//--------------------------------------------------

int contador = 0;  //Variable para guardar la cuenta de pulsaciones
int estadoAnteriorBoton = 0; //Declaramos e inicializamos la variable
int valorBoton = 0; //Declaramos e inicializamos la variable
int dd=0;
int led=0;
//------------------------------------
//Funcion principal
//------------------------------------
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
  Serial.begin(9600);   //Inicia comunicación serie
  pinMode(2,INPUT);     //Configura el pin 2 como una entrada, pulsador
  pinMode(13,OUTPUT);  //configurando el pin 13 de salidad
  
}

//------------------------------------
//Funcion ciclica
//------------------------------------
void loop() // Esta funcion se mantiene ejecutando
{           //  cuando este alimentado el Arduino

valorBoton=digitalRead(2); //Leemos el estado del pulsador

if(valorBoton!=estadoAnteriorBoton){ //Si hay un cambio de estado, entramos en el if

  if(valorBoton==1){
    contador++; //Aumentamos en una unidad la cuenta
    Serial.println(contador); //Imprime el valor por consola
  
  }
if((contador%5)==0){//comparacion si el residuo es igual a cero
  dd=contador/5;//guardamos el resultado de la division entre contador y 5
   if((dd%2)==0){//verificamos si el resultado de la divion es un numero par
  digitalWrite(13, LOW);//si el resultado es un numero par apagamos el led
  }
  else{
   digitalWrite(13, HIGH);//si el resultado es un numero impar encendemos el led
  } 
 }
}
estadoAnteriorBoton=valorBoton; //guardamos el estado actual del pulsador para la siguiente iteración
}

