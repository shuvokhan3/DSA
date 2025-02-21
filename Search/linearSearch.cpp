#include<bits/stdc++.h>
using namespace std;

void linearSearch(vector<int>&arr,int k)
{
    int f = 0;
    for(int num : arr)
    {
        if(num == k)
        {
            cout<<"true";
            f = 1;
        }
    }
    if(f == 0)
    {
        cout<<"false";
    }
}

bool binaySearch(vector<int>&arr,int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while(low<=high)
    {
        //find the middle value
        int middle = (low + (high - low)/2);
        //check the tergated value is inside the middle value
        if(arr[middle] == k)
        {
            cout<<"true";
            return true;
        }
        //search in the left side
        else if(k < arr[middle]  )
        {
            high = middle - 1;
        }
        //search in the right side;
        else if(k > arr[middle] )
        {
            low = middle + 1;
        }
    }
    cout<<"false";
    return false;
}
int main ()
{
    int k;
    cin>>k;
    vector<int>arr = {1,2, 3, 5, 6};
    binaySearch(arr,k);
}
