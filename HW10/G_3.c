//
// Created by meshk on 21.03.2026.
//

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1000

int main() {
    // Пути для локального дебага
    FILE *in = fopen("G_3/input.txt", "r");
    FILE *out = fopen("G_3/output.txt", "w");

    // Пути для сервера (раскомментируй при сдаче)
    // FILE *in = fopen("input.txt", "r");
    // FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        return 1;
    }
    char buffer[BUFFER_SIZE];
    int counter = 0;
    int ch;
    while (counter < BUFFER_SIZE - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        buffer[counter++] = (char) ch;
    }
    buffer[counter] = '\0';
    ch = buffer[counter - 1];
    int numbers[counter];
    int index = 0;
    for (int i = 0; i < counter - 1; i++) {
        if (buffer[i] == ch) {
            numbers[index++] = i;
        }
    }
    for (int i = 0; i < index; i++) {
        if (i == index - 1) {
            fprintf(out, "%d", numbers[i]);
        } else {
            fprintf(out, "%d ", numbers[i]);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}
