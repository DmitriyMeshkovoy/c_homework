//
// Created by meshk on 28.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define SIZE 5
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


void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    sort_array(SIZE, arr);
    print_array(arr, SIZE);
    return 0;
}
