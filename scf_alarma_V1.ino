
int led_1_azul = 9;      // the PWM pin the LED is attached to
int led_2_verde = 10;     // the PWM pin the LED is attached to
int led_3_rojo = 11;      // the PWM pin the LED is attached to
int led_4_blanco = 12;   // the PWM pin the LED is attached to
int led_5_amarillo = 13;// the PWM pin the LED is attached to


int sensor_1= 2;
int sensor_ventana_1;
// the setup routine runs once when you press reset:
void setup() 
{
  // declare pins to be an output:
  pinMode(led_1_azul, OUTPUT);
  pinMode(led_2_verde, OUTPUT);
  pinMode(led_3_rojo, OUTPUT);
  pinMode(led_4_blanco, OUTPUT);
  pinMode(led_5_amarillo, OUTPUT);

  pinMode(sensor_1, INPUT);
  
  
}

// the loop routine runs over and over again forever:
void loop() 
{
  
  // set the pin of pin 9:
  sensor_ventana_1=digitalRead(sensor_1);
  if (sensor_ventana_1==1)
  {
    digitalWrite(led_1_azul,1);

  }
  else
   
    digitalWrite(led_1_azul,0);


  // set the pin of pin 10:
  digitalWrite(led_2_verde,1);


  // set the pin of pin 11:
  digitalWrite(led_3_rojo,1);

  // set the pin of pin 12:
  digitalWrite(led_4_blanco,1);

  // set the pin 13 on:
  digitalWrite(led_5_amarillo,1);


 



}
