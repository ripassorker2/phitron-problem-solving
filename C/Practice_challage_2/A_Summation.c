#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%lld\n", llabs(sum));

    return 0;
}