//
// Created by meshk on 06.02.2026.
//
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int8_t target = 3;
    uint32_t number = 0;
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }
    while (number != 0) {
        number = number / 10;
        target--;
    }
    if (target == 0) {
        printf("%s\n", "YES");
    }else {
        printf("%s\n", "NO");
    }

    return 0;
}
