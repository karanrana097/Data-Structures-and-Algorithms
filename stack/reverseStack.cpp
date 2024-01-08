//Write a program to reverse a list of given numbers using stack.
#include<bits/stdc++.h>
using namespace std;
#define MAX 20

int st[MAX], top=-1;

void push(int st[],int val)
{
    top++;
    st[top]=val;
}

int pop(int st[])
{
    int val;
    val=st[top];
    top--;
    return val;
}



int main()
{
    int val,n;
    int arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr[i]=val;
        push(st,val);
    }
    for(int i=0;i<n;i++)
    {
        val=pop(st);
        arr[i]=val;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
}
