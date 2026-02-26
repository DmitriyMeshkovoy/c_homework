//
// Created by meshk on 16.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

void print_dig(int number) {


    if (number <= 0) return;
    printf("%d ", number%10);

    print_dig(number/10);

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
        print_dig(number);
    }
    return 0;
}
