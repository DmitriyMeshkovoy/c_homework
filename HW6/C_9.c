//
// Created by meshk on 11.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>


int64_t factorial(int32_t n)
{
    int64_t result = 1;
    for (int32_t i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void)
{
    int32_t N = 0;
    if (scanf("%" SCNd32, &N) != 1 || N < 0 || N>20) {
        return 1;
    }
    printf("%" PRId64 "\n", factorial(N));


    return 0;
}
