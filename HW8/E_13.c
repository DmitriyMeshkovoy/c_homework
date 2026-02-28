//
// Created by meshk on 28.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define SIZE 10

int fill_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return -1;
        }
    }
    return 0;
}


int number_gte_100(const int *number) {
    if (*number<100) {
        return 0;
    }
    return 1;
}
int second_digit_is_zero(const int *number) {
    return  (*number / 10) % 10;
}

void spec_print_array(const int *arr, int size)
{
    for (int i = 0; i < size; i++) {
       // if (number_gte_100(&arr[i])) {
           if (second_digit_is_zero(&arr[i])==0) {
                printf("%d ", arr[i]);
           }
       // }
    }
}



int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE) != 0) {
        return 1;
    };
    spec_print_array(arr, SIZE);
    return 0;
}
