#include <stdio.h>
int main()
{
    int n, min = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }

    printf("%d %d", arr[min], min + 1);

    return 0;
}