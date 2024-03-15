#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    set<int> v;
    while (q--)
    {
        int type, val;
        cin >> type;
        if (type == 1)
        {
            cin >> val;
            v.insert(val);
        }
        else if (type == 2)
        {
            if (!v.empty())
            {
                int min_val = *v.begin();
                cout << min_val << '\n';
                v.erase(v.begin());
            }
            else
                cout << "empty" << '\n';
        }
    }

    return 0;
}