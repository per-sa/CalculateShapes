#include <stdio.h>
#include <math.h>
#include "circle.h"
#include "triangle.h"

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    isValidParam(radius);
    printf("%.2f\n", circleArea(radius));

    double cat1, cat2, cat3;
    printf("Enter cat1, cat2, cat3: ");
    scanf("%lf %lf %lf", &cat1, &cat2, &cat3);
    isValidTriangle(cat1, cat2, cat3);
    triangleType(cat1, cat2, cat3);
    return 0;
}



