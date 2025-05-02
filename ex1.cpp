#include<iostream>
using namespace std;
class Stack
{
    int arr[5];
    int tos;
    public:
    Stack();
    void push(int);
    int pop();
    int peek();
    bool isEmpty();
};
Stack::Stack()
{
tos=-1;
}
void Stack::push(int x)
{
    if (tos==4)
    {
        cout<<"Stack Overflow!"<<endl;
        return;
    }
    ++tos;
    arr[tos]=x;
    cout<<"pushed"<<x<<endl;
    }
    int Stack::pop()
    {
        if (tos==-1)
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int x=arr[tos];
        tos--;
        return x;
        }
        int Stack::peek()
        {
            if (tos==-1)
            {
                cout<<"Stack is Underflow"<<endl;
                return -1;
            }
            bool Stack:: isEmpty()
            {
                if (tos==-1)
                {
                    return true;
                }
                else{
                    return false;
                }
                int main()
                {
                    Stack obj;
                    int x=10;
                    for (int i = 1; i < =6; i++)
                    {
                        obj.push(x);
                        x=x+10;
                    }
                    x=obj.peek();
                    cout<<"Top Element of Stack is "<<x<<endl;
                    for (int i = 0; i < 6; i++)
                    {
                        x=obj.pop();
                        if (x!=-1)
                        {
                            cout<<"Popped element"<<x<<endl;
                        }
                        return 0;
                    }
                    
                }
                
            }
        }
        

    }
}
}