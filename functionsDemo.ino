int ledPin = 7;
int l = 8;
int x = 9;
int y = 10;
int m = 4;

void setup() {
  // put your setup code here, to run once:

}void light(int cool)            // run over and over again
{
  digitalWrite(cool, HIGH);   // sets the LED on
  delay(100);                  // waits for a second
  digitalWrite(cool, LOW);    // sets the LED off
  delay(100);                  // waits for a second
}

void loop() {light(ledPin);light(x);light(l);light(y);light(m);

  // put your main code here, to run repeatedly:

}
