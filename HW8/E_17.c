//
// Created by meshk on 28.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define SIZE 10

int fill_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return -1;
        }
    }
    return 0;
}

void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int find_in_array(int *arr, int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return 1;
        }
    }
    return 0;
}

void process(int *arr, int size) {
    int res_arr[SIZE];
    int counter = 0;

    for (int i = 0; i < size; i++) {
        int count_num = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count_num++;
            }
        }
        if (count_num == 1 ) {
            res_arr[counter] = arr[i];
            counter++;
        }
    }

    for (int i = 0; i < counter; i++) {
        printf("%d ", res_arr[i]);
    }
}


int main(void) {
    int arr[SIZE] = {0};
    if (fill_array(arr, SIZE) != 0) {
        return 1;
    };
    process(arr, SIZE);
    return 0;
}
