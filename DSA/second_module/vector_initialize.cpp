#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(60);
    v.push_back(70);
    v.push_back(90);

    v.resize(3);
    v.resize(6, 80);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout << v.empty();
    // cout << v.max_size();

    return 0;
}