//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t number = 0;
    uint8_t even_counter = 0;
    uint8_t odd_counter = 0;
    uint8_t digit = 0;
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    if (number < 0) {
        return 2;
    }
    while (number != 0) {
        digit = (int8_t)(number % 10);
        if(digit % 2 == 0) {
            even_counter++;
        }else {
            odd_counter++;
        }
        number = number / 10;
    }

    printf("%" PRIu8 " %" PRIu8, even_counter, odd_counter);
    return 0;
}