#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        int maxcount = 0;
        string temp;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxcount)
            {
                maxcount = mp[word];
                temp = word;
            }
        }
        cout << temp << " " << maxcount << endl;
    }

    return 0;
}