//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int fill_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i])!=1) {
            return -1;
        }
    }
    return 0;
}

void change_max_min(int size, int a[])
{
    int min = a[0];
    int index_min = 0;
    int max = a[0];
    int index_max = 0;

    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
            index_min = i;
        }
        if (a[i] > max) {
            max = a[i];
            index_max = i;
        }
    }
    int temp = a[index_min];
    a[index_min] = a[index_max];
    a[index_max] = temp;
}

void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    // print_array(arr, SIZE);
    change_max_min(SIZE, arr);
    print_array(arr, SIZE);
    return 0;
}