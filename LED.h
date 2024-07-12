
#ifndef LED_H
#define LED_H


#include <Arduino.h>




class LED {
    
  private:
    int ledPin; 

  public:
  
    LED(int pin);
    void on();
    void off();
    void blink();
    void wave();
}

 
#endif
    

