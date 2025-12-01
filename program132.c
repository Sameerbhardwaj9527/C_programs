// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>


enum TrafficLight {
    RED = 0,
    YELLOW,
    GREEN
};

int main() {
   
    enum TrafficLight light;

   
    light = GREEN;

    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    }

    return 0;
}