//
// Created by meshk on 16.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

void to_binary(int number) {


    if (number <= 0) return;

    to_binary(number/2);
    printf("%d", number%2);

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
        to_binary(number);
    }
    return 0;
}