//
// Created by meshk on 16.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

void print_rec(int number) {
    if (number <= 0) return;
    printf("%d ", number);

    print_rec(number - 1);
}


int main(void)
{
    int number = 0;
    if (scanf("%d", &number) != 1){
        return 1;
    }
    print_rec(number);
    return 0;
}
