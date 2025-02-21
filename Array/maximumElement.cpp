#include<bits/stdc++.h>
using namespace std;


void largest(vector<int>&arr)
{
    int maxValue = 0 ;

    int arrSize = arr.size();
    for(int i = 0 ; i < arrSize ;i++)
    {
        if(maxValue < arr[i])
        {
            maxValue = arr[i];
        }
    }
    cout<<maxValue<<endl;
}
int main ()
{
    vector<int>arr = {1,2,3,4,5};
    largest(arr);
}
