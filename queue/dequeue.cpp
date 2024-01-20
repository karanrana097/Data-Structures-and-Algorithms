// Write a program to implement input and output restricted deques
#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int deq[MAX];
int l = -1, r = -1;

void insert_right()
{
    int val;
    cout<<"\nEnter the value to be added : ";
    cin>>val;
    if((l==0 && r==MAX-1) || (l == r+1))
    {
        cout<<"\nOverflow ";
        return;
    }
    if(l==-1)
    {
        l=0;
        r=0;
    }
    else
    {
        if(r=MAX-1)
            r=0;
        else
            r = r+1;
    }
    deq[r]=val;
}

void insert_left()
{
    int val;
    cout<<"\nEnter the value to be added ";
    cin>>val;
     if((l==0 && r==MAX-1) || (l == r+1))
    {
        cout<<"\nOverflow ";
        return;
    }
    if(l==-1)
    {
        l=0;
        r=0;
    }
    else
    {
        if(l=0)
            l=MAX-1;
        else
            l = l+1;
    }
    deq[l]=val;
}

void delete_left()
{
    if(l==-1)
    {
        cout<<"\nUnderflow ";
        return ;
    }
    cout<<"\nThe deleted element is : "<<deq[l];
    if(l==r)
    {
        l = -1;
        r = -1;
    }
    else
    {
        if(l==MAX-1)
            l=0;
        else
            l=l+1;
    }
}

void delete_right()
{
    if(l==-1)
    {
        cout<<"\nUnderflow ";
        return ;
    }
    cout<<"\nThe deleted element is : "<<deq[l];
    if(l==r)
    {
        l = -1;
        r = -1;
    }
    else
    {
        if(r==0)
            r=MAX-1;
        else
            r=r-1;
    }   
}

void display()
{
    int front=l,rear=r;
    if(front==-1)
    {
        cout<<"\nQueue is Empty";
        return;
    }
    cout<<"\nElements of the queue are : ";
    if(front<=rear)
    {
        while(front<=rear)
        {
            cout<<deq[front]<<" ";
            front++;
        }
    }
    else
    {
        while (front<=MAX-1)   
        {
            cout<<deq[front]<<" ";
            front++;
        }
        front=0;
        while(front<=rear)
        {   
            cout<<deq[front]<<" ";
            front++;
        }
    }
    cout<<endl;
}

void input_deque()
{
    int option;
    do
    {
        cout<<"\nINPUT RESTRICTED DEQUE";
        cout<<"\n1. Insert at right ";
        cout<<"\n2. Delete fron left ";
        cout<<"\n3. Delete from right ";
        cout<<"\n4. Display";
        cout<<"\nEnter your option : ";
        switch (option)
        {
        case 1:
            insert_right();
            break;
        case 2:
            delete_left();
            break();
        case 3:
            delete_right();
            break();
        case 4:
            display();
            break();
        default:
            break;
        }
    }while(option!=5);
}

void output_deque()
{
    int option;
    do
    {
        cout<<"\nOUTPUT RESTRICTED DEQUE";
        cout<<"\n1. Insert at right ";
        cout<<"\n2. Insert at left ";
        cout<<"\n3. Delete from left ";
        cout<<"\n4. Display";
        cout<<"\nEnter your option : ";
        switch (option)
        {
        case 1:
            insert_right();
            break;
        case 2:
            insert_left();
            break();
        case 3:
            delete_left();
            break();
        case 4:
            display();
            break();
        default:
            break;
        }
    }while(option!=5);
}

int main()
{
    int option;
    cout<<"\n****MAIN MENU****";
    cout<<"\n1. Input Restricted Deque ";
    cout<<"\n2. Output Restricted Deque ";
    cout<<"\nEnter your option : ";
    cin>>option;
    switch (option)
    {
        case 1:
            input_deque();
            break;
        case 2:
            output_deque();
    }
    return 0;
    
}
