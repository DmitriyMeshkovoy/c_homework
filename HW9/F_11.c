//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

int fill_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i])!=1) {
            return -1;
        }
    }
    return 0;
}

void find_min_min(const int *arr, int size)
{
    if (size < 2) {
        return;
    }

    int min1 = arr[0];
    int min1_index = 0;
    int min2 = arr[1];
    int min2_index = 1;

    if (min1 > min2) {
        int temp = min1;
        min1 = min2;
        min1_index = 1;
        min2 = temp;
        min2_index = 0;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
            min2_index = min1_index;
            min1_index = i;

        } else if (arr[i] < min2) {
            min2 = arr[i];
            min2_index = i;
        }
    }
    if (min1_index < min2_index) {
        printf("%d %d", min1_index, min2_index);
    } else {
        printf("%d %d", min2_index, min1_index);
    }
}

int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    find_min_min(arr, SIZE);
    return 0;
}