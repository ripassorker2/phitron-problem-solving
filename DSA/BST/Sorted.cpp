#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());

        // for (int i = 0; i < a.size(); i++)
        // {
        //     for (int j = i + 1; j < a.size();)
        //     {
        //         if (a[i] == a[j])
        //             a.erase(a.begin() + j);

        //         else
        //             j++;
        //     }
        // }

        a.erase(unique(a.begin(), a.end()), a.end());

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }

        // auto i = unique(a.begin(), a.end());

        // for (auto it = a.begin(); it != i; ++it)
        // {
        //     std::cout << *it << " ";
        // }

        cout << endl;
    }

    return 0;
}