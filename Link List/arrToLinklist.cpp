#include<bits/stdc++.h>
using namespace std;
//create a self define function
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    Node(){
        data = 0;
        next = nullptr;
    }
};
//convert array to linklist
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size();i++){
        Node* temp = new Node(arr[i]); // Step 1: Create a new node with arr[i]
        mover->next = temp;// Step 2: Link previous node to the new node
        mover = temp; // Step 3: Move the pointer to the new node
    }
    return head;
}

//insert a new node at the tail of the linklist
Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
int main (){
    vector<int>arr={1,2,3,4,5,6,7};
    Node* head = convertArr2LL(arr);
    /*
    //Traverse into this linklist
    Node* temp = head;
    while(temp){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    */
    head = insertTail(head, 100);
    cout<<head<<endl;
}
