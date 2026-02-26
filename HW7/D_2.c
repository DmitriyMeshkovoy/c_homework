//
// Created by meshk on 16.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

int sum_rec(int number)
{
    static int sum = 0;
    sum = sum + number;
    if (number <= 0) return sum;
    sum_rec(number - 1);

}


int main(void)
{
    int number = 0;
    if (scanf("%d", &number) != 1){
        return 1;
    }
    printf("%d", sum_rec(number));
    return 0;
}
