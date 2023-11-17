#include <stdio.h>
int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int is_zero = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
            {
                is_zero = 1;
            }
        }
        printf("\n");
    }

    if (is_zero)
    {
        printf("Not Zero");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}