#include<bits/stdc++.h>
using namespace std;
/*
int longestSubarray(vector<int>& arr, int k) {
        int len = arr.size(),maxVal = 0, c = 0, f = 0;
        //find the prefixSum
        vector<int>prefixSum(len);//take a prefix sum vector
        //calculate the prefix sum of the original vecor
        for(int i = 0 ; i < len ;i++){
            if(i == 0){
              //put first index value of original array inside prefix sum array
              prefixSum[i] = arr[i];

            }else{
                //main logic
                 prefixSum[i] = prefixSum[i-1] + arr[i];
            }
        }

        //main logic
        int sum;
        for(int i = 0 ; i < len ;i++){

            for(int j = i+1 ; j < len ;j++){
                //if [0,n] range this time the result is same as prefixSum of n;
                if(i == 0){
                    sum = prefixSum[j];
                   if(sum == k){
                      maxVal = max(maxVal,((j+1) - c));
                      f = 1;
                   }
                }
                else{
                    sum = prefixSum[j] - prefixSum[i-1];
                    if(sum == k){
                        maxVal = max(maxVal,((j+1) - c));
                        f = 1;
                    }
                }
            }
            c++;
        }
        //if f == 0 that is mean (sum != k);
        if(f == 0){
            return 0;
        }else{ //return result
            return maxVal;
        }
}

*/

/*
//Brute force approse
int longestSubarray(vector<int>&arr,int k){
    int len = arr.size();
    int maxlen = 0;
    for(int i  = 0 ; i < len ; ++i){
        auto currenSum = 0;
        for(int j = i ; j < len ; ++j){
            currenSum += arr[j];
            if(currenSum == k){
               maxlen = max(maxlen, j-i+1);
            }
        }
    }
    return maxlen;
}
*/

// Optimal Approach using Hash Map - Time complexity O(n)
int longestSubarray(vector<int>&arr, int k){
    //take a unordermap to store the key value formate of prefixsum and it index
    unordered_map<long long, int>prefixSum;
    //innitially the prefixSum Value is -1;
    prefixSum[0] = -1;
    long long current_sum = 0;
    int max_len = 0;

    for(int i = 0; i < arr.size() ;i++){
        current_sum+=arr[i];
        long long target = current_sum - k;

        if(prefixSum.find(target) != prefixSum.end()){
            int len = i - prefixSum[target];
            max_len = max(max_len, len);
        }
        // Only insert if current_sum is not already in the map to keep the earliest index
        if(prefixSum.find() == prefixSum.end()){
            prefixSum[current_sum] = i ;
        }

    }
    return max_len;
}



int main ()
{
    int k;
    cin>>k;
    vector<int>arr = {-5, 8, -14, 2, 4, 12};
    longestSubarray(arr,k);
    return 0;
}











