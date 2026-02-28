//
// Created by meshk on 27.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define SIZE 12

int fill_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i])!=1) {
            return -1;
        }
    }
    return 0;
}

void reverse(int *arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void inversion_half_array(int *arr, int size)
{
    int third = size / 3;
    reverse(arr, 0, third - 1);
    reverse(arr, third, third+ third - 1);
    reverse(arr, third+ third , size - 1);

}
void print_array(const int *arr, int size)
{
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
    inversion_half_array(arr, SIZE);
    print_array(arr, SIZE);
    return 0;
}
