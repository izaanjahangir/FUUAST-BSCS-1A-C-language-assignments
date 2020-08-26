#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Izaan ";
    char s2[10] = "jahangir";

    strcat(s1,s2);

    printf("Output string after concatenation: %s", s1);

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}