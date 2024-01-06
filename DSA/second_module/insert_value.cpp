#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {9, 8, 3, 2, 1};
    vector<int> v2 = {7, 6, 5};

    v.insert(v.begin() + 1, v2.begin(), v2.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << v.size() << endl;
    return 0;
}