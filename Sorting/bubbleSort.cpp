#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    int arrSize = arr.size();

    for(int i = 0 ; i < arrSize;i++)
    {
        for(int j = 0 ; j < arrSize-1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        cout<<arr[i]<<" ";
    }
}


int main()
{
    vector<int>arr = {4, 1, 3, 9, 7};
    bubbleSort(arr);
}
