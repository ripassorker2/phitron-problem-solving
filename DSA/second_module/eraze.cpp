#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {9, 8, 3, 2, 1};

    v.erase(v.begin() + 1, v.begin() + 4);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}