#include <iostream>
#include <vector>

int searchInsert(std::vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}

int main()
{
    std::vector<int> nums = {1, 3};
    int target = 2;
    int result = searchInsert(nums, target);
    std::cout << result << std::endl; // Output: 1

    return 0;
}
