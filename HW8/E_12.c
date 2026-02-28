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


void print_array(const int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void sort_interval(int *arr, int start, int end, bool reverse) {
    if (start >= end) return;
    int len = end - start + 1;
    for (int i = 0; i < len - 1; i++) {
        for (int j = start; j < end - i; j++) {
            if (reverse) {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}
void sort_half_array(int *arr, int size)
{
    int half = size / 2;
    sort_interval(arr, 0, half - 1, false);
    sort_interval(arr, half, size - 1, true);

}

int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE) != 0) {
        return 1;
    };
    sort_half_array(arr, SIZE);
    print_array(arr, SIZE);
    return 0;
}
