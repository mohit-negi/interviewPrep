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
void deleteHead(node*& head)
    {
        if(head == NULL) 
            return;
        node* temp = head;
        head = head -> next;
        delete temp;
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
    node* head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    printNodes(head);
    deleteHead(head);
    printNodes(head);
    return 0;
}