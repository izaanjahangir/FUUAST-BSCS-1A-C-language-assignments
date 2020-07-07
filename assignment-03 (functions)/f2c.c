#include <stdio.h>

float fahrenheitToCentigrade(float centigrade);

int main()
{
    float centigrade, fahrenheit;

    printf("\n");

    printf("Enter fahrenheit value: ");
    scanf("%f", &fahrenheit);

    centigrade = fahrenheitToCentigrade(fahrenheit);

    printf("Centigrade conversion is: %.2f", centigrade);

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}

float fahrenheitToCentigrade(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
