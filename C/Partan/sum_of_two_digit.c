#include <stdio.h>
int main()
{
    int n, s;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &s);

    int isSum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                isSum = 1;
                break;
            }

            // printf("%d %d \n", arr[i], arr[j]);
        }
    }

    if (isSum)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    printf("\n");

    return 0;
}