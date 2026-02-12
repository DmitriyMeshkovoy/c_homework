//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>

int grow_up(int n)
{
    int digit = n % 10;
    n /= 10;
    while (n != 0) {
        if (digit <= n%10) {
            return 0;
        }
        digit = n % 10;
        n /= 10;
    }
    return 1;
}

int main(void)
{
    int N = 0;
    if (scanf("%d", &N) != 1 || N<0) {
        return 1;
    }
    printf("%s\n", grow_up(N)==1 ? "YES" : "NO");
    return 0;
}
