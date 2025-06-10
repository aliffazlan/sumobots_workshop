# Infrared Sensors

## How they work

Infrared (IR) sensors work by sending out a beam of infrared light, which will bounce off most surfaces, and reflect back into the sensor. This allows us to detect is an object is close to the sensor.

On Arduino projects, IR sensors are most often used for:

- **Obstacle detection**  
- **Proximity sensing**  
- **Line following** (in robotics)  

This is especially useful for detecting if your sumobot is on the ring or not. The ring is colored black, and since the sensor works by reflecting light, the sensor won't trigger 


## How It Works

1. **IR LED (Emitter):**  
   - Emits infrared light that your eyes can’t see.  
2. **IR Photodiode / Phototransistor (Receiver):**  
   - Senses the reflected IR light bouncing back from nearby objects.  
3. **Comparator / Voltage Divider (on module):**  
   - For digital modules, an onboard comparator turns the analog signal into a simple HIGH/LOW output.  

> **Note:** Bright ambient light can affect readings. Many modules include potentiometers to tweak sensitivity.

---

## Wiring & Setup

1. **Power**  
   - VCC → `5V` (or `3.3V` for 3.3V modules)  
   - GND → `GND`  
2. **Signal**  
   - **Digital module:** OUT → any digital pin (e.g., `2`)  
   - **Analog module:** OUT → any analog pin (e.g., `A0`)  

```txt
[ Arduino ]           [ IR Module ]
    5V   ──────────────►  VCC
    GND ──────────────►  GND
    D2  ──────────────►  OUT (digital)
```

## Programming Logic

- Reads **HIGH** when no object detected.
- Reads **LOW** when object is close

*Note:* Could be vice versa depending on the module.

```cpp
const int irPin = 2;   // Digital IR output
const int ledPin = 13; // On-board LED

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(irPin);
  if (state == LOW) {        // Object detected
    digitalWrite(ledPin, HIGH);
    Serial.println("Obstacle!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Clear");
  }
  delay(200);
}
```

