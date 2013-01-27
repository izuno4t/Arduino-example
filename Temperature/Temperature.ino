void setup() {
    Serial.begin(9600);
}

void loop() {
    float vout = 5.0 * analogRead(A0) / 1023;
    float t = (vout - 0.424) / 0.00625;
    Serial.println(t);
    Serial.println((t - 20) * 128);
    if( t >= 20){
      int y = exp(x / 1023.0 * log(256.0)) -1
      analogWrite(11, (t - 20) * 128);
    }else{
      analogWrite(11, 0);
    }
    delay(1000);
}

