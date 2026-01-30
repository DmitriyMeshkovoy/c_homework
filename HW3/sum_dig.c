//
// Created by meshk on 30.01.2026.
//
#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    int hund = x / 100;

    x = x % 100;
    int doz = x / 10;
    x = x % 10;
    int un = x;
    printf("%d\n", hund + doz + un);
}
