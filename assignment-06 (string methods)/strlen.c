#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 20

int main()
{
    char my_string[MAX_LIMIT];

    printf("\nEnter any string, should be less than %d characters: ", MAX_LIMIT);
    fgets(my_string, MAX_LIMIT, stdin);

    printf("Length of %s is %ld", my_string, strlen(my_string));

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}