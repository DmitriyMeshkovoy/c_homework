//
// Created by meshk on 28.02.2026.
//

#include <stdbool.h>
#include <stdio.h>
void print_array(const int *arr, int size) {
    for (int i = size - 1; i >=0 ; i--) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int N = 0;
    int counter = 0;
    if (scanf("%d", &N) != 1 || N <=0) {
        return 1;
    }
    int M =N;
    while (N!=0) {
        N = N/10;
        counter++;
    }
    int arr[counter];
    for (int i = 0; i < counter; i++) {
        arr[i] = M%10;
        M = M/10;
    }
    print_array(arr, counter);

    return 0;
}
