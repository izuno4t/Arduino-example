char melody[] = {12, 7, 7, 8, 7, 11, 12, -1};
int dur[] = {500, 250, 250, 500, 1000, 500, 500, 6000};
int n = 0;

void setup() {
}

void loop() {
    if (melody[n] >= 0) {
        int freq = 440 * pow(1.059463, melody[n]);
        tone(8, freq, dur[n] * 0.8);
    }
    else
        noTone(8);
    delay(dur[n]);
    n = (n + 1) % sizeof(melody);
}
