#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& arr)
{
    int arrSize = arr.size();

    for(int i = 1 ; i < arrSize ;i++)
    {
        int val = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > val )
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = val;
    }
    for(int i = 0 ; i < arrSize ; i++)
    {
        cout<<arr[i];
    }
}

int main ()
{
    vector<int>arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertionSort(arr);
    return 0;
}
