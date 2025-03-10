#include<bits/stdc++.h>
using namespace std;
int numSubarraysWithSum(vector<int>& nums, int goal) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; 
    
    int sum = 0, count = 0;
    for (int num : nums) {
        sum += num;
        
        // Check if (sum - goal) exists in the map
        if (prefixSumCount.find(sum - goal) != prefixSumCount.end()) {
            count += prefixSumCount[sum - goal];
        }
        
        // Update the prefix sum count
        prefixSumCount[sum]++;
    }
    
    return count;
}
