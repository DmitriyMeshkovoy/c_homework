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

int count_between(int from, int to, int size, int a[])
{
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (from <= a[i] && a[i] <= to) {
            count++;
        }
    }
    return count;
}

void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[SIZE] = {0};
    int from = 4;
    int to = 6;
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    // print_array(arr, SIZE);
    printf("%d", count_between(from, to, SIZE, arr));
    return 0;
}