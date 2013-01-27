void setup() {
    for (int i = 0; i < 3; i++) {
        tone(8, 440, 400);
        delay(1000);
    }
    tone(8, 880, 2000);
    delay(2000);
    noTone(8);
}

void loop() {
}
