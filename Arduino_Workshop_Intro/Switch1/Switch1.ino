void setup() {
    pinMode(13, OUTPUT);
}

void loop() {
    boolean sw = digitalRead(2);
    digitalWrite(13, sw);
}
