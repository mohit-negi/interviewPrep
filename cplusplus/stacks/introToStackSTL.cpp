#include<iostream>
#include<vector>
//stack STL
#include<stack>

using namespace std;
//Implementation of stacks using template vector

template<typename T>
class satack{
    private:
        vector<T> list;
    public:
        void push(T data)
        {
            list.push_back(data);
        }
        bool isEmpty()
        {
            return (list.size()==0);
        }
        void pop()
        {
            if(!isEmpty())
            {
                list.pop_back();
            }
        }
        T top()
        {
            return (list[list.size()-1]);
        }
};
int main()
{
    satack<char> s;
    stack<int> s2;
    for(int i{70};i>=65;i--)
    {
        s.push(i);
        s2.push(i);
    }

    while(!s.isEmpty())
    {
        cout<<s2.top()<<" : "<<s.top()<<'\n';
        s2.pop();s.pop();
    };
    
    return 0;
}