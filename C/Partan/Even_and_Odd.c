
#include <stdio.h>

void odd_even()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n", even, odd);
}

int main()
{
    odd_even();
    return 0;
}