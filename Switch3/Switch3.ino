const int SW = 2;
const int LED = 13;

boolean sw = true;
boolean led = false;

void setup() {
  pinMode(SW, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(sw != digitalRead(SW)){
    delayMicroseconds(500);
    sw = !sw;
    if(!sw){
      led = !led;
      digitalWrite(LED, led);
    }
  }
}


