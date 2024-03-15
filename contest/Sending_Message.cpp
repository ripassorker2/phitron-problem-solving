#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {

        int i = 0, j = 0;
        while (i < str1.size() && j < str2.size())
        {
            if (str1[i] == str2[j])
                j++;
            i++;
        }

        if (j == str2.size())
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
    return 0;
}
