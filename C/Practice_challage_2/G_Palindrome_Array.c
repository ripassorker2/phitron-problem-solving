#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bool isPalimdrome = true;
    int start = 0, end = n - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {

            isPalimdrome = false;
        }
        start++;
        end--;
    }
    if (isPalimdrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}