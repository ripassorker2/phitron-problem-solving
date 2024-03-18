#include <bits/stdc++.h>
#define ll long long int
using namespace std;

long maximumSumSubarray(int k, vector<int> &arr, int n)
{

    long sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    long max_sum = sum;

    for (int i = 0; i < n - k; i++)
    {
        sum += arr[i + k] - arr[i];
        if (max_sum < sum)
            max_sum = sum;
    }
    return max_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << maximumSumSubarray(k, arr, n) << "\n";

    return 0;
}