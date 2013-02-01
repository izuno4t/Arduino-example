void setup() {
    Serial.begin(9600);
}

void loop() {
    float vout = 5.0 * analogRead(A0) / 1023;
    float t = (vout - 0.424) / 0.00625;
    Serial.println(t);
    delay(1000);
}

