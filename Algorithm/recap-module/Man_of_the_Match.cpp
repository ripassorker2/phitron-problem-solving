#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v;
    vector<int> res;
    while (t--)
    {
        int maxI = INT_MIN, maxR = INT_MIN;
        for (int i = 0; i < 22; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }

        for (pair<int, int> p : v)
            res.push_back(p.first + (p.second * 20));

        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] > maxR)
            {
                maxR = res[i];
                maxI = i;
            }
        }
        cout << maxI + 1 << endl;
        v.clear();
        res.clear();
    }

    return 0;
}