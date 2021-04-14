void setup() {
Serial.begin(9600);

Serial.print("Start: ");
Serial.println("Write data");

Serial.write('A');
Serial.write('\n');
Serial.write(65);
Serial.write('\n');
Serial.write('Hello');
Serial.write('\n');

char srt[]={'w', 'o', 'r', 'l', 'd', '\0'};
Serial.write(str);
Serial.write('\n');
Serial.write(str, 3);
}

void loop() {

  
}
