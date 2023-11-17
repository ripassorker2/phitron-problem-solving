#include <stdio.h>

// int bouble_sort(int ar[], int n)
// {
//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (ar[j] > ar[j + 1])
//             {
//                 temp = ar[j];
//                 ar[j] = ar[j + 1];
//                 ar[j + 1] = temp;
//             }
//         }
//     }
// }
// int selection_sort(int ar[], int n)
// {
//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (ar[i] > ar[j])
//             {
//                 temp = ar[i];
//                 ar[i] = ar[j];
//                 ar[j] = temp;
//             }
//         }
//     }
// }

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = n - 1; i >= n - k; i--)
    {
        long long int temp = sum + arr[i];
        if (temp > sum)
            sum = temp;
    }
    printf("%lld", sum);

    return 0;
}