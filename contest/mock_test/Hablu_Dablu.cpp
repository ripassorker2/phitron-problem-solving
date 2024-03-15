#include <bits/stdc++.h>
#define br "\n"

#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, v;
    cin >> h >> v;
    vector<int> arr(h);

    for (int i = 0; i < h; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    ll total = 0;

    for (int i = arr.front() - 1; i > 0; i--)
        total += i;

    if (v > total)
        cout << "Hablu\n";
    else
        cout << "Dablu\n";

    return 0;
}