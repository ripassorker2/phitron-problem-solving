#include <stdio.h>
int main()
{
    int n, s, k = 1;
    scanf("%d", &n);

    s = n - 1;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {

                printf("-");
            }
        }

        printf("\n");

        if (i <= n - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
    }

    return 0;
}