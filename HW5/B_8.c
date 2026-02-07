//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number = 0;
    uint8_t counter = 0;
    uint8_t degit = 0;
    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }

    while (number != 0) {
        degit = number % 10;
        if (degit == 9) {
            counter++;
        }
        number = number / 10;
    }
PRINT:
    printf("%s", counter==1 ? "YES" : "NO");


    return 0;
}
