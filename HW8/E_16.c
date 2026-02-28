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

void process(int *arr, int size, int *arr_output, int *size_output) {
    for (int i = 0; i < size; i++) {
        int count_num = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count_num++;
            }
        }
        if (count_num > 1 && !find_in_array(arr_output, (*size_output), arr[i])) {
            arr_output[(*size_output)] = arr[i];
           (*size_output)++;
        }
    }
}

int find_max_index(const int *arr, int size)
{
    int max = arr[0];
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}




int find_max(int *arr, int *uniq_numbers, int size_arr, int size_uniq_numbers) {
    int temp_aray[size_uniq_numbers];
    for (int i = 0; i < size_uniq_numbers; i++) {
        for (int j = 0; j < size_arr; j++) {
            if (arr[j] == uniq_numbers[i]) {
                temp_aray[i]++;
            }
        }
    }
    int number = find_max_index(temp_aray, size_uniq_numbers);
    return uniq_numbers[number];
}

int main(void) {
    int arr[SIZE] = {0};
    int arr_back[SIZE] = {0};
    int size_output = 0;
    if (fill_array(arr, SIZE) != 0) {
        return 1;
    };
    process(arr, SIZE, arr_back, &size_output);
    // print_array(arr_back, size_output);
    if (size_output<=0) {
        printf("%d", 0);
    }else {
        int number = find_max(arr, arr_back, SIZE, size_output);
        printf("%d", number);
    }

    return 0;
}
