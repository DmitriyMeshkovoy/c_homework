//
// Created by meshk on 12.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>


void from_vase_to_base(int N, int P) {
    int counter = 0;
    int dig = 1;
    while (N != 0) {
        counter+=(N % P)*dig;
        N /= P;
        // counter+=(N % P)*dig;

        dig *= 10;
    }
    printf("%d", counter);
}

int main(void)
{
    int N = 0;
    int P = 0;

    if (scanf("%d %d", &N, &P) != 2 || N<0 || P<2 || P>9) {
        return 1;
    }

    from_vase_to_base(N, P);

    return 0;
}
