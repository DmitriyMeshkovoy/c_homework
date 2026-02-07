//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    int32_t number = 0;
    uint8_t min = 0;
    uint8_t max = 0;
    uint8_t temp_digit = 0;
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    if (number < 0) {
        return 2;
    }
    if (number < 10 && number >= 0) {
        printf("%" PRIu32 " %" PRIu32, number, number);
        return 0;
    }

    min = number % 10;
    max = number % 10;
    number = number/10;

    while (number != 0) {
        temp_digit = number % 10;
        max = max > temp_digit ? max : temp_digit;
        min = min < temp_digit ? min : temp_digit;
        number = number/10;
    }

    printf("%" PRIu32 " %" PRIu32, min, max);
    return 0;
}
// int x, y, z, max;
// scanf("%d %d %d", &x, &y, &z);
// max = x > y ? (x>z?x:z):(y>z?y:z);
// printf("%d\n", max);