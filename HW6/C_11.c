//
// Created by meshk on 11.02.2026.
//

#include <stdio.h>

int nod(int number_one, int number_two)
{
    int temp = 0;
    while (number_two != 0) {
        temp = number_two;
        number_two = number_one % number_two;
        number_one = temp;
    }
    return number_one;
}

int main(void)
{
    int number_1 = 0;
    int number_2 = 0;
    if (scanf("%d %d", &number_1, &number_2) != 2 || number_1<0 || number_2<0) {
        return 1;
    }
    printf("%d", nod(number_1, number_2));
    return 0;
}
