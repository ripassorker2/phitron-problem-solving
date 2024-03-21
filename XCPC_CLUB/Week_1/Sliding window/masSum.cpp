//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int k, vector<int> &a, int n)
    {
        int l = 0, r = 0;
        long long ans = 0, sum = 0;

        while (r < n)
        {
            sum += a[r];
            if ((r - l + 1) == k)
            {
                ans = max(sum, ans);
                sum -= a[l];
                l++;
                r++;
            }
            else
                r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends