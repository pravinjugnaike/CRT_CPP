#include<iostream>
using namespace std;

class Stack
{
    private:
        int size;
        int *arr;
        int top;

    public: 
        Stack(int s) //Comstructor
        {
            size = 5; // Size of stack
            arr = new int[size];
            top = -1;
        }
        // This method/ function check stack is empty or not
        bool isEmpty()
        {
            return top == -1;
        }
        // this function checks zstack is full or not
        bool isFull()
        {
            return top == size-1;
        }
        //
        void Push(int value)
        {
            if (isFull()) //if the condition is true then 
            {
                cout<<" Stack is Full"<<endl;
                return ;
            }
            arr[++top] = value;
            cout<<" Element Pushed: "<<arr[top]<<endl;
        }
        void pop()
        {
            if (isEmpty())
            {
            cout << "Stack is Empty" << endl;
            return;
            }
            cout << "Element Popped: " << arr[top--] << endl;
        }
        void peek()
        {
            if(isEmpty())
            {
                cout<<"stack is empty"<<endl;
                return;
            }
            cout<<"top value ="<<arr[top]<<endl;
        }
        void display()
        {
            if(isEmpty())
            {
                cout<<" Stack is empty\n"<<endl;
                return ;
            }
            cout<<"Stack Element"<<endl;
            for(int i=0; i<=top; i++)
            {
                cout<<"[ " <<arr[i]<< " ]"<<endl;
            }
        }
};

int main()
{
    Stack st(5);// size of array/stack
    cout<<"Stack has created with capacity of 5"<<endl;
    
    while(true)
    {
        int ch;
        cout<<"1. Push"<<endl; //Directly removes element
        cout<<"2. Pop"<<endl;
        cout<<"3. Display Stack"<<endl;
        cout<<"4. peek"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        if(ch == 1)
            {
                int val;
                cout<<"Enter the value to push in stack"<<endl;
                cin>>val;
                st.Push(val);
            }
            else if(ch == 2)
            {
                st.pop();
            }
            else if(ch == 3)
            {
                st.display();
            }
            else if(ch == 4)
            {
                st.peek();
            }
            else
            {
                break;
            }
    }
    return 0;
}