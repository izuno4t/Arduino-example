char melody[] = {0, 2, 4, 5, 7, 9, 11, 12, -1};
int dur[] = {500, 500, 500, 500, 500, 500, 500, 500, 500};
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
