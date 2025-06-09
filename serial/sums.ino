long sum = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    long input = Serial.parseInt();

    sum = sum + input;

    Serial.print("Sum: ");
    Serial.println(sum);
  }
}