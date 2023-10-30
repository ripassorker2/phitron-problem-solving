#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    int start = 0, end = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (start <= end)
    {

        if (start == end)
        {
            cout << arr[start] << " ";
            start++;
            end--;
        }
        else
        {
            cout << arr[start] << " " << arr[end] << " ";
            start++;
            end--;
        }
    }

    cout << endl;
    return 0;
}