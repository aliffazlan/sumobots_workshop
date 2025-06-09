# Serial

## What *is* Serial?

“Serial” is simply a stream of data sent over a cable.  
On an Arduino board, the USB cable you plug into your computer is really just a USB-to-serial converter.
You can think of it as a way your laptop communicates with the board.

- **The program actually runs on the Arduino**, not on your laptop.  
- The Serial Monitor is just a chat window that sends characters to, and receives characters from, the Arduino.

---

## Getting Started

### 1 . Setting up

Inside `setup()` function, we must first start up the Serial process by using `Serial.begin(9600)`. The `9600` is the speed at which the board communicates with your laptop. The default rate with most boards is usually 9600, so we'll keep it that way.

```cpp
void setup() {
  Serial.begin(9600);
}
```

### 2. Printing to the terminal

We can use two functions to put messages to the terminal:
- `Serial.print()`
- `Serial.println`() -> this adds a new line at the end of the message.

```cpp
void setup() {
  Serial.begin(9600);
  String name = "Rambo";
}

void loop() {
  Serial.print("Hello ");
  Serial.println(name);
}
```

This example will continuously print out:  
`Hello Rambo`

### 3. Reading input

We can read user input from the user as well. We have a few functions to keep track of:

- `Serial.available()`: This checks if there is any data waiting to be received. When you send data through, you can think of it as being transferred through the wire, but then it waits at the end while waiting for the receiver to actually accept it.
- `Serial.readString()`: This will read the data as a String (a collection of characters). There are other types we can read, but to keep it simple, we will only use readString().
- `trim()`: This will remove excess bytes from Strings, as `Serial.readString()` will contain some extra bytes that we don't really need, like null bytes and new lines. This allows us to actually work with the String we read.

Example:

```cpp
void loop(){
  if (Serial.available()) {
    String msg = Serial.readString();
    msg.trim();
    Serial.print("You said: ");
    Serial.println(msg);
  }
}
```

## Exercises

Try out these exercises yourself! Once you're done, you can check with the sample solutions. Try do it on your own first without looking at the solutions!

#### 1. Numbers

Print out the numbers 1 to 10 continuously, with a 1 second delay between each print.

Hint: `delay(1000)` will pause the program for 1000ms!

**Solution**: [./numbers.ino](./numbers.ino) 

#### 2. Echo

Print back to the terminal whatever the user types in

**Solution**: [./echo.ino](./echo.ino) 

#### 3. Toggle

Connect an LED to your Arduino. If the user types "ON", turn it on. If the user types "OFF", turn it off.

**Solution**: [./toggle.ino](./toggle.ino) 


#### 4. Sums (CHALLENGE)

Write a program that continuously sums up numbers that the user inputs. For example:

Input: 2

Output: 2

Input: 5

Output: 7 (since 2 + 5 = 7)

Input: 3

Output: 10 (2 + 5 + 3 = 10)

**Note**: `Serial.readString()` doesn't read numbers as integers, so you'll need to find a way to read the data as a number. Check out [`Serial.parseInt()`](https://docs.arduino.cc/language-reference/en/functions/communication/serial/parseInt/)!

**Solution**: [./sums.ino](./sums.ino) 


