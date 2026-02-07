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

    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }

    while (number != 0) {
        sum+= number%10;
        number /= 10;
    }

    printf("%s\n", sum==10?"YES":"NO");


    return 0;
}
