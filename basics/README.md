# Programming Basics

This section is intended for those of you who have very limited or no programming experience! Programming might seem very intimidating and you may feel like its hard to wrap your head around certain concepts, but with enough practice, you can make it! As long as you can get these basic concepts, everything else will come naturally, so don't get discouraged too fast!

## Variables

Variables are essentially pieces of data that we assign a name to. You can think of it as a box with a label, and we put an object in it. For example, we can have a variable called `num`, and place the number 5 in it. This would look something like:

```cpp
int num = 5;
```

What did we just do? Let's go through it step by step. Assigning a variable usually follows this format:

```
<Data Type> <Variable Name> = <Value> ;
```

- In this case, the data type we used was `int`; short form of **"Integer"**, which means whole numbers.
- Then we have the variable name, which we called `num`. Note that variable names are alphanumeric (meaning only numbers and letters), and must start with a letter.
- The `=` sign assigns the value to the variable. Don't get confused with `==` (double equals) which we will see later. 
- The value is simply the value we wanna set (pretty self explanatory xd). Make sure that the value makes sense with the data type we are using. For example, if we are using `int`, it wouldn't make sense to set the value to something like `3.14`, which is a `float`
- Note the semicolon (`;`) at the end. Most lines will end in a semicolon to tell the program that its the end. One of the most common mistakes is leaving out the semicolons on your lines.

Variables can be used anywhere in your program, such as in conditions *(which you will see later)*, and setting other variables as well. A very common technique people use is incrementing a variable, which looks like this:

```cpp
num = num + 1;
```

Assuming `num` was already declared as an `int` previously, this line of code will increase the value by 1. Can you see how it works?

## Data Types

I briefly mentioned data types before, but what are they and what types exist? Data types can vary between different programming languages, but some remain largely similar. For the sake of the workshop, we will focus on types in C++, which is what the Arduino language is based on.

| Data Type | what | Example |
| ------ | ------ | ------ |
| `int` | Whole Numbers | `int x = 5;` <br> `int y = -3;` |
| `float` | Decimal Point Numbers | `float x = 3.14;` <br> `float y = 7.0;`|
| `long` | Big Integers | `long x = 1234567891234;` <br> `long y = 420 * 420 * 420;`|
| `char` | Single Character | `char c = 'a';` <br> `char c2 = '6';`|
| `String` | Text | `String s = "Hello!"` <br> `String msg = "12345"`|
| `bool` | Boolean (True or False) | `bool b = true;` <br> `bool b = false;`|

There are many more data types, including custom made ones called *"structs"*, but we don't need to get into that yet (unless you want in which case go for it and search it up!!!)

## Arithmetic

You can do math using variables as well! All the basic operators you are familiar with can be used.

| Symbol | Operator |
| ------ | ------ |
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |
| `%` | Modulus (take the remainder) |

For example:

```cpp
int x = 10;
int y = 3;
int z = x * y;
// z = 30
```

```cpp
int a = 14;
int b = a % 4;
// b = 2, since remainder when 14/4 is 2
```

## Conditions

What happens **if** we want to execute a piece of code only in a certain situation? For example, a Sumobot should go forward **if** the enemy bot is infront. Or maybe we want to turn on an LED **if** our sensor detects something. We can do this using condition statements!

A condition essentially checks if a given statement is true, by using equalities:

| Symbol | Operator |
| ------ | ------ |
| `==` | Is Equal |
| `!=` | Not Equal |
| `>` | Greater Than |
| `<` | Less Than |
| `>=` | Greater Than Or Equal |
| `<=` | Less Than Or Equal |

But how do we actually use conditions? We use something called an **"if statement"**. Here's what it looks like:

```cpp
if (condition) {
    // code
    // code
    // code
}
```

The condition is wrapped in the round brackets, `( )`. The code that is to be executed is written inside the pointy brackets, `{ }`. The stuff inside the pointy brackets can also be referred to as a **code block**. You can also have code blocks inside other code blocks, as long as you close the brackets properly, for example:

```cpp
if (condition) {
    // code
    // code
    if (another_condition) {
        // more code
        // more code
    }
}
```

Here's an example of how to actually use an if statement. Let's suppose if `num` is equal to 10, then we set reset `num` to `0`.

```cpp
if (num == 10) {
    num = 0;
}
```

What happens if the condition isn't met? We can have a backup condition! We do this by using `if else`. Let's say if `num` is even, we want to halve `num`. Recall that we can use the **modulus** operator to check divisibility, as the remainder of a divisble number should be 0.

```cpp
if (num == 10) {
    num = 0;
} else if (num % 2 == 0) {
    num = num / 2;
}
```

In this example, the **code block** from the *else if* statement will be run **only if the first condition isn't met**. We can stack as many *else ifs* as we want. 

But what happens if none of the conditions in our *else ifs* are not met? We can use the `else` statement. This will run if none of the conditions in the block are run.

Let's see the example again. This time, if the number is not 10, and is not even, then we want to multiply `num` by `3`. 

```cpp
if (num == 10) {
    num = 0;
} else if (num % 2 == 0) {
    num = num / 2;
} else {
    num = num * 3;
}
```

Take your time and make sure you understand the example! It can be a little difficult learning this for the first time, especially learning through reading a random text document on github lol

## Looping

loop makes code repeat

2 type of loop:
- for loop
- while loop

__for loop__

```cpp
for (int i = 0; i < 10; i++) {
    Serial.println(i);
}
```
`i` is counter
goes from 0 to 9
basically loops from starting number to end number

__while loop__

```cpp
while (condition) {
    // code
}
```
keeps repeating the code while the condition is true
same type of conditions as above

can use with counter too:

```cpp
int counter = 0;
while (counter < 10) {
    // code
    counter = counter + 1;
}
```

*(sorry i got bored of writing ill fix it later)*
*(if u want more detail, feel free to msg me on discord* ***@walnutt*** *)*
*(if ur from the future and this isnt fixed, msg me)*

## Exercises

*No exercises here, since its kind of hard to see if you get things correct without printing, which you can learn in [Serial](../serial/README.md). The [Serial](../serial/README.md) exercises will have relevant content to practice basics.



