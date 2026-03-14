//
// Created by meshk on 14.03.2026.
//

#include <stdio.h>

int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
int sum_max (int matrix[10][10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += find_max_array(10, matrix[i]);
    }
    return sum;
}

int main() {
    int matrix[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("%d\n", sum_max (matrix));

    return 0;
}