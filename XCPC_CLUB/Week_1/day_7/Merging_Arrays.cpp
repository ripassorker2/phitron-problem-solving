#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    vector<int> v1, v2;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < y; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    v1.insert(v1.end(), v2.begin(), v2.end());

    sort(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}