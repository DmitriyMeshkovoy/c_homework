//
// Created by meshk on 09.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int64_t power(int8_t number, int8_t pow) {
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

int64_t sum_of_grains(int8_t N)
{
    // return power(2, N);
    return power(2, N-1);
}


int main(void)
{
    const uint8_t MAX = 64;
    uint8_t N = 0;

    if (scanf("%" SCNu8, &N) != 1 || N > MAX) {
        return 1;
    }

    printf("%" PRIu64, sum_of_grains(N));

    return 0;
}
