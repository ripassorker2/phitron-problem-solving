#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli N, M, lastDisitOfN, lastDisitOfM;

    cin >> N >> M;

    lastDisitOfN = N % 10;
    lastDisitOfM = M % 10;

    cout << lastDisitOfN + lastDisitOfM << endl;

    cout
        << endl;
    return 0;
}