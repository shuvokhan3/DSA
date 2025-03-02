#include<bits/stdc++.h>
#include<list>
using namespace std;
vector<vector<int>> subsets(vector<int>& nums) {
    //Find the size of this vector
    int n = nums.size();
    //Find number of subsets
    int numsSets = 1 << n;//means 1 * 2^n =1 left shif n

    //vector of vector int
    vector<vector<int>>res = {};

    for(int num = 0 ; num < numsSets-1 ;num++){// 2^n time 
    
        vector<int>res2 = {};
        for(int i = 0 ; i < n -1 ;i++){//O(n) time
            //if the element is non zero number
            if(num && (1 << i)){
                res2.push(nums[i]);
            }
        }
        res.push(res2);
    }
    return res;
}
int main (){
    vector<int>nums = {1,2,3};
    subsets(nums);
    return 0;
}