#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>&nums)
{
    //get the length
    int len = nums.size();

    for(int i = 0 ; i < len ; i++)
    {
        //get the minIndex
        int minIndex = i;
        //find the next minIndex
        for(int j = i; j < len; j++)
        {
            if(nums[minIndex] > nums[j])
            {
                minIndex = j;//insert the next min index
            }
        }
        //if the first minIndex is not eqal to my last min index this time swap
        if(minIndex != i)
        {
            swap(nums[i],nums[minIndex]);
        }

    }
    //return the entire vector
    return nums;
}

int missingNumber(vector<int>& nums)
{
    //call the vector and copy it into another vector
    vector<int>sortedNumber = selectionSort(nums);
    int len = sortedNumber.size();

    // Check for the smallest missing number in the range [0, len]
    for (int i = 0; i <= len; i++)
    {
        bool found = false; // Flag to check if the number exists in the array

        // Binary search to check if the number exists
        int low = 0, high = len - 1;
        while (low <= high)
        {
            int middle = low + (high - low) / 2;

            if (sortedNumber[middle] == i)
            {
                found = true; // Number exists in the array
                break;
            }
            else if (sortedNumber[middle] > i)
            {
                high = middle - 1; // Search in the left half
            }
            else
            {
                low = middle + 1; // Search in the right half
            }
        }

        // If the number is not found, it is the smallest missing number
        if (!found)
        {
            return i;
        }
    }

}
int main ()
{
    vector<int>nums = {9,6,4,2,3,5,7,0,1};
    int val = missingNumber(nums);
    cout<<val<<endl;
}
