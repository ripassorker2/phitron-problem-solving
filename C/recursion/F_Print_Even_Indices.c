#include <stdio.h>

void print_even(int arr[], int n, int i)
{

    if (i > n - 1)
    {
        return;
    }
    print_even(arr, n, i + 2);
    printf("%d ", arr[i]);
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

    print_even(arr, n, 0);
    return 0;
}