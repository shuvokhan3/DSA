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

class Solution {
    public:
      // Function to count nodes of a linked list.
      int getCount(struct Node* head) {
          Node* temp = head;
          int cnt = 0;
          while(temp){
              temp = temp->next;
              cnt++;
          }
          return cnt;
      }
  };