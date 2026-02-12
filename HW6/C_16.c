//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>

int is_prime(int number)
{
    if (number < 2) {
        return 0;
    }
    if (number == 2) {
        return 1;
    }
    if (number % 2 == 0) {
        return 0;
    }

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int N = 0;
    if (scanf("%d", &N) != 1 || N<0) {
        return 1;
    }
    printf("%s\n", is_prime(N)==1 ? "YES" : "NO");
    return 0;
}
