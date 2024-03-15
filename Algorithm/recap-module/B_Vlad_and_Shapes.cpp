#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        string a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '1')
                    cnt++;
            }
            if (cnt != 0)
                v.push_back(cnt);
        }
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != v[0])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
    }

    return 0;
}
