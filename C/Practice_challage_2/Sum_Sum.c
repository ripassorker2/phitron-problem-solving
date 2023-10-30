#include <stdio.h>
int main()
{
    int n, pos_sum = 0, neg_sum = 0;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            pos_sum += arr[i];
        }
        else
        {
            neg_sum += arr[i];
        }
    }

    printf("%d %d", pos_sum, neg_sum);

    return 0;
}