#include<iostream>
#include<vector>

using namespace std;
//Implementation of stack using vector

class stack{
private:
        vector <int> list;
public:
//operations
    void push(int data)
    {
        list.push_back(data);
    }
    bool isEmpty()
    {
        return (list.size() == 0);
    }
    void pop()
    {
        if(!isEmpty())
        {
            list.pop_back();
        }
    }
    int top()
    {
        return list[list.size()-1];
    }
}; 

int main()
{
    stack s;
    for(int i{};i<5;i++)
    {
        s.push(i*i);
    }
    while(!s.isEmpty())
    {
        cout<<s.top()<<'\n';
        s.pop();    
    }

    return 0;
}