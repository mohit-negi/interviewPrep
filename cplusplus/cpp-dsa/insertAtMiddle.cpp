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
    int length(node* head){
        int cnt{};
        while(head != NULL)
        {
            head = head -> next;
            cnt++;
        }
        return cnt;
    }
    void insertAtMiddle(node*& head,int data,int pos)
    {
        if(head == NULL && pos <= 0)
        {
            head = new node(data);
            return;
        }
        if(length(head) < pos)
        {
            insertAtTail(head,data);
        }
        int jmp{};
        node* prev = head;
        while(jmp < pos-2)
        {
            prev = prev -> next;
            jmp++;
        }
        node* temp = new node(data);
        temp -> next = prev -> next;
        prev -> next = temp;
        
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
        insertAtHead(head,3);
        insertAtHead(head,2);
        insertAtHead(head,1);
        printNodes(head);
 
        return 0;
    }