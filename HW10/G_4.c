//
// Created by meshk on 28.03.2026.
//

#include <stdio.h>

#define WORD_MAX_LENGTH 101
#define ALPHABET_LENGTH 26

int main(void) {
    // Пути для локального дебага
    // FILE *in = fopen("G_4/input.txt", "r");
    // FILE *out = fopen("G_4/output.txt", "w");

    // Пути для сервера (раскомментируй при сдаче)
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (in == NULL || out == NULL) {
        return 1;
    }

    char word_1[WORD_MAX_LENGTH];
    char word_2[WORD_MAX_LENGTH];

    fscanf(in, "%100s %100s", word_1, word_2);
    fclose(in);

    int count1[ALPHABET_LENGTH] = {0};
    int count2[ALPHABET_LENGTH] = {0};

    for (int i = 0; word_1[i] != '\0'; i++) {
        count1[word_1[i] - 'a']++;
    }

    for (int i = 0; word_2[i] != '\0'; i++) {
        count2[word_2[i] - 'a']++;
    }

    int first = 1;
    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            if (!first) {
                fprintf(out, " ");
            }
            fprintf(out, "%c", 'a' + i);
            first = 0;
        }
    }
    fprintf(out, "\n");

    fclose(out);
    return 0;
}
