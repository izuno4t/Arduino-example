void setup() {
  Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop() {
    boolean sw = digitalRead(2);
    //Serial.println(sw);
    if(sw){
      delay(2000);
      digitalWrite(13, !sw);
      delay(2000);
    }
    digitalWrite(13, HIGH);
}
