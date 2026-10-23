// Buggy.h
#ifndef Buggy_h
#define Buggy_h

#include <Arduino.h>

class BUGGY {
  private:
    int buggyPin;
    unsigned char motorState;
  public:
    BUGGY(int pin);
    void goForwards();
    void stop();
    int getState();

};

#endif