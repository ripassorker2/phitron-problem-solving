#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    s.erase(remove_if(s.begin(), s.end(), [](char ch)
                      { return !isalnum(ch); }),
            s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string temp = s;
    reverse(s.begin(), s.end());
    if (temp == s)
        return true;
    else
        return false;

    return 0;
}