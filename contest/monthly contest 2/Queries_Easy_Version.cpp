#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    vector<lli> v;

    lli q;
    cin >> q;
    while (q--)
    {
        lli x;
        cin >> x;
        if (x == 1)
        {
            lli y;
            cin >> y;
            v.push_back(y);
            sort(v.begin(), v.end());
        }
        else if (x == 2)
        {
            lli minEven = LLONG_MAX;

            for (lli i = 0; i < v.size(); i++)
            {
                if (v[i] % 2 == 0 && v[i] < minEven)
                {
                    minEven = v[i];
                    v.erase(v.begin() + i);
                    break;
                }
            }
            if (minEven != LLONG_MAX)
                cout << minEven << endl;

            else
                cout << "empty \n";
        }
        else if (x == 3)
        {

            lli minOdd = LLONG_MAX;

            for (lli i = 0; i < v.size(); i++)
            {
                if (v[i] % 2 != 0 && v[i] < minOdd)
                {
                    minOdd = v[i];
                    v.erase(v.begin() + i);
                    break;
                }
            }
            if (minOdd != LLONG_MAX)
                cout << minOdd << endl;

            else
                cout << "empty \n";
        }
    }
    return 0;
}
