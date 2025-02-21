#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& piles) {
    int maxi = INT_MIN;
    int n = piles.size();
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int>& piles, int hourly) {
    int totalH = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)piles[i] / (double)hourly);
    }
    return totalH;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, heigh = findMax(piles);

    while (low <= heigh) {
        int mid = low + (heigh - low) / 2;
        int totalH = calculateTotalHours(piles, mid);

        if (totalH <= h) {
            heigh = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
int main (){
    int n;
    cin>>n;
    vector<int>piles={3,6,7,11};
    minEatingSpeed(piles, n);
    return 0;
}
