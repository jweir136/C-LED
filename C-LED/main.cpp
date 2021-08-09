#include <iostream>
#include <wiringPi.h>

#define WAITTIME    1000
#define PIN         0

using namespace std;

int main() {
    wiringPiSetup();

    pinMode(PIN, OUTPUT);

    for (int i = 0; i < 10; i++) {
        digitalWrite(PIN, 1);
        delay(WAITTIME);
        digitalWrite(PIN, 0);
        delay(WAITTIME);
    }

    return (0);
}