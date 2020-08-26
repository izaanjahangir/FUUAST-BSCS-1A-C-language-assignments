#include <stdio.h>
#include <string.h>

int main()
{
    char mystr[26] = "My name is izaan jahangir";

    printf("%s", strchr(mystr, 'm'));

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}
