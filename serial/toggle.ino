int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readString();
    input.trim();

    if (input == "ON") {
      digitalWrite(ledPin, HIGH);
    }
    else if (input == "OFF") {
      digitalWrite(ledPin, LOW);
    }
  }
}