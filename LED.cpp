#include <LED.h>


void LED::LED(int pin){

      ledPin = pin;

      pinMode(ledPin, OUTPUT);
}

void on() {
      digitalWrite(ledPin, HIGH);
}

void off() {
      digitalWrite(ledPin, LOW);
}

void blink(int speed, int n) {
      for (int i = 0; i < n; i++) {
        on();
        delay(speed);
        off();
        delay(speed);
      }
}

void wave(int speed) {
      for (int brightness = 0; brightness <= 255; brightness++) {
        analogWrite(ledPin, brightness);
        delay(speed);
      }
      for (int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(ledPin, brightness);
        delay(speed);
      }
}


