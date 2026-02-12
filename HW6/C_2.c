//
// Created by meshk on 09.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>

int64_t power(int16_t number, int16_t pow) {
    int64_t result = 1;
    if (pow < 0) {
        return -1;
    }
    if (pow == 0) {
        return 1;
    }
    for (int16_t i = 0; i < pow; i++) {
        result *= (int64_t)number;
    }
    return result;
}

int main(void)
{
    int16_t number = 0;
    int16_t pow = 0;

    if (scanf("%" SCNd16 "%" SCNd16, &number, &pow) != 2) {
        return 1;
    }
    printf("%" SCNd64, power(number, pow));

    return 0;
}
