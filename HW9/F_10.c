//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 7
#define DEFAULT_INITIAL_CAPACITY 64
#define MAX_SIZE 1000

char *read_line() {
    char *buffer = NULL;
    size_t capacity = 0;
    size_t length = 0;
    int c;

    while ((c = getchar()) != EOF && c != '.') {
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

void print_array(const char *arr) {
    int len = strlen(arr);
    if (len == 0) return;

    int count = 1;
    for (int i = 1; i < len; i++) {
        if (arr[i] == arr[i-1]) {
            count++;
        } else {
            printf("%c", arr[i-1]);
            printf("%d", count);
            count = 1;
        }
    }
    printf("%c", arr[len-1]);
    printf("%d", count);
}

int main(void) {
    char *s = read_line();
    print_array(s);
    free(s);
    return 0;
}
