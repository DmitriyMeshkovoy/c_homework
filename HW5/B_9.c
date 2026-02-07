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
    if (scanf("%" SCNd32, &number) != 1) {
        return 1;
    }

    while (number != 0) {
        if (number %2 !=0 ) {
            flag = false;
            goto PRINT;
        }
        number = number / 10;
    }
PRINT:
    printf("%s", flag ? "YES" : "NO");


    return 0;
}
