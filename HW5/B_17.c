//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    const uint32_t start_number = 10;
    uint32_t number = 0;

    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }
    if (number <= 10) {
        return 2;
    }
    for (uint32_t i = start_number; i <= number; i++) {
        uint32_t temp_number = i;
        uint64_t sum_digit = 0;
        uint64_t mul_digit = 1;
        while (temp_number!=0) {
            sum_digit += temp_number%10;
            mul_digit *= temp_number%10;
            temp_number /= 10;
        }
        if (sum_digit == mul_digit) {
            printf("%" PRIu32 " ", i);
        }
    }


    return 0;
}
