void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readString();
    input.trim();
    Serial.println(input);
  }
}