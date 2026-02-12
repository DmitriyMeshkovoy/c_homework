//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>

int is_even(int n) {
    int result = 0;
    while (n != 0) {
        result += n % 10;
        n /= 10;
    }
    if (result%2==0) {
        return 1;
    }
    return 0;
}

int main(void)
{
    int N = 0;

    if (scanf("%d", &N) != 1 || N<0) {
        return 1;
    }
    printf("%s\n", is_even(N)==1 ? "YES" : "NO");



    return 0;
}
