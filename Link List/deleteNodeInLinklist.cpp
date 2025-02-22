#include<bits/stdc++.h>
using namespace std;
///Customize datatype
class ListNode{
    public:
    int data;
    ListNode* next;

    public:
    ListNode(int data){
        this->data = data;
        this->next = nullptr;
    }
    ListNode(){
        data = 0;
    }

};
void deleteNode(ListNode* node) {
    if(node == nullptr || node->next == nullptr){
        return;
    }
    ///copy the value of the next node into current node
    node->data = node->next->data;
    ///store next node
    ListNode* temp = node->next;
    node->next = node->next->next;
    delete temp;

}
void printList(ListNode* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"NULL\n"<<endl;
}

int main ()
{
     // Creating the linked list: 4 -> 5 -> 1 -> 9
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original List: ";
    printList(head);

    // Deleting node with value 5
    deleteNode(head->next); // Pass node 5 directly

    cout << "After Deletion: ";
    printList(head);

    return 0;
}
