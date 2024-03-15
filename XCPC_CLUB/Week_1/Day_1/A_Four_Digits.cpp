#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, newS;
    cin >> s;
    for (int i = 0; i < 4 - s.size(); i++)
        newS += "0";

    cout << newS + s << endl;
    return 0;
}