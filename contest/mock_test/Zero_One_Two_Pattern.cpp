#include <bits/stdc++.h>
#define br "\n"

#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[3] = {1, 2, 0};
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            cout << " ";
        cout << arr[k];
        for (int j = 1; j <= (n - i) * 2 - 1; j++)
            cout << " ";
        if (i != n)
            cout << arr[k];
        k++;
        if (k == 3)
            k = 0;
        cout << endl;
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
            cout << " ";
        cout << arr[k];
        for (int j = 1; j <= (n - i) * 2 - 1; j++)
            cout << " ";
        cout << arr[k];
        cout << endl;
        k++;
        if (k == 3)
            k = 0;
    }

    return 0;
}