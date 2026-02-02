//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x<y && y<z) {
        printf("%s\n", "YES");
    }else {
        printf("%s\n", "NO");
    }
}
