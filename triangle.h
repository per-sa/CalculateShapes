#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void isValidTriangle(double cat1, double cat2, double cat3) {
    if (cat1 <= 0 || cat2 <= 0 || cat3 <= 0) {
        printf("Invalid parameters");
    }
}

void triangleType (double A, double B, double C){
    isValidTriangle(A, B, C);
    double areaResult;

    if(A == B && B == C)
    {
        areaResult = sqrt(3) / 4 * A * A;
        printf("O triângulo é equilátero. Area: %.2f", areaResult);
    }
    else if(A == B && A == C && B!=A && B!=C)
    {
        double p = (A + B + C) / 2;
        areaResult = sqrt(p * (p - A) * (p - B) * (p - C));
        printf("O triângulo é isósceles. Area: %.2f", areaResult);
    }
    else
    {
        double p = (A + B + C) / 2;
        areaResult = sqrt(p * (p - A) * (p - B) * (p - C));
        printf("O triângulo é escaleno. Area: %.2f", areaResult);
    }
}

