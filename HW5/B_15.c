//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    const uint8_t stop = 0;
    uint32_t counter = 0;
    uint32_t number = 0;
    while (true) {
        if (scanf("%" SCNd32, &number) != 1) {
            return 1;
        }
        if (number == stop) {
            break;
        }
        if (number%2==0) {
            counter++;
        }
    }

    printf("%" PRIu32, counter);
    return 0;
}
