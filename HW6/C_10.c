//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>
#include <inttypes.h>

void print_simple(int n) {

    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    for (uint32_t i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 1) {
        printf("%d", n);
    }
}

int main(void) {
    int number = 0;
    if (scanf("%d", &number) != 1 || number == 0) {
        return 1;
    }
    print_simple(number);
    return 0;
}