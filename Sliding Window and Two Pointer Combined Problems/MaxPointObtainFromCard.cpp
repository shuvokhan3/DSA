#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
    
    if (k == n) return totalSum; // If k equals the size of the array, take all cards.
    
    int windowSize = n - k;
    int minSubarraySum = accumulate(cardPoints.begin(), cardPoints.begin() + windowSize, 0);
    int currentSum = minSubarraySum;
    
    for (int i = windowSize; i < n; i++) {
        currentSum += cardPoints[i] - cardPoints[i - windowSize];
        minSubarraySum = min(minSubarraySum, currentSum);
    }
    
    return totalSum - minSubarraySum;
}

int main() {
    vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;
    cin>>k;
    cout << maxScore(cardPoints, k) << endl;
    return 0;
}
