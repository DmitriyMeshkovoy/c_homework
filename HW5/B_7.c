//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number = 0;
    uint32_t pre_degit = 0;
    uint32_t temp = 0;
    bool flag = false;

    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }
    pre_degit = number % 10;
    number = number / 10;
    while (number != 0) {
        temp = number;
        // printf("%" PRIu32"\n", temp);
        while (temp != 0) {
            if (pre_degit == temp % 10) {
                flag = true;
                goto PRINT;
            }
            temp = temp / 10;
        }
        pre_degit = number % 10;
        number = number / 10;
    }
PRINT:
    printf("%s", flag ? "YES" : "NO");


    return 0;
}
