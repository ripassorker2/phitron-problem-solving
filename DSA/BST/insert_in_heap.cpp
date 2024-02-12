#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
        int cur_ind = v.size() - 1;

        while (cur_ind != 0)
        {
            int par_ind = (cur_ind - 1) / 2;
            if (v[par_ind] > v[cur_ind])
            {
                swap(v[par_ind], v[cur_ind]);
                cur_ind = par_ind;
            }
            else
                break;
        }
    }
    for (int x : v)
        cout << " " << x;

    return 0;
}