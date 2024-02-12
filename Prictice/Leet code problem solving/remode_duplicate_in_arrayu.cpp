#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size();)
        {
            // cout << nums[i] << " " << nums[j] << " ";

            if (nums[i] == nums[j])
                nums.erase(nums.begin() + j);

            else
                j++;
        }
    }

    // for (int i = 0; i < nums.size(); i++)
    //     cout << nums[i] << " ";

    return nums.size();
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 2; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    cout << removeDuplicates(v) << endl;
    return 0;
}