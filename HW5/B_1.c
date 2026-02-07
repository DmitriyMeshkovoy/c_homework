//
// Created by meshk on 06.02.2026.
//
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    const uint8_t max = 100;
    uint8_t number = 0;
    if (scanf("%"SCNu8, &number) != 1 || number > max || number < 1) {
        return 1;
    }
    for (uint8_t i = 1; i <= number; i++) {
        printf("%"PRIu8 " %"PRIu16 " %"PRIu32 "\n", i, i*i, i*i*i);
    }



}
