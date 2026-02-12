//
// Created by meshk on 09.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int64_t sum_numbers(int32_t N)
{
    int64_t sum = 0;
    for (int64_t i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}


int main(void)
{
    int32_t N = 0;

    if (scanf("%" SCNd32, &N) != 1) {
        return 1;
    }
    printf("%" PRIu64, sum_numbers(N));

    return 0;
}
