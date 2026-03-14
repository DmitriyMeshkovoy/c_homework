//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

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

int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}


int main(void) {
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    printf("%d\n", find_max_array(SIZE, arr));
    return 0;
}
