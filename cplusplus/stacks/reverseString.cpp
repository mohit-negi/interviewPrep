#include<iostream>
#include<stack>

using namespace std;
void transfer(stack<int>& s1,stack<int>& s2,int n)
{
    for(int i{};i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}
void reverseStack(stack<int>& s1)
{
    //initializing a helper stack
    stack<int> s2;
    //iterating through the stack s1 and iteratively pushing and popping 
    //until s1 is reversed
    int n = s1.size();
    for(int i{};i<n;i++)
    {
        int x = s1.top();
        s1.pop();
        //now transfering n-i-1 elements from s1 to s2

        transfer(s1,s2,n-i-1);
        //after that inserting x in s1
        s1.push(x);
        //then transfering n-i-1 elements back from s2 to s1
        transfer(s2,s1,n-i-1);
    }
}
void printStack(stack<int>& s)
{
    int n=s.size();
    for(int i{};i<n;i++)
    {
        cout<<s.top()<<'\n';
        s.pop();
    }
    cout<<'\n';
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    reverseStack(s);
    printStack(s);
    

    return 0;
}