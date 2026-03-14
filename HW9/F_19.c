//
// Created by meshk on 14.03.2026.
//

#include <stdio.h>
#define SIZE 5

int find_trace(int matrix[SIZE][SIZE]) {
    int trace = 0;
    for (int i = 0; i < SIZE; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

int avg_trace(int matrix[SIZE][SIZE]) {
    return find_trace(matrix) / SIZE;
}

int count_bigger_then_max_in_array(int n, int a[], int max)
{
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            count++;
        }
    }
    return count;
}

int count_bigger_then_max_in_2d_array(int matrix[SIZE][SIZE]) {
    int count = 0;
    int max = avg_trace(matrix);
    for (int i = 0; i < SIZE; i++) {
        count += count_bigger_then_max_in_array(SIZE, matrix[i], max);
    }
    return count;
}

int main() {
    int matrix[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = count_bigger_then_max_in_2d_array(matrix);
    printf("%d\n", result);

    return 0;
}