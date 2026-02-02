//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x, y, z, a, b, min, max;
    scanf("%d %d %d %d %d", &x, &y, &z, &a, &b);
    min = x < y ? x:y;
    min = min < z ? min:z;
    min = min < a ? min:a;
    min = min < b ? min:b;

    max = x > y ? x:y;
    max = max > z ? max:z;
    max = max > a ? max:a;
    max = max > b ? max:b;

    printf("%d\n", min + max);

}
