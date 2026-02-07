//
// Created by meshk on 06.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number = 0;
    uint8_t pre_degit = 0;
    bool flag = false;
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    pre_degit = number % 10;
    number = number / 10;
    while (number != 0) {
        if (pre_degit == number % 10) {
            flag = true;
        }
        pre_degit = number % 10;
        number = number / 10;
    }

    printf("%s", flag ? "YES" : "NO");


    return 0;
}
