#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1 ; i< arr.size() ;i++){
           //normal swap two element
           Node*temp = new Node(arr[i]);
           mover->next = temp;
           mover = temp;

        }
        return head;
    }
};
int main (){
    vector<int> arr = {1,2,3,4};
    Node* head = constructLL(arr);
    cout<< Node->data;
    return 0;
}
