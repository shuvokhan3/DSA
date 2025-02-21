#include<bits/stdc++.h>
using namespace std;
void rotate2(vector<int>& nums, int k) {
    int arrSize = nums.size();
    k = k % arrSize; // Handle cases where k is larger than the size of the array
    while (k--) {
        // Store the last element
        int last = nums[arrSize - 1];
        // Shift elements to the right
        for (int i = arrSize - 1; i > 0; i--) {
            nums[i] = nums[i - 1];
        }
        // Place the last element in the first position
        nums[0] = last;
    }

    // Print the rotated array (optional for debugging)
    for (int i = 0; i < arrSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

  void rotate(vector<int>& nums, int k) {

    // Handle the case where k is larger than the size of the array
    k = k % nums.size();
    int n = nums.size();

    // Reverse the entire array
    reverse(nums.begin(), nums.end());
    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);
    // Reverse the remaining n - k elements
    reverse(nums.begin() + k, nums.end());

    //print the array
    for(int i = 0 ; i < n ;i++){
        cout<<nums[i]<<" ";
    }
}
int main ()
{
    vector<int>nums = {1,2,3,4,5,6,7};
    int k;
    cin>>k;
    rotate(nums,k);
}
