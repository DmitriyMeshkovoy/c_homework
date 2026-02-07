//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number = 0;
    uint64_t sum = 0;
    uint32_t first_number = 1;
    uint32_t second_number = 1;

    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }
    if (number < 1) {
        return 1;
    }

    for (uint32_t i = 0; i < number; i++) {
        if (i == 0 || i == 1) {
            printf("%d ", 1);
            continue;
        }
        sum = first_number + second_number;
        printf("%" PRIu64 " ", sum);
        first_number = second_number;
        second_number = sum;
    }


    return 0;
}
