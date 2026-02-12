//
// Created by meshk on 09.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>

int32_t middle(int32_t a, int32_t b) {

    return (a+b)/2;
}

int main(void)
{
    int32_t number_1 = 0;
    int32_t number_2 = 0;

    if (scanf("%" SCNd32 "%" SCNd32, &number_1, &number_2) != 2) {
        return 1;
    }
    printf("%" SCNd32, middle(number_1, number_2));

    return 0;
}
