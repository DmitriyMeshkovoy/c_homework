//
// Created by meshk on 11.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

int is_digit(char c)
{
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int main(void)
{
    char ch = '0';
    int sum = 0;

    while (true) {
        ch = getchar();
        if (is_digit(ch)) {
            sum+=ch - '0';
        }
        if (ch == '.') {
            break;
        }

    }

    printf("%d\n", sum);
    return 0;
}
