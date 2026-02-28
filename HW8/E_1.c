//
// Created by meshk on 27.02.2026.
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

float avg_array(const int *arr, int size)
{
    if (size == 0) {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float) sum / size;
}


int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    printf("%.3f", avg_array(arr, SIZE));
    return 0;
}
