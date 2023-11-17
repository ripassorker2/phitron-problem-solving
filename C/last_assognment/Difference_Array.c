#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }

        int temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j] = a[j] - b[j];
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", abs(c[j]));
        }
        printf("\n");
    }
    return 0;
}