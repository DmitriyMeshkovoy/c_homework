//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
#define DEFAULT_INITIAL_CAPACITY 64

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

int find_max_array(int size, int a[]) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int compression(int a[], int b[], int N)
{
    if (N <= 0) {
        return 0;
    }
    int elements_in_b_array = 0;
    int current_number = a[0];
    int counter = 1;
    if (a[0]==1) {
        b[elements_in_b_array] = 0;
        elements_in_b_array++;
    }
    for (int i = 1; i < N; i++) {
        if (a[i] == current_number) {
            counter++;
        }else {
            b[elements_in_b_array] = counter;
            elements_in_b_array++;
            counter=1;
            current_number = a[i];
        }
    }
    b[elements_in_b_array] = counter;
    elements_in_b_array++;
    return elements_in_b_array;
}


int main(void) {
    int arr[SIZE] = {0};

    int compress_arr[SIZE] = {0};
    if (fill_array(arr, SIZE) != 0) {
        return 1;
    };
    int size_of_compress_array = compression(arr, compress_arr, SIZE);
    int total_array[size_of_compress_array];
    for (int i = 0; i < size_of_compress_array; i++) {
        total_array[i] = compress_arr[i];
    }
    print_array(total_array, size_of_compress_array);
    return 0;
}
