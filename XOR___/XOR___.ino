byte Cur_LED;
void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(96000);
  digitalWrite(2, LOW);

}

void loop() {
  if (Serial.available()) {
    int i = Serial.parseInt();
    Serial.println(i);
    if (i == 1) {
      Cur_LED = Cur_LED ^ 1;
      digitalWrite(2, Cur_LED);
    }
  }

}
