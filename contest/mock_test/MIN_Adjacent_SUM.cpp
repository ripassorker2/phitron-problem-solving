#include <bits/stdc++.h>
#define br "\n"

#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++)
        cin >> arr[i];

    sort(arr, arr + t);

    cout << arr[0] + arr[1] << br;

    return 0;
}