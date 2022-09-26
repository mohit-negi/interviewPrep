#include<iostream>
using namespace std;

//initializing a node 

class node{
    public:
    int data;
    node* next;

    //constructor for creating node
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertAtHead(node*& head,int data)
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
void insertAtTail(node*& head,int data)
{
    if(head == NULL)
    {
        head = new node(data);
        return;
    }
    node* tail = head;
    while(tail -> next != NULL)
    {
        tail = tail -> next;
    }
    tail -> next = new node(data);
    return;
}

void printNodes(node* head)
{
    while(head != NULL)
    {
        cout<<head -> data<<" --> ";
        head = head -> next;
    }
    cout<<'\n';
}
int main()
{
    node* head = NULL;  //creating a new node
    // insertAtHead(head,3);
    // insertAtHead(head,2);
    // insertAtHead(head,1);
    // printNodes(head);
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
    printNodes(head);

    return 0;
}