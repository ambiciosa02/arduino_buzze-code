#define BUZZER 9  // Broche du buzzer

void setup() {
    pinMode(BUZZER, OUTPUT);
    Serial.begin(9600);
}

void loop() {

        tone(BUZZER, 1000); // Fait sonner le buzzer à 1kHz

    delay(500); // Pause pour éviter trop de bruit
}
