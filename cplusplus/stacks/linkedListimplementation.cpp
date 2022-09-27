#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;
    //constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
node* head = NULL;
void push(int data) //insert at beginning
{
    if(head == NULL)
    {
        head = new node(data);
        return;
    }
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
void pop()  //deleteAtHead
{
    if(head == NULL)
    {
        return;
    }
    node* temp = head;
    head = head -> next;
    delete temp;
    return;
}
int top(){
    if(head == NULL)
    {
        return ;
    }
    return (head -> data);
}
void printStack()
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<'\n';
        temp = temp -> next;
    }
}
int main()
{
    push(3);
    push(2);
    push(1);
    printStack();
    cout<<"\n"; 
    
    
    top();
    return 0;
}