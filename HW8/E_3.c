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

void find_min_max_and_indexes(const int *arr, int size)
{
    int min = arr[0];
    int index_min = 0;
    int max = arr[0];
    int index_max = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index_min = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            index_max = i;
        }
    }
    printf("%d %d %d %d", index_max+1, max, index_min+1, min);

}


int main(void)
{
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE)!=0) {
        return 1;
    };
    find_min_max_and_indexes(arr, SIZE);
    return 0;
}