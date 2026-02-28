//
// Created by meshk on 27.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define SIZE 12

int fill_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i])!=1) {
            return -1;
        }
    }
    return 0;
}


void print_array(const int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void to_right(int *arr, int size)
{
    int temp = arr[size-1];
    for (int i = size-1; i >= 0; i--) {
        arr[i] = arr[i-1];

    }
    arr[0] = temp;

}

void to_right_with_step(int *arr, int size, int step) {
    for (int i = 0; i < step; i++) {
        to_right(arr, size);
    }
}

int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    to_right_with_step(arr, SIZE, 4);
    print_array(arr, SIZE);
    return 0;
}
