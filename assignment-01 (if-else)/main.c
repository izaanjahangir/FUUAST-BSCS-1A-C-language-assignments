#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\nEnter first number: ");
    scanf("%d", &num1);

    if (num1 > 0 && num1 < 10)
    {
        printf("Number %d is between 1 and 9", num1);
    }
    else if (num1 > 10 && num1 < 50)
    {
        printf("Number %d is between 11 and 49", num1);
    }
    else if (num1 > 100)
    {
        printf("Number %d is greater than 100", num1);
    }

    printf("\nEnter second number: ");
    scanf("%d", &num2);

    if (num2 > 0 && num2 < 10)
    {
        printf("Number %d is between 1 and 9", num2);
    }
    else if (num2 > 10 && num2 < 50)
    {
        printf("Number %d is between 11 and 49", num2);
    }
    else if (num2 > 100)
    {
        printf("Number %d is greater than 100", num2);
    }

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}