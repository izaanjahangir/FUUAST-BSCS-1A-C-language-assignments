#include <stdio.h>
#include <string.h>

int main()
{
    char s1[29] = "string 1";
    char s2[29] = "i will be copied to string 1";

    printf("\nString s1 before copy is: %s", s1);

    strcpy(s1, s2);

    printf("\nString s1 after copy is: %s", s1);

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}