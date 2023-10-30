#include <bits/stdc++.h>
using namespace std;

void bouble_sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, k;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bouble_sort(arr, n);
    long long int sum = 0;

    for (int i = n - 1; i >= n - k; i--)
    {
        long long int temp = sum + arr[i];
        if (temp > sum)
            sum = temp;
    }
    cout << sum << '\n';

    return 0;
}