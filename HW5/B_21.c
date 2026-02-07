//
// Created by meshk on 07.02.2026.
//
#include <ctype.h>
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
    const unsigned char stop = '.';
    unsigned char enter_char;
    while (true) {
        if (scanf("%c", &enter_char) != 1) {
            return 1;
        }
        if (enter_char== stop) {
            break;
        }
        printf("%c", tolower(enter_char));
    }

    return 0;
}
