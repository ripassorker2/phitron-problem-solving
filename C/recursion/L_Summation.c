#include <stdio.h>

long long int print_sum(int arr[], int n, int i)
{
    if (i > n - 1)
    {
        return 0;
    }

    return arr[i] + print_sum(arr, n, i + 1);
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

    long long int sum = print_sum(arr, n, 0);
    printf("%lld", sum);
    return 0;
}