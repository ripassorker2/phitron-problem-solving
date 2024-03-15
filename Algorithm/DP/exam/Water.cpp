#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a < b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }

        sort(v.begin(), v.end(), cmp);
        int first = v.back();
        v.pop_back();
        int second = v.back();

        int count = 0;
        int fans = -1;
        int sans = -1;

        for (int i = 0; i < n; i++)
        {
            if ((a[i] == first || a[i] == second) && count == 0)
            {
                fans = i;
                count++;
            }

            else if ((a[i] == first || a[i] == second) && count == 1)
            {
                sans = i;
                break;
            }
        }
        cout << fans << " " << sans << endl;
    }

    return 0;
}