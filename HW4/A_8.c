//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x, y, z, max;
    scanf("%d %d %d", &x, &y, &z);
    max = x > y ? (x>z?x:z):(y>z?y:z);
    printf("%d\n", max);

}
