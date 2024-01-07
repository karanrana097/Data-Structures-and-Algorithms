//Write a program to implement Multiple Stack.
#include<bits/stdc++.h>
using namespace std;
#define MAX 20

int st[MAX], topA=-1, topB=MAX;

void pushA(int st[],int val)
{
    if(topA==topB-1)
        cout<<"StackA Overflow.\n";
    else
    {
        topA++;
        st[topA]=val;
    }
}

int popA(int st[])
{
    int val;
    if(topA==-1)
    {
        cout<<"StackA Underflow \n";
        return -1;
    }
    else
    {
        val=st[topA];
        topA--;
        return val;
    }
}

int peekA(int st[])
{
    if(topA==-1)
    {
        cout<<"StackA is Empty";
        return -1;
    }
    return st[topA];
}

void displayA(int st[])
{
    if(topA == -1)
        cout<<"StackA is Empty";
    else
    {
        for(int i=topA;i>=0;i--)
        {
        cout<<st[i]<<endl;
        }   
    }
}

void pushB(int st[],int val)
{
    if(topB-1==topA)
        cout<<"StackB Overflow.\n";
    else
    {
        topB--;
        st[topB]=val;
    }
}

int popB(int st[])
{
    int val;
    if(topB==MAX)
    {
        cout<<"StackB Underflow \n";
        return -1;
    }
    else
    {
        val=st[topB];
        topB++;
        return val;
    }
}

int peekB(int st[])
{
    if(topB==MAX)
    {
        cout<<"StackB is Empty";
        return -1;
    }
    return st[topB];
}

void displayB(int st[])
{
    if(topB == MAX)
        cout<<"StackB is Empty";
    else
    {
        for(int i=topB;i<MAX;i--)
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
        cout<<"\n1. PUSH A";
        cout<<"\n2. PUSH B";
        cout<<"\n3. POP A";
        cout<<"\n4. POP B";
        cout<<"\n5. PEEK A";
        cout<<"\n6. PEEK B";
        cout<<"\n7. DISPLAY A";
        cout<<"\n8. DISPLAY B";
        cout<<"\n9. Press 9 to Exit\n";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"\nEnter the number to be pushed on stackA : ";
            cin>>val;
            pushA(st,val);
            break;
        case 2:
            cout<<"\nEnter the number to be pushed on stackB : ";
            cin>>val;
            pushB(st,val);
            break;
        case 3:
            val=popA(st);
            if(val != -1)
            cout<<"\n The value deleted from stack is : "<<val;
            break;
        case 4:
            val=popB(st);
            if(val != -1)
            cout<<"\n The value deleted from stack is : "<<val;
            break;
        case 5:
            val=peekA(st);
            if(val!=-1)
                cout<<"\nValue stored at top of stack is : "<<val; 
            break;
        case 6:
            val=peekB(st);
            if(val!=-1)
                cout<<"\nValue stored at top of stack is : "<<val; 
            break;
        case 7:
            displayA(st);
            break;
        case 8:
            displayB(st);
            break;
        default:
            break;
        }

    } while (option!=9);
    
}
