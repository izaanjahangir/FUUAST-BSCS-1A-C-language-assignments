#include <stdio.h>
#include <string.h>

int main()
{
    char name[17] = "My name is izaan";
    printf("Output string is: %s", strstr(name, "is"));

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}