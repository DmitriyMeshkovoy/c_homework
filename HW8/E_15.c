//
// Created by meshk on 28.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define SIZE 10

int fill_array(int *arr, int size, int *counter_positive, int *counter_negative) {
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1 || arr[i] < -500 || arr[i] > 500) {
            return -1;
        }
        if (arr[i] > 0) {
            (*counter_positive)++;
        }
        if (arr[i] < 0) {
            (*counter_negative)++;
        }
    }
    return 0;
}

void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int arr[SIZE] = {0};
    int counter_positive = 0;
    int counter_negative = 0;
    if (fill_array(arr, SIZE, &counter_positive , &counter_negative) != 0) {
        return 1;
    };
    int arr_positive[counter_positive];
    int arr_negative[counter_negative];
    int index_pos = 0;
    int index_neg = 0;
    for (int i = 0; i < SIZE; i++) {

        if (arr[i] > 0) {
            arr_positive[index_pos] = arr[i];
            index_pos++;
        }
        if (arr[i] < 0) {
            arr_negative[index_neg] = arr[i];
            index_neg++;
        }
    }
    print_array(arr_positive, counter_positive);
    print_array(arr_negative, counter_negative);

    return 0;
}
