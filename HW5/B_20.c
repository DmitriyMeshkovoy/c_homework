//
// Created by meshk on 07.02.2026.
//
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    uint32_t number = 0;
    bool is_prime = true;

    if (scanf("%" SCNu32, &number) != 1) {
        return 1;
    }

    if (number < 2) {
        printf("NO\n");
        return 0;
    }
    if (number == 2) {
        printf("YES\n");
        return 0;
    }
    if (number % 2 == 0) {
        printf("NO\n");
        return 0;
    }

    for (uint32_t i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            is_prime = false;
            break;
        }
    }

    printf("%s\n", is_prime ? "YES" : "NO");


    return 0;
}
