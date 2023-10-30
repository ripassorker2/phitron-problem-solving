#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);

    int ar1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    scanf("%d", &m);

    int ar2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ar2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar1[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", ar2[i]);
    }
    printf("\n");
    int new[n + m];

    for (int i = 0; i < n; i++)
    {
        new[i] = ar1[i];
    }

    int newsize = n;
    for (int j = 0; j < m; j++)
    {
        new[newsize] = ar2[j];
        newsize++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", new[i]);
    }

    printf("\n");
    return 0;
}