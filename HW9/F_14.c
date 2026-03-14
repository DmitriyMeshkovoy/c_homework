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
int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;
    if (from>to) {
        int temp = from;
        from = to;
        to = temp;
    }
    for (int i = 0; i < size; i++) {
        if (from <= a[i] && a[i] <= to) {
            sum += a[i];
        }
    }
    return sum;
}


void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[SIZE] = {0};
    int from = 6;
    int to = 4;
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    // print_array(arr, SIZE);
    printf("%d", sum_between_ab(from, to, SIZE, arr));
    return 0;
}