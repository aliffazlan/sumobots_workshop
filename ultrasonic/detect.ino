
const int TRIG_PIN = 9;
const int ECHO_PIN = 8;
const int LED_PIN = 13;
const int THRESHOLD = 500;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
    digitalWrite(TRIG_PIN, HIGH);   
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    unsigned long duration = pulseIn(ECHO_PIN, HIGH); 

    if (duration > THRESHOLD) digitalWrite(LED_PIN, HIGH);
    else digitalWrite(LED_PIN, LOW);
    
    delay(250);
}
