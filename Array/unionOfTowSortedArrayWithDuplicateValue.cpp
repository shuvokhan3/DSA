#include<bits/stdc++.h>
using namespace std;
void test(vector<int>&arr)
{
    int length = arr.size();

    for(int i = 0 ; i < length ;i++){
        for(int j = 0; j < length ; j++){
            if(arr[i] == arr[j]){
                arr.erase(arr.begin() + j);
            }
        }
    }
    int lenght2 = arr.size();
    cout<<lenght2<<endl;
}

void debug(vector<int>arr)
{
    int len = arr.size();
    for(int i = 0 ; i < len ; i++){
        if(arr[i] == arr[i+1]){
            arr.erase(arr.begin() + (i+1));
        }

    }

}

void stl(vector<int>arr)
{
    //if delete the index 2 element of this vector
    //arr.erase(arr.begin() + 2);
    //for(auto num : arr){
        //cout<<num<< " ";
    //}

    //if i want to delete index 2 - 5 range value
    arr.erase(arr.begin() + 1 , arr.begin() + 3);
    for(auto value : arr){
        cout<<value<<" ";
    }
}
int main()
{
    vector<int>arr = {1,3,3,4,5};
    //test(arr);
    debug(arr);
    return 0;
}
