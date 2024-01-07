//Write a program to perform Push, Pop, Display and Peek operations on stack.
#include<bits/stdc++.h>
using namespace std;
#define MAX 5

int st[MAX], top=-1;

void push(int st[],int val)
{
    if(top==MAX-1)
        cout<<"Stack Overflow.\n";
    else
    {
        top++;
        st[top]=val;
    }
}

int pop(int st[])
{
    int val;
    if(top==-1)
    {
        cout<<"Stack Underflow \n";
        return -1;
    }
    else
    {
        val=st[top];
        top--;
        return val;
    }
}

int peek(int st[])
{
    if(top==-1)
    {
        cout<<"Stack is Empty";
        return -1;
    }
    return st[top];
}

void display(int st[])
{
    if(top == -1)
        cout<<"Stack is Empty";
    else
    {
        for(int i=top;i>=0;i--)
        {
        cout<<st[i]<<endl;
        }   
    }
}


int main()
{
    int val, option;
    do
    {
        cout<<"\n********MAIN MENU********";
        cout<<"\n1. PUSH";
        cout<<"\n2. POP";
        cout<<"\n3. PEEK";
        cout<<"\n4. DISPLAY";
        cout<<"\n5. Any other Key to Exit\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"\nEnter the number to be pushed on stack : ";
            cin>>val;
            push(st,val);
            break;
        case 2:
            val=pop(st);
            if(val != -1)
            cout<<"\n The value deleted from stack is : "<<val;
            break;
        case 3:
            val=peek(st);
            if(val!=-1)
                cout<<"\nValue stored at top of stack is : "<<val; 
            break;
        case 4:
            display(st);
            break;
        default:
            break;
        }

    } while (option!=5);
    
}
