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
    int max_pos = 0;
    int min_pos = 0;
    int max_value = arr[max_pos];
    int min_value = arr[min_pos];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
            max_pos = i;
        }
        else if (arr[i] < min_value)
        {
            min_value = arr[i];
            min_pos = i;
        }
    }

    arr[max_pos] = min_value;
    arr[min_pos] = max_value;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}