//
// Created by meshk on 06.02.2026.
//
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t number = 0;
    uint32_t sum_digit = 0;
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    while (number != 0) {
        sum_digit += number % 10;
        number = number / 10;
    }

    printf("%" PRId32, sum_digit);


    return 0;
}
