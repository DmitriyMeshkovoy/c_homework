//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x, y, z, a, b, min;
    scanf("%d %d %d %d %d", &x, &y, &z, &a, &b);
    min = x < y ? x:y;
    min = min < z ? min:z;
    min = min < a ? min:a;
    min = min < b ? min:b;


    printf("%d\n", min);

}
