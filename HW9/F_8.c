//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
#define DEFAULT_INITIAL_CAPACITY 64
#define MAX_SIZE 1000

char *read_line() {
    char *buffer = NULL;
    size_t capacity = 0;
    size_t length = 0;
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (length >= capacity) {
            size_t new_capacity = (capacity == 0) ? DEFAULT_INITIAL_CAPACITY : capacity * 2;
            char *new_buffer = realloc(buffer, new_capacity);

            if (!new_buffer) {
                free(buffer);
                return NULL;
            }

            buffer = new_buffer;
            capacity = new_capacity;
        }

        buffer[length++] = (char) c;
    }

    if (buffer != NULL) {
        char *trimmed = realloc(buffer, length + 1);
        if (!trimmed) {
            buffer[length] = '\0';
            return buffer;
        }
        buffer = trimmed;
    } else {
        buffer = malloc(1);
        if (!buffer) return NULL;
        length = 0;
    }

    buffer[length] = '\0';
    return buffer;
}

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

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int read_arr_with_max_size(int *arr, int size)
{
    int count = 0;
    int num;
    while (scanf("%d", &num) == 1 && num != 0) {
        if (count >= size) {
            return -1;
        }
        arr[count++] = num;
    }
    return count;
}
int find_element(int *arr, int size)
{
    for (int i = 1; i < size; i++) {
        if ((arr[i] - arr[i - 1])!=1) {
            return arr[i - 1] + 1;
        }
    }
    if (arr[0] > 1) {
        return arr[0] - 1;
    } else {
        return arr[size - 1] + 1;
    }
}

int main(void) {
    int arr[MAX_SIZE];
    int size_arr = read_arr_with_max_size(arr, MAX_SIZE);
    int total_arr[size_arr];
    for (int i = 0; i < size_arr; i++) {
        total_arr[i] = arr[i];
    }
    sort_array(size_arr, total_arr);
    printf("%d", find_element(total_arr, size_arr));

    // print_array(total_arr, size_arr);


    return 0;
}
