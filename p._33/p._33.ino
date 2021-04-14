#define LED 12
#define SW 2
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  int SW_in;
  SW_in = digitalRead(SW);
  if (SW_in == LOW) {
    digitalWrite(LED, HIGH);
    delay(500);
  }
  else
    digitalWrite(LED, LOW);
}
