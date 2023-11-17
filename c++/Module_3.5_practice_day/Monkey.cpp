#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int len = s.size();

        // for (int i = 0; i < len; i++)
        // {

        //     for (int j = i + 1; j < len; j++)
        //     {
        //         if (s[i] == ' ' || s[j] == ' ')
        //         {
        //             continue;
        //         }
        //         else if (s[i] > s[j])
        //         {
        //             char temp = s[i];
        //             s[i] = s[j];
        //             s[j] = temp;
        //         }
        //     }

        // }
        sort(s.begin(), s.end());
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
                cout << s[i];
        }

        cout << endl;
    }
    return 0;
}