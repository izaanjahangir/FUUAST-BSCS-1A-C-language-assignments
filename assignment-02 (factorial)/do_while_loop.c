#include <stdio.h>
int main()
{
    int factorial = 1;
    int num;
    printf("\nEnter a number to check for factorial: ");
    scanf("%d", &num);

    int i = num;

    printf("\n");

    if (num <= 0)
    {
        printf("The output is very obvious and meaningless");
    }

    else if (num < 100)
    {
        do
        {
            factorial = factorial * i;
            i--;
        } while (i > 0);

        printf("Factorial of %d is %d", num, factorial);
    }

    else
    {
        printf("Number is too high");
    }

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}