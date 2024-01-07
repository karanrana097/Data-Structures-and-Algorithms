// Write a program to implement a linked stack
#include<bits/stdc++.h>
using namespace std;

typedef struct stack
{
    int data;
    struct stack *next;
}stacktype;

stacktype *top=NULL;

stacktype* push(stacktype *top,int val)
{
    stacktype *ptr;
    ptr=(stacktype*)malloc(sizeof(stacktype));
    ptr->data=val;
    if(top==NULL)
    {
        ptr->next=NULL;
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
    return top;
}

stacktype* pop(stacktype *top)
{
    stacktype *ptr;
    ptr=top;
    int val;
    if(top==NULL)
        cout<<"Stack Underflow ";
    else
    {
        val=top->data;
        top=top->next;
        free(ptr);
        cout<<"\n The value deleted from stack is : "<<val;
    }
    

    return top;
}

int peek(stacktype *top)
{
    if(top==NULL)
    {
        cout<<"Stack is Empty";
        return -1;
    }
    return top->data;
}

void display(stacktype *top)
{
    stacktype *ptr;
    ptr=top;
    if(top==NULL)
        cout<<"Stack is Empty\n";
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
}


int main()
{
    int val, option;
    do
    {
        cout<<"\n********MAIN MENU********";
        cout<<"\n 1. PUSH";
        cout<<"\n 2. POP";
        cout<<"\n 3. PEEK";
        cout<<"\n 4. DISPLAY";
        cout<<"\n 5. Any other Key to Exit\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"\nEnter the number to be pushed on stack : ";
            cin>>val;
            top=push(top,val);
            break;
        case 2:
            top=pop(top);
            break;
        case 3:
            val=peek(top);
            if(val!=-1)
                cout<<"\nValue stored at top of stack is : "<<val; 
            break;
        case 4:
            display(top);
            break;
        default:
            break;
        }

    } while (option!=5);
    
}
