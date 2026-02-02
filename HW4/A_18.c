//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x , y;
    scanf("%d %d", &x, &y);

    if (x>y) {
        printf("Above");
    } else if (x<y) {
        printf("Less");
    } else {
        printf("Equal");
    }
}
