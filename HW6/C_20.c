//
// Created by meshk on 11.02.2026.
//

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    char ch = '0';
    int open_bracket_counter = 0;
    int close_bracket_counter = 0;
    bool first_flag = true;

    while (true) {
        ch = getchar();

        if (ch == ')' && first_flag) {
            close_bracket_counter = -1;
            break;
        }
        if (ch =='(') {
            open_bracket_counter++;
            first_flag = false;
        }
        if (ch == ')') {
            close_bracket_counter++;
        }

        if (ch == '.') {
            break;
        }
    }

    printf("%s\n", open_bracket_counter == close_bracket_counter ? "YES" : "NO");
    return 0;
}
