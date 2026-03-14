//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_CHARS 1000


void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            printf("%d %d\n", i , arr[i]);
        }
    }
}

void chars_read(int *arr) {
    int ch_read = 0;
    int c;
    while (ch_read < MAX_CHARS && (c = getchar()) != EOF && c != '\n') {
        if (c >= '0' && c <= '9') {
            arr[c - '0']++;
        }
        ch_read++;
    }
}

int main(void) {
    int count_array[10] = {0};
    chars_read(count_array);

    print_array(count_array, sizeof(count_array) / sizeof(count_array[0]));
    return 0;
}
