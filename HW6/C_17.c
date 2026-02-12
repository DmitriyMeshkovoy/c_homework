//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>

int is_happy_number(int number)
{
    int sum_digit = number%10;
    int mul_digit = number%10;
    number = number/10;
    while (number != 0) {
        sum_digit += number%10;
        mul_digit *= number%10;
        number = number/10;
    }
    if (sum_digit == mul_digit) {
        return 1;
    }
    return 0;
}

int main(void)
{
    int N = 0;
    if (scanf("%d", &N) != 1 || N<0) {
        return 1;
    }
    printf("%s\n", is_happy_number(N)==1 ? "YES" : "NO");
    return 0;
}
