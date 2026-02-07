//
// Created by meshk on 06.02.2026.
//
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    const int8_t abs_max = 100;
    int8_t number_one = 0;
    int8_t number_two = 0;
    if (scanf("%" SCNd8 " %" SCNd8, &number_one, &number_two) != 2 ||
        ((number_one > 0 ? number_one : -number_one) > abs_max) ||
        ((number_two > 0 ? number_two : -number_two) > abs_max) ||
        number_one > number_two) {
        return 1;
    }
    for (int8_t i = number_one; i <= number_two; i++) {
        printf("%" PRId16 " ", i * i);
    }



}
