#include <bits/stdc++.h>
using namespace std;

void rprint(string s)
{
    int sz = s.size();
    for (int i = sz - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}

int main()
{
    string s;
    getline(cin, s);
    s += " ";
    string word = "";
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        if (s[i] != ' ')
            word += s[i];
        else
        {
            rprint(word);
            word = "";
            if (i != sz - 1)
                cout << " ";
            else
                cout << endl;
        }
    }

    return 0;
}

// #include <iostream>
// #include <sstream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main()
// {

//     string s;
//     getline(cin, s);
//     istringstream iss(s);
//     ostringstream oss;
//     string word;

//     while (iss >> word)
//     {
//         reverse(word.begin(), word.end());
//         oss << word << " ";
//     }

//     cout << oss.str().substr(0, oss.str().size() - 1);

//     return 0;
// }
