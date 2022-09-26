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
void deleteHead(node* head)
    {
        if(head == NULL) 
            return;
        node* temp = head;
        head = head -> next;
        delete temp;
        return;
    }
int main()
{
    node* head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    deleteHead(head);
    return 0;
}