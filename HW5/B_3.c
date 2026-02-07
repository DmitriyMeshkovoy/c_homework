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
    int32_t sum = 0;
    if (scanf("%" SCNd8 " %" SCNd8, &number_one, &number_two) != 2 ||
        ((number_one > 0 ? number_one : -number_one) > abs_max) ||
        ((number_two > 0 ? number_two : -number_two) > abs_max) ||
        number_one > number_two) {
        return 1;
    }
    for (int8_t i = number_one; i <= number_two; i++) {
        sum += (int32_t)i*(int32_t)i;
    }
    printf("%" PRId32 " ", sum);

    return 0;
}
