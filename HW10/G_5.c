//
// Created by meshk on 28.03.2026.
//

#include <stdio.h>

#define BUFFER_LENGTH 1001

int main(void) {
    // Пути для локального дебага
    // FILE *in = fopen("G_5/input.txt", "r");
    // FILE *out = fopen("G_5/output.txt", "w");

    // Пути для сервера (раскомментируй при сдаче)
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (in == NULL || out == NULL) {
        return 1;
    }

    char buffer[BUFFER_LENGTH];

    if (fgets(buffer, sizeof(buffer), in) != NULL) {
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] == 'a') {
                buffer[i] = 'b';
            } else if (buffer[i] == 'b') {
                buffer[i] = 'a';
            } else if (buffer[i] == 'A') {
                buffer[i] = 'B';
            } else if (buffer[i] == 'B') {
                buffer[i] = 'A';
            }
        }
        fprintf(out, "%s", buffer);
    }

    fclose(in);
    fclose(out);

    return 0;
}
