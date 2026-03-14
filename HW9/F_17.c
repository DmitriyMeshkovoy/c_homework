//
// Created by meshk on 14.03.2026.
//

#include <stdio.h>

int find_trace(int matrix[5][5]) {
    int trace = 0;
    for (int i = 0; i < 5; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

int main() {
    int matrix[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = find_trace(matrix);
    printf("%d\n", result);

    return 0;
}