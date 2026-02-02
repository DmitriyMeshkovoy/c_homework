//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    int hund = x / 100;

    x = x % 100;
    int doz = x / 10;
    x = x % 10;
    int un = x;

    int max = hund > doz ? (hund>un?hund:un):(doz>un?doz:un);
    printf("%d\n", max);

}
