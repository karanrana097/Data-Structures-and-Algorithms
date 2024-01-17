// Write a program to implent linear queue
#include<bits/stdc++.h>
using namespace std;
#define MAX 3
int arr[MAX];
int front = -1, rear = -1;

void insert()
{
    int n;
    cout<<"Enter the number to be inserted in the queue : ";
    cin>>n;
    if(rear==MAX-1)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    else if(front==-1 && rear==-1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    arr[rear]=n;
}

int deletequeue()
{
    int val;
    if(front==-1 || front>rear)
    {
        cout<<"Underfolow"<<endl;
        return -1;
    }
    else
    {
        val=arr[front];
        front++;
        if(front>rear)
        {
            front = rear = -1;
        }
        return val;
    }
}

int peek()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue is Empty "<<endl;
        return -1;
    }
    return arr[front];
}

void display()
{
    int i;
    if(front==-1||front>rear)
    {
       cout<<"Queue is Empty "<<endl; 
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            cout<<arr[i];
        }
    }
}


int main()
{
    int val, option;
    do
    {
        cout<<"\n********MAIN MENU********";
        cout<<"\n1. INSERT";
        cout<<"\n2. DELETE";
        cout<<"\n3. PEEK";
        cout<<"\n4. DISPLAY";
        cout<<"\n5. Any other Key to Exit\n";
        cin>>option;
        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            val=deletequeue();
            if(val != -1)
            cout<<"\n The value deleted  is : "<<val;
            break;
        case 3:
            val=peek();
            if(val!=-1)
                cout<<"\nThe first value in queue is : "<<val; 
            break;
        case 4:
            display();
            break;
        default:
            break;
        }

    } while (option!=5);
    
}
