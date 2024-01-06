#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    bool is_found = false;
    string s;
    getline(cin, s);

    for (char c : s)
    {
        if (isalpha(c))
        {

            if (is_found == false)
            {
                cnt++;
            }
            is_found = true;
        }
        else
        {
            is_found = false;
        }
    }

    cout << cnt << endl;
    return 0;
}