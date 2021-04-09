#define LED 12
#define sw 2
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(sw, INPUT);
}

void loop() {
  int sw_in;
  sw_in = digitalRead(sw);
  if (sw_in == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(1000);
  }
  else
    digitalWrite(LED, LOW);

}
