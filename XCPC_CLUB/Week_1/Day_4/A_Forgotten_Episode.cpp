#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> arr(t - 1);

    for (int i = 0; i < t - 1; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < t - 1; i++)
    {
        if (arr[0] != 1)
        {
            cout << 1 << endl;
            break;
        }
        else if (arr[i] + 1 != arr[i + 1])
        {
            cout << arr[i] + 1 << endl;
            break;
        }
    }
    return 0;
}