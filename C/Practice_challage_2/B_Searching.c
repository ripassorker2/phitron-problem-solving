#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, x;

    scanf("%d", &n);

    int arr[n];
    bool isfalse = false;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d\n", i);
            isfalse = true;
            break;
        }
    }
    if (!isfalse)
    {
        printf("-1");
    }

    return 0;
}