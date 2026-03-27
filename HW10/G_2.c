//
// Created by meshk on 21.03.2026.
//

#include <stdio.h>

#define MAX_LEN 30 //взял с запасом

int main() {
    // Пути для локального дебага
    // FILE *in = fopen("G_2/input.txt", "r");
    // FILE *out = fopen("G_2/output.txt", "w");

    // Пути для сервера (раскомментируй при сдаче)
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        return 1;
    }

    int N;
    fscanf(in, "%d", &N);

    char buffer[MAX_LEN];

    int letter_count = 0;
    int digit_count = 0;

    for (int pos = 1; pos <= N; pos++) {
        if (pos % 2 == 1) {
            buffer[pos - 1] = 'A' + letter_count;
            letter_count++;
        } else {
            int digit = 2 + (digit_count % 4) * 2;
            buffer[pos - 1] = '0' + digit;
            digit_count++;
        }
    }

    buffer[N] = '\0';

    fprintf(out, "%s\n", buffer);

    fclose(in);
    fclose(out);
    return 0;
}