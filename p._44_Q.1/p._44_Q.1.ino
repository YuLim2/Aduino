#define LED 2
void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int d;
  if(Serial.available()){
    int value =Serial.read();
    if(value =='1')
    digitalWrite(LED, HIGH);
    if(value =='0'){
  digitalWrite(LED, LOW);
  }  }
  

}
