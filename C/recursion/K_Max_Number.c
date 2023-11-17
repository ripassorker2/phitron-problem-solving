#include <stdio.h>
#include <limits.h>

int get_max(int arr[], int size, int i)
{
    if (size == i)
    {
        return INT_MIN;
    }
    int m = get_max(arr, size, i + 1);

    if (arr[i] > m)
    {
        return arr[i];
    }
    else
    {
        return m;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mx = get_max(arr, n, 0);
    printf("%d", mx);

    return 0;
}