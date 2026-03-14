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


int count_bigger_abs(int n, int a[])
{
    int max = a[0];
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (max < (a[i]<0? -a[i] : a[i])) {
            count++;
        }
    }
    return count;
}

int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    // print_array(arr, SIZE);
    printf("%d", count_bigger_abs(SIZE, arr));
    return 0;
}