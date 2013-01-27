/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  //Serial.begin(9600);
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  //randomSeed(analogRead(0));
}

// the loop routine runs over and over again forever:
void loop() {
  long randNumber;
  //randNumber = random(50, 2000);
  //Serial.println(randNumber);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(100);

  // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //randNumber = random(1000, 2000);
  //Serial.println(randNumber);
  delay(10);               // wait for a second
 
}
