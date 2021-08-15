#include <iostream>
#include <wiringPi.h>

#define WAITTIME    1000
#define PIN         0
#define OFF         0
#define ON          1

using namespace std;

int main() {
    wiringPiSetup();

    pinMode(PIN, OUTPUT);

    for (int i = 0; i < 10; i++) {
        digitalWrite(PIN, ON);
        delay(WAITTIME);
        digitalWrite(PIN, OFF);
        delay(WAITTIME);
    }

    return (0);
}