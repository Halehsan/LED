
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
    
//  In this case, it might be okay not to use include guards, but it is recommended to use them.

///  Reasons to use include guards:

// - Prevents multiple definitions: Avoids errors from multiple definitions if the header file is included multiple times.
// - Reduces compile time: Prevents the same header file from being included multiple times, therefore reducing compile time.
