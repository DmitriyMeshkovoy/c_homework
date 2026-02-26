//
// Created by meshk on 16.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

void reverse_string() {
    char ch = getchar();
    if (ch  != '.') {
        reverse_string();

        putchar(ch);
    }
}


int main(void)
{
    reverse_string();
    return 0;
}