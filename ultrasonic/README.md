# Ultrasonic Sensor Basics 

## How Ultrasonic Sensors Work

Ultrasonic sensors measure distance using sound waves. They emit a short ultrasonic pulse from the **trigger** pin, and then listen on the **echo** pin for the sound to bounce back from an object.

- The sensor sends out a high-frequency sound wave.
- This wave reflects off of any nearby object.
- The sensor detects the echo and measures the time it took to return.
- Since we know the speed of sound (~343 meters per second), we can calculate the distance using the time delay.

> **Formula:**  
> Distance (cm) = Time (microseconds) × 0.017

This formula accounts for the round-trip time (to the object and back), and converts microseconds to centimeters.

---

## Programming Logic

To use the ultrasonic sensor with Arduino:

1. Set the trigger pin to `LOW` for 2 microseconds to clear it.
2. Set it to `HIGH` for 10 microseconds to send the ultrasonic pulse.
3. Listen on the echo pin and measure how long it stays `HIGH` using the `pulseIn()` function.
4. Calculate the distance using the formula above.

### Example Code

See the basic example in [./distance.ino](./distance.ino) for a working demo of this process. The program will continuously print out the distance detected from the ultrasonic sensor!

---

## `pulseIn()` Function

The `pulseIn(pin, value)` function measures the length of a pulse on the specified pin. It waits for the pin to go `value` (either `HIGH` or `LOW`), starts timing, then stops timing when the pin goes to the opposite value. It returns a value of `unsigned long`.

Example:
```cpp
unsigned long duration = pulseIn(echoPin, HIGH);
```

## Exercise

Connect an LED and the ultrasonic sensor to your Arduino, then turn on the LED when a 'close' object is detected, otherwise, keep the LED off.
A 'close' object is up to you to interpret!

Try programming it yourself, and once you're finished, check out the solution here: [./detect.ino](./detect.ino) 
