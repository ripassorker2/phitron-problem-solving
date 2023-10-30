#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position  that you want to delete  ->\n");
    int pos;
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
