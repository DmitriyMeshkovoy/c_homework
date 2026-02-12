//
// Created by meshk on 11.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>


unsigned char to_upper_char(unsigned char c)
{
    return c & 0b11011111;
}

int main(void)
{
    unsigned char ch = '0';

    while (true) {
        ch = getchar();
        if (ch == '.') {
            break;
        }
        if (ch >= 'a' && ch<= 'z') {
            ch = to_upper_char(ch);
        }
        putchar(ch);
    }


    return 0;
}
