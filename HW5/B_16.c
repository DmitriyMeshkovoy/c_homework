//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number_one = 0;
    uint32_t number_two = 0;
    uint32_t temp = 0;

    if (scanf("%" SCNu32 " %" SCNu32, &number_one, &number_two) != 2) {
        return 1;
    }
    while (number_two != 0) {
        temp = number_two;
        number_two = number_one % number_two;
        number_one = temp;
    }

    printf("%" PRIu32 "\n", number_one);


    return 0;
}
