//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double k = (double)(y2 - y1) / (double)(x2 - x1);
    double b = y1 - k * x1;

    printf("%.2f %.2f\n", k, b);
}
