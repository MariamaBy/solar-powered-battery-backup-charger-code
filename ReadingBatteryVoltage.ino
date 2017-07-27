int purple = 7;
int orange = 8;
int blue = 9;
int yellow= 10;
int green= 4;
void setup() {
  // put your setup code here, to run once:

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
  if ( voltage > 1) {
    digitalWrite(purple, HIGH);
  }
  else {
    digitalWrite (purple, LOW);
  }

  if (voltage > 2) {
    digitalWrite(orange, HIGH);
  }
  else {
    digitalWrite(orange, LOW);
  }
  if (voltage > 3) {
    digitalWrite(blue, HIGH);

  } else {
    digitalWrite(blue, LOW);
  }
  if (voltage > 4) {
    digitalWrite(yellow, HIGH);

  } else {
    digitalWrite(yellow, LOW);
  }

  if (voltage == 5) {
    digitalWrite(green, HIGH);

  } else {
    digitalWrite(green, LOW);
  }
}








