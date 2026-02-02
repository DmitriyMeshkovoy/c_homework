//
// Created by meshk on 02.02.2026.
//
#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    if (x==1||x==2||x==12) {
        printf("%s\n", "winter");
    }
    if (x==3||x==4||x==5) {
        printf("%s\n", "spring");
    }
    if (x==6||x==7||x==8) {
        printf("%s\n", "summer");
    }
    if (x==9||x==10||x==11) {
        printf("%s\n", "autumn");
    }
}
