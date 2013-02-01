const int SW = 2;
const int LED = 13;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    boolean sw = digitalRead(SW);
    digitalWrite(LED, sw);
}
