#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    int temp = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[n - 1][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][m - 1]);
        }

        printf("\n");
    }

    return 0;
}