# LED Library for Arduino

This library provides a simple interface to control an LED connected to an Arduino.

## Installation

1. Clone the repository to your Arduino libraries or a desired directory:
    ```sh
    git clone https://github.com/Halehsan/LED/master

    ```
2. Include the library in your sketch:
    ```cpp
    #include <LED.h>
    ```

## Usage

Create an instance of the `LED` class and use its methods to control the LED.

```cpp
#include <LED.h>

LED myLED(ledPin(13,...));

void setup() {}

void loop() {
  myLED.on();
  delay(1000);
  myLED.off();
  delay(1000);
}
