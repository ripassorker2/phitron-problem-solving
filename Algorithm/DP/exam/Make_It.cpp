#include <iostream>
#include <cstring>
using namespace std;
const int N = 100005;
bool dp[N];
bool ans(int val, int n)
{
    if (val == n)
        return true;
    if (val > n || val > N || dp[val])
        return false;

    dp[val] = true;
    bool op1 = ans(val + 3, n);
    bool op2 = ans(val * 2, n);
    return op1 || op2;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        memset(dp, false, sizeof(dp));
        if (ans(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}