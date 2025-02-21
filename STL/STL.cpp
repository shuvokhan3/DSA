#include<bits/stdc++.h>
using namespace std;
void stlInsert(vector<int>v)
{
    vector<int>vc(3,4);//4,4,4

    int a = 33;
    int b = 44;
    swap(a, b);
    cout<< a <<endl;

    //insert 100 in the 3 index
    //v.insert(v.begin() + 3, 100);

    //if i want to insert this vc vector inside this v vector
    //v.insert(v.begin()+1 , vc.begin(),vc.end());

    for(auto val : v)
    {
        cout<<val<<" ";//1,4,4,4,2,3,4,5;
    }
}

void stlStack(stack<int>&st)
{
    //set the value in a stack
    for(int i = 0 ; i < 5 ; i++)
    {
        st.push(i);
    }
    //print all element in the stack;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

void stqueue(queue<int>&qu)
{
    //set value in side queue
    for(int i = 1; i <= 5 ; i++)
    {
        qu.push(i);
    }

    //print the value in queue
    while(!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
}

void stlList(list<int>&li)
{
    for(int i = 0 ; i <= 4 ; i++)
    {
        li.push_front(i);
    }

    /*
    int len = li.size();
    //print the list value;
    for(list<int>::iterator iter = li.begin(); iter != li.end() ;iter++){
        cout<<*iter<<" ";
    }
    */

}
void stlPriorityQueueMaxHip(priority_queue<int>&pq){
    //insert value inside priority queue
    pq.push(1);
    pq.push(100);
    pq.push(20);
    pq.push(30);
    pq.push(31);
    pq.push(4);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}
void stlPriorityQueueMinHip(priority_queue<int,vector<int>,greater<int>>&pq){
    //push element in MinHip //
    pq.push(10);
    pq.push(20);
    pq.push(1);
    pq.push(2);
    pq.push(400);

    while(!pq.empty()){

        cout<<pq.top()<<" ";
        pq.pop();
    }

}
//set store sorted order and unique value
void setDataStructure(set<int>&arr){
    //find the size of set
    auto len = arr.size();

    //insert value in a set
    arr.insert(505);

    //find any element in a set
    auto it = arr.find(8989);
    //cout<<*it<<endl;

    //to erase any element in a set
    arr.erase(2);

    //set.count() take a parameter, if this value is exits more than one time this time it return 0 other wish it retrurn 1
    auto cnt = arr.count(2);
    cout<<cnt<<endl;
}
int main ()
{
    set<int>arr = {1,2,2,2,3,4,22,3,0,44,3,4,99};
    setDataStructure(arr);
    return 0;
}











