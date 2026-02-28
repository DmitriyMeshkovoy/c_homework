//
// Created by meshk on 28.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
#define MIN 2
#define MAX 10000
#define SIZE 8


int main(void) {
    int N = 0;
    if (scanf("%d", &N) != 1 || N < MIN || N > MAX) {
        return -1;
    }
    int arr[SIZE] = {0};
    for (int i = 2; i <= N; i++) {
        if (i%2==0) {
            arr[0]++;
        }
        if (i%3==0) {
            arr[1]++;
        }
        if (i%4==0) {
            arr[2]++;
        }
        if (i%5==0) {
            arr[3]++;
        }
        if (i%6==0) {
            arr[4]++;
        }
        if (i%7==0) {
            arr[5]++;
        }
        if (i%8==0) {
            arr[6]++;
        }
        if (i%9==0) {
            arr[7]++;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%d %d\n", i+2, arr[i]);
    }

    return 0;
}
