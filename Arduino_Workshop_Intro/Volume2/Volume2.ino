const int PWM = 11;

void setup() {
}

void loop() {
    int x = analogRead(A0);
    int y = exp(x / 1023.0 * log(256.0)) - 1;
    analogWrite(PWM, y);
}
