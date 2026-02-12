//
// Created by meshk on 09.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int32_t f(int32_t x)
{
    if (x>=-2 && x < 2) {
        return x*x;
    }
    if (x>=2){
        return x*x + 4*x +5;
    }
    if (x<-2) {
        return 4;
    }
}

int32_t maximum(int32_t x, int32_t y)
{
    return x>y?x:y;
}



int main(void)
{
    const uint8_t stop = 0;
    int32_t max = 0;
    int32_t number = 0;
    int32_t f_x = 0;
    while (true) {
        if (scanf("%" SCNd32, &number) != 1) {
            return 1;
        }
        if (number == stop) {
            break;
        }
        f_x = f(number);
        max = maximum (max, f_x);
    }
    printf("%" PRId32, max);

    return 0;
}
