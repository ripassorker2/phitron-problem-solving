#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> count;
    for (char ch = 'a'; ch <= 'z'; ++ch)
        count[ch] = 0;

    for (char ch : s)
        count[ch]++;

    char flag = '-';
    for (char ch = 'a'; ch <= 'z'; ++ch)
    {
        if (count[ch] == 0)
        {
            flag = ch;
            break;
        }
    }

    if (flag != '-')
        cout << flag << endl;
    else
        cout << "None" << endl;

    return 0;
}
