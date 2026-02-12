//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>
float my_pow(float x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int my_factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

float my_fabs(float x) {
    return x < 0 ? -x : x;
}

float cosinus(float x)
{
    float sum = 0;
    float term = 0.0;
    int sign = 1;
    int i;
    for (i = 0; ; i += 2) {
        term = sign * my_pow(x, i) / my_factorial(i);

        if (my_fabs(term) < 0.001) {
            break;
        }
        sum += term;
        sign = -sign;
    }
    return sum;
}

int main(void)
{
    const float PI = 3.14159265;
    float number = 0;
    if (scanf("%f", &number) != 1 || number<0 || number>90) {
        return 1;
    }
    float radians = number * PI / 180.0;
    printf("%.3f", cosinus(radians));
    return 0;
}
