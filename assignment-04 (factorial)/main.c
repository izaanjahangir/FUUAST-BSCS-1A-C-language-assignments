#include <stdio.h>

int find_sum(int num);

int main()
{
    int range;

    printf("\n");
    printf("Enter a number to find sum from 1 to it: ");
    scanf("%d", &range);

    int sum = find_sum(range);

    printf("Sum from 1 to %d is %d", range, sum);

    // Mac's zsh terminal put a weird sign of percent (%) if program ends without a new line
    // This statement is here to prevent that, also to make some space
    printf("\n \n");

    return 0;
}

int find_sum(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return find_sum(num - 1) + num;
}