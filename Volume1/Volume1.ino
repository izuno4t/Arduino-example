const int PWM = 11;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int x = analogRead(A0);
  int y = exp(x / 1023.0 * log(256.0)) -1;
  analogWrite(PWM, y);
  Serial.println(y);
}

