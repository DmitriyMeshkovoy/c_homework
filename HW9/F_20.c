//
// Created by meshk on 14.03.2026.
//
#include <stdio.h>
#define SIZE 10

int fill_array(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return -1;
        }
    }
    return 0;
}

void print_array(const int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// НЕЧ
int mult_of_odd_digits(int number) {
    int mult = 1;
    int has_odd = 0;
    int temp = number;

    if (temp == 0) return 0;

    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            mult *= digit;
            has_odd = 1;
        }
        temp = temp / 10;
    }

    return has_odd ? mult : 0;
}

//ЧЕТ
int mult_of_even_digits(int number) {
    int mult = 1;
    int has_even = 0;
    int temp = number;
    if (temp == 0) return 0;

    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            mult *= digit;
            has_even = 1;
        }
        temp = temp / 10;
    }

    return has_even ? mult : 0;
}

void proc_array(int size, int a[])
{
    int even_count = 0; //чет
    int odd_count = 0;   //неч

    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    if (even_count > odd_count) {
        for (int i = 0; i < size; i++) {
            if (a[i] % 2 != 0) {
                a[i] = mult_of_odd_digits(a[i]);
            }
        }
    } else {
        for (int i = 0; i < size; i++) {
            if (a[i] % 2 == 0) {
                a[i] = mult_of_even_digits(a[i]);
            }
        }
    }
}

int main(void) {
    int arr[SIZE] = {0};

    if (fill_array(arr, SIZE) != 0) {
        return 1;
    }

    proc_array(SIZE, arr);
    print_array(arr, SIZE);

    return 0;
}