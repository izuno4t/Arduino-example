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
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  randomSeed(analogRead(0));
}

// the loop routine runs over and over again forever:
void loop() {
  
  long randNumber;
 
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  randNumber = random(100, 2000);
  delay(randNumber);
  
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  randNumber = random(100, 1000);
  //Serial.println(randNumber);
  delay(randNumber);               // wait for a second
 
}
