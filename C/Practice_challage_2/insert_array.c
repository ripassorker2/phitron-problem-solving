

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position and data that you want to push  ->\n");
    int pos, data;
    scanf("%d %d", &pos, &data);

    for (int i = n + 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = data;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}