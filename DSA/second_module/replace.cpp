#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 3, 5, 6, 3, 7, 3, 8};

    replace(v.begin(), v.end() - 2, 3, 0);

    for (int x : v)
        cout
            << x << " ";
    cout << endl;
    return 0;
}