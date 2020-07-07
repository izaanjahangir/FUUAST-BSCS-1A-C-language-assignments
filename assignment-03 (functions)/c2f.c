#include <stdio.h>

float centigradeToFahrenheit(float centigrade);

int main()
{
    float centigrade, fahrenheit;

    printf("\n");

    printf("Enter centigrade value: ");
    scanf("%f", &centigrade);

    fahrenheit = centigradeToFahrenheit(centigrade);

    printf("Fahrenheit conversion is: %.2f", fahrenheit);

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}

float centigradeToFahrenheit(float centigrade)
{
    return (centigrade * 9 / 5) + 32;
}
