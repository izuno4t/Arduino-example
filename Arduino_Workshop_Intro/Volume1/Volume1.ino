const int PWM = 13;

void setup() {
}

void loop() {
    int a = analogRead(A0);
    analogWrite(PWM, a / 4);
}
