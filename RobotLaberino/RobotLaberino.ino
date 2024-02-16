// Práctica encender y apagar un LED
const int Front=11;
const int Diag=12;

const int LED=6;

const int LEFT_DIR=7;
const int LEF_PWM=9;

const int RIGHT_DIR=8;
const int RIGHT_PWM=10;

int Speed=15;      //velocidad

const int Q1 = A3;  // Analog input pin that the potentiometer is attached to
const int Q2 = A2;  // Analog input pin that the potentiometer is attached to
const int Q3 = A1;  // Analog input pin that the potentiometer is attached to
const int Q4 = A0;  // Analog input pin that the potentiometer is attached to

int D1 = 0;  // value read from the pot
int D2 = 0;  // value read from the pot
int D3 = 0;  // value read from the pot
int D4 = 0;  // value read from the pot


void setup()
{
pinMode(Front,OUTPUT);
pinMode(Diag,OUTPUT);
pinMode(LED,OUTPUT);
pinMode(LEFT_DIR,OUTPUT);
pinMode(LEF_PWM,OUTPUT);

pinMode(RIGHT_DIR,OUTPUT);
pinMode(RIGHT_PWM,OUTPUT);


  Serial.begin(9600);

}
void loop()
{
digitalWrite(Front,HIGH);
digitalWrite(Diag,HIGH);
digitalWrite(LED,LOW);

/*
digitalWrite(LEFT_DIR,HIGH);
digitalWrite(LEF_PWM,Speed);

digitalWrite(RIGHT_DIR,HIGH);
digitalWrite(RIGHT_PWM,Speed);
*/



// izquierda
digitalWrite(LEFT_DIR,LOW);
digitalWrite(LEF_PWM,Speed);
digitalWrite(RIGHT_DIR,LOW);
digitalWrite(RIGHT_PWM,Speed);



// ADELANTE
/*
digitalWrite(LEFT_DIR,HIGH);
digitalWrite(LEF_PWM,Speed);
digitalWrite(RIGHT_DIR,LOW);
digitalWrite(RIGHT_PWM,Speed);
*/

/*
// DERECHA
digitalWrite(LEFT_DIR,HIGH);
digitalWrite(LEF_PWM,Speed);
digitalWrite(RIGHT_DIR,HIGH);
digitalWrite(RIGHT_PWM,Speed);
*/

/*
// DETENIDO
digitalWrite(LEFT_DIR,HIGH);
digitalWrite(LEF_PWM,0);
digitalWrite(RIGHT_DIR,HIGH);
digitalWrite(RIGHT_PWM,0);
*/

//digitalWrite(LED,HIGH);


  D1 = analogRead(Q1);
  D2 = analogRead(Q2);
  D3 = analogRead(Q3);
  D4 = analogRead(Q4);

 Serial.print("D1 = ");
 Serial.print(D1);


 Serial.print(" D2 = ");
 Serial.print(D2);

 Serial.print(" D3 = ");
 Serial.print(D3);
 Serial.print(" D4 = ");
 Serial.println(D4);

   
  delay(1000);
  
  //delay(1000);
}