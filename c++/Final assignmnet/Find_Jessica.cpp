#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool isFound = false;

    while (ss >> word)
    {
        if (word == "Jessica")
            isFound = true;
    }

    if (isFound)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
    return 0;
}