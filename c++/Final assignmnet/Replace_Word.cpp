
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    cin.ignore();

    while (test--)
    {
        string s, s2;
        cin >> s >> s2;

        int pos = s.find(s2);

        while (pos != -1)
        {
            s.replace(pos, s2.length(), "#");
            pos = s.find(s2);
        }

        cout << s << endl;
    }

    return 0;
}
