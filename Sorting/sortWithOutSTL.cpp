#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ;i++){
        cout<<nums[i]<<" ";
    }
}
int main ()
{
    vector<int>nums = {2,0,2,1,1,0};
    sortColors(nums);
}
