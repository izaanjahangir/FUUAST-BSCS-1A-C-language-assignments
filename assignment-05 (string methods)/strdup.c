#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Izaan jahangir";

    char *target = strdup(source);

    printf("%s", target);

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}