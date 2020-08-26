#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "izaan jahangir";
    char s2[20] = "izaan";

    if (strncmp(s1, s2, 5) == 0)
    {
        printf("string 1 and string 2 are equal");
    }
    else
    {
        printf("string 1 and 2 are different");
    }

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}