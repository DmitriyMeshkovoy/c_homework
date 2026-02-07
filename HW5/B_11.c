//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number = 0;
    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }
    if (number == 0) {
        printf("0\n");
        return 0;
    }
    while (number != 0) {
        printf("%"SCNu8, number%10);
        number = number/10;
    }


    return 0;
}
