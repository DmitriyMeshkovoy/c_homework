//
// Created by meshk on 21.03.2026.
//

#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 105

int main() {
    //для локального дебага
    // FILE *in = fopen("G_1/input.txt", "r");
    // FILE *out = fopen("G_1/output.txt", "w");

    //для тестов
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        return 1;
    }

    char buffer[BUFFER_SIZE];
    fgets(buffer, BUFFER_SIZE, in);

    int len = strlen(buffer);
    while (len > 0 && (buffer[len - 1] == '\n' || buffer[len - 1] == '\r')) {
        buffer[len - 1] = '\0';
        len--;
    }

    fprintf(out, "%s, %s, %s %d\n", buffer, buffer, buffer, len);

    fclose(in);
    fclose(out);

    return 0;
}