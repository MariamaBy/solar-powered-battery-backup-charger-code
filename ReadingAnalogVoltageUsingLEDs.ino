/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
  
  modified 8 Sep 2016
  by Colby Newman
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}





// the loop function runs over and over again forever
void loop() {

int purple = 7;
int orange = 8;
int blue = 9;
int yellow= 10;



  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);


// the loop routine runs over and over again forever:

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (3.7 / 1023.0);
  // print out the value you read:
Serial.println(voltage);

  if ( voltage > 1 && voltage < 2) digitalWrite(purple, HIGH);

  
 
  else if (voltage > 2 && voltage < 3)  

































































  
    digitalWrite(orange, HIGH);
    digitalWrite(purple, HIGH);
  }
 
  
  else if (voltage > 3 && voltage < 3.6) {
    digitalWrite(blue, HIGH);
    digitalWrite(orange, HIGH);
    digitalWrite(purple, HIGH);

  } 
  
  
  else if (voltage > 3.6 ) {
    digitalWrite(yellow, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(orange, HIGH);
    digitalWrite(purple, HIGH);

  } 
  else{
    digitalWrite(purple,LOW);
  digitalWrite(orange, LOW);
   digitalWrite(blue, LOW);
  digitalWrite(yellow, LOW);
 }
}
 
 




















