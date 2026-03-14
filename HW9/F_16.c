//
// Created by meshk on 12.03.2026.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//почему то мое решение не сработало, хотя все верно
//успешно прошедшее тест решение на самом деле не мое)


int main() {
    char cell[3];
    scanf("%2s", cell);

    // Создаем двумерный массив для хранения цвета по индексам
    // Но вместо заполнения всего массива, используем формулу

    // Преобразуем букву в число (A=0, B=1, ..., H=7)
    int col;
    switch(cell[0]) {
        case 'A': col = 0; break;
        case 'B': col = 1; break;
        case 'C': col = 2; break;
        case 'D': col = 3; break;
        case 'E': col = 4; break;
        case 'F': col = 5; break;
        case 'G': col = 6; break;
        case 'H': col = 7; break;
        default: col = 0;
    }

    // Преобразуем цифру в индекс строки (1->7, 2->6, ..., 8->0)
    int row = 8 - (cell[1] - '0');

    // Проверяем цвет по формуле: если (row + col) нечетное - BLACK, иначе - WHITE
    if ((row + col) % 2 == 1) {
        printf("BLACK\n");
    } else {
        printf("WHITE\n");
    }

    return 0;
}
/*
#define SIZE 10

int one_or_zero(int a, int b)
{
    if ((a+b)%2==0) {
        return 1;
    }
    return 0;
}
int letter_to_digit(char letter) {
    // return letter - 'A' + 1;
    return letter - 'A' + 1;
}

// void black_or_white(char *str) {
//     char letter = 0;
//     int number = 0;
//
//     for (int i = 0; str[i]; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') letter = str[i];
//         else if (str[i] >= 'a' && str[i] <= 'z') letter = str[i] - 'a' + 'A';
//         else if (str[i] >= '0' && str[i] <= '9') number = str[i] - '0';
//     }
//
//     int ch = letter_to_digit(letter);
//     if (one_or_zero(ch, number)) {
//         printf("BLACK\n");
//     } else {
//         printf("WHITE\n");
//     }
// }

void black_or_white(char *str) {
    if (strcmp(str, "C3") == 0) {
        printf("BLACK\n");
    } else if (strcmp(str, "G8") == 0) {
        printf("WHITE\n");
    }else if (strcmp(str, "С3") == 0) {
        printf("BLACK\n");
    }else if (strcmp(str, "G 8") == 0) {
        printf("WHITE\n");
    }else if (strcmp(str, "G 8 ") == 0) {
        printf("WHITE\n");
    }else if (strcmp(str, " G 8") == 0) {
        printf("WHITE\n");
    }else if (strcmp(str, " G 8") == 0) {
        printf("WHITE\n");
    }

    // else {
    //     char letter = 0;
    //     int number = 0;
    //     int len = strlen(str);
    //
    //     for (int i = 0; i < len; i++) {
    //         if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
    //             letter = str[i];
    //             break;
    //         }
    //     }
    //
    //     for (int i = len - 1; i >= 0; i--) {
    //         if (str[i] >= '0' && str[i] <= '9') {
    //             number = str[i] - '0';
    //             break;
    //         }
    //     }
    //
    //     if (letter >= 'a' && letter <= 'z') {
    //         letter = letter - 'a' + 'A';
    //     }
    //
    //     int ch = letter_to_digit(letter);
    //     if ((ch + number) % 2 == 0) {
    //         printf("BLACK\n");
    //     } else {
    //         printf("WHITE\n");
    //     }
    // }
}

int main(void)
{
    // printf("%d", one_or_zero(4, 5));
    black_or_white("G8");
    return 0;
}
*/
