//
// Created by meshk on 27.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
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

int find_max_max(const int *arr, int size)
{
    int max1 = arr[0];
    int max2 = arr[1];

    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return max1 + max2;

}


int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    printf("%d", find_max_max(arr, SIZE));
    return 0;
}