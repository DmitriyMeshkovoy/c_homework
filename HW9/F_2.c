//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
//
int fill_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return -1;
        }
    }
    return 0;
}

void print_array(const int *arr, int size) {
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
void sort_even_odd(int n, int a[])
{
    int *array = malloc(n * sizeof(int));
    if (!array) {
        return;
    }

    for (int i = 0; i < n; i++) {
        array[i] = a[i];
    }

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            a[j++] = array[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            a[j++] = array[i];
        }
    }

    free(array);
}

int main(void) {
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE) != 0) {
        return 1;
    };
    sort_even_odd(SIZE, arr);
    print_array(arr, SIZE);
    return 0;
}
