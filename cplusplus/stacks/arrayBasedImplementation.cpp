#include<iostream>
#include<climits>

using namespace std;

//first initializing a large array
const int MAX  = INT_MAX;
//created a max sized array

int ARR[MAX];

int TOP{-1};    //it represents top of the stack

//setting operations for stacks
void push(int x)
{
    if(TOP == MAX-1)
    {
        cout<<"Error: stack overflow\n";
        return;
    }
    TOP++;
    ARR[TOP] = x;   //pushing at the top of the stack
}
void pop()
{
    TOP--;
}
void top()
{
    if(TOP == -1)
    {
        cout<<"Error: No element to pop\n";
        return;
    }
    cout<<ARR[TOP]<<'\n';
}
bool isEmpty()
{
    return(TOP == -1);
}
void printStack()
{
    cout<<"Stack :";
    for(int i{};i<= TOP;i++)
    {
        cout<<ARR[i];
    }
    cout<<'\n';
}
int main()
{
    push(6); printStack();
    push(4); printStack();
    push(2); printStack();
    push(1); printStack();

    return 0;
}