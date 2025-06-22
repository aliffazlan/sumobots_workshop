// Motor A pins
const int ENA = 9;
const int IN1 = 8;
const int IN2 = 7;

// Motor B pins
const int ENB = 3;
const int IN3 = 5;
const int IN4 = 4;

void setup() {
    // Set all the motor control pins to outputs
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    // Set full power to motors
    analogWrite(ENA, 255);
    analogWrite(ENB, 255);

    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        String input = Serial.readString();
        input.trim()

        if (input == "F") {
            forward();
        } else if (input == "B") {
            back();
        } else if (input == "L") {
            left();
        } else if (input == "R") {
            right();
        } else if (input == "S") {
            stop();
        }
    }
}

void forward() {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void back() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void right() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void left() {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void stop() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}


