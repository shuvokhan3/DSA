#include<bits/stdc++.h>
using namespace std;
//self define data type
class Node{
public:
    //two variable
    //1st data variable data type is integer
    int data;
    //2nd variable name:memoryAdressOfNext data type is : Self define variable "Node"
    Node* memoryAdressOfNext;
    //constracture function to assign the value in a variable
    public:
    Node(){
        data = 0;
        memoryAdressOfNext = 0;
    }
    Node(int data){
        this->data = data;
        this->memoryAdressOfNext = nullptr;
    }
};

int main ()
{
    vector<int>arr = {1,2,3,4};
    //inside y i store the index 0 value
    Node* y = new Node(arr[0]);
    cout<<y<<endl;
    return 0;
}
