//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
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

void print_digit(char s[]) {
    int count_array[10] = {0};
    char *p = s;
    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            count_array[*p - '0']++;
        }
        p++;
    }

    for (int i = 0; i < 10; i++) {
        if (count_array[i] > 0) {
            printf("%d %d\n", i, count_array[i]);
        }
    }
}


int main(void) {
    char *s = read_line();
    print_digit(s);
    free(s);
    return 0;
}
