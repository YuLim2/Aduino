int pinLED[] = {2, 3, 4, 5, 6, 7, 8, 9};
int i;
void setup() {
  for (i = 0; i < 8; i++) {
    pinMode(pinLED[i], OUTPUT);
  }
}

void loop() {
  for (i = 0; i < 8; i++) {
    digitalWrite(pinLED[i], HIGH);
    delay(200);
    digitalWrite(pinLED[i], LOW);
    delay(200);
 }

  for (i = 8-1; i > 0; i--) {
    digitalWrite(pinLED[i], HIGH);
    delay(200);
    digitalWrite(pinLED[i], LOW);
    delay(200);
}
}
