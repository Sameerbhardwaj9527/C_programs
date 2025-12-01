// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>


enum TrafficLight {
    RED = 0,
    YELLOW,
    GREEN
};


const char* getEnumName(enum TrafficLight light) {
    switch (light) {
        case RED: return "RED";
        case YELLOW: return "YELLOW";
        case GREEN: return "GREEN";
        default: return "Unknown";
    }
}

int main() {
    
    for (int i = RED; i <= GREEN; i++) {
        enum TrafficLight light = (enum TrafficLight)i;
        printf("%s=%d\n", getEnumName(light), light);
    }

    return 0;
}