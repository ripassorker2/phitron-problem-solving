#include <stdio.h>
int main()
{
    int n, digit, last_digit;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &digit);

        do
        {

            last_digit = digit % 10;
            digit = digit / 10;
            printf("%d ", last_digit);

        } while (digit != 0);
        printf("\n");
    }

    return 0;
}