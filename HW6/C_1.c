//
// Created by meshk on 09.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int32_t abs(int32_t number) {
    return number < 0 ? number : -number;
}

int main(void)
{
    int32_t number = 0;

    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    printf("%" SCNd32, abs(number));


    return 0;
}
