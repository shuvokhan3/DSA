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

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        Node* temp = head;
        while(temp){
            if(temp->data == key){
                return true;
            }
            temp = temp ->next;
        }
        return false;
    }
};