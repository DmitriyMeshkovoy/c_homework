//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    int32_t number = 0;
    bool flag = true;
    int8_t pre_digit = 0;
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    pre_digit = (int8_t) (number%10);
    number = number / 10;
    while (number != 0) {
        if (pre_digit <= (int8_t)(number%10) ) {
            flag = false;
            goto PRINT;
        }
        pre_digit = (int8_t) (number%10);
        number = number / 10;
    }
PRINT:
    printf("%s", flag ? "YES" : "NO");


    return 0;
}
