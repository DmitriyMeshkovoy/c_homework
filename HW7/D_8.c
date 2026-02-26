//
// Created by meshk on 16.02.2026.
//

#include <stdbool.h>
#include <stdio.h>


void print_rev(int number_one, int number_two)
{
    if (number_one < number_two) return;
    printf("%d ", number_one);

    print_rev(number_one - 1, number_two);
}
void print_num(int number_one, int number_two)
{
    if (number_two < number_one) return;
    print_num(number_one , number_two - 1);
    printf("%d ", number_two);

}

void print_rec(int number_one, int number_two)
{
    if (number_one>number_two) {
        print_rev(number_one, number_two);
    }else {
        print_num(number_one, number_two);
    }

}

int main(void)
{
    int number_one = 0;
    int number_two = 0;
    if (scanf("%d %d", &number_one, &number_two) != 2){
        return 1;
    }
    print_rec(number_one, number_two);
    return 0;
}
