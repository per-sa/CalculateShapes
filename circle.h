#include <stdio.h>
#include <math.h>

float circleArea(float radius) {
    return M_PI * (radius * radius);
}

void isValidParam(float radius) {
    if (radius <= 0) {
        printf("Invalid radius");
    }
}