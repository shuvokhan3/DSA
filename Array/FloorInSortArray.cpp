#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<int>& arr, int k) {
    int n = arr.size();
    int minIndex = 0,maxIndex = n-1;middleVal = 0,f = 0;

    while(minIndex <= maxIndex){
        int middleVal = (maxIndex+minIndex)/2;
        if(arr[middleVal] > k){
            maxIndex = middleVal;
        }
        else if(arr[middleVal] < k){
            minIndex = middleVal;
        }
        else if(arr[middleVal == k]){
            cout<<middleVal<<endl;
            f = 1;
            break;
        }
    }
    if(f == 0 )

}
int main ()
{
    int k;
    cin>>k;
    vector<int>arr = {1, 2, 8, 10, 11, 12, 19};
    findFloor(arr,k);
}
