//
// Created by meshk on 17.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

int sum_dig(int number) {
    if (number == 0) return 0;
    return (number % 10) + sum_dig(number / 10);
}


int main(void)
{
    int number = 0;
    if (scanf("%d", &number) != 1){
        return 1;
    }
    if (number == 0) {
        printf("0");
    } else {
        printf("%d", sum_dig(number));
    }
    return 0;
}