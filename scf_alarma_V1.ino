
int led_1_azul = 9;      // the PWM pin the LED is attached to
int led_2_verde = 10;     // the PWM pin the LED is attached to
int led_3_rojo = 11;      // the PWM pin the LED is attached to
int led_4_blanco = 12;   // the PWM pin the LED is attached to
int led_5_amarillo = 13;// the PWM pin the LED is attached to


int sensor_1= 2;
int sensor_2= 3;
int sensor_3= 4;
int sensor_4= 5;
int sensor_5= 6;


int sensor_ventana_1;
int sensor_ventana_2;
int sensor_ventana_3;
int sensor_ventana_4;
int sensor_ventana_5;

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
  pinMode(sensor_2, INPUT);
  pinMode(sensor_3, INPUT);
  pinMode(sensor_4, INPUT);
  pinMode(sensor_5, INPUT);
  
  
  
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
 sensor_ventana_2=digitalRead(sensor_2);
  if (sensor_ventana_2==1)
  {
    digitalWrite(led_2_verde,1);

  }
  else
   
    digitalWrite(led_2_verde,0);


    
  // set the pin of pin 11:
   sensor_ventana_3=digitalRead(sensor_3);
  if (sensor_ventana_3==1)
  {
    digitalWrite(led_3_rojo,1);

  }
  else
   
    digitalWrite(led_3_rojo,0);
  

  // set the pin of pin 121:
   sensor_ventana_4=digitalRead(sensor_4);
  if (sensor_ventana_4==1)
  {
    digitalWrite(led_4_blanco,1);

  }
  else
   
    digitalWrite(led_4_blanco,0);
  

  // set the pin of pin 13:
     sensor_ventana_5=digitalRead(sensor_5);
  if (sensor_ventana_5==1)
  {
    digitalWrite(led_5_amarillo,1);

  }
  else
   
    digitalWrite(led_5_amarillo,0);
  

}
