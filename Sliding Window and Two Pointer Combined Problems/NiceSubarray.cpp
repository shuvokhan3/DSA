#include <bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0, oddCount = 0, result = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        // Count odd numbers
        if (nums[right] % 2 == 1)
            oddCount++;

        // If we have more than k odd numbers, move the left pointer
        while (oddCount > k)
        {
            if (nums[left] % 2 == 1)
                oddCount--;
            left++;
        }

        // Count valid subarrays
        int tempLeft = left;
        while (oddCount == k && tempLeft <= right && nums[tempLeft] % 2 == 0)
        {
            tempLeft++;
        }

        if (oddCount == k)
            result += (tempLeft - left + 1);
    }

    return result;
}
int main()
{
}