#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    int line = (n / 2) + 0.5 + 10;

    int space = (n / 2) + 0.5 + 4, star = 1;

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i >= (n / 2) + 0.5 + 4)
        {
            space = 5;
            star = n;
        }
        else
        {
            space--;
            star = star + 2;
        }
    }

    return 0;
}