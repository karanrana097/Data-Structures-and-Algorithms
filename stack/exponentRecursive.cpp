//Write a program to calculate GCD of two numbers using a recursive funtion.
#include<bits/stdc++.h>
using namespace std;

int exponent(int x,int y)
{
    if(y==0)
        return 1;
    else  
        return x*exponent(x,y-1);
}


int main()
{
    int x,y;
    cin>>x>>y;
    int ans=exponent(x,y);
    cout<<x<<" raised to the power "<<y<<" is "<<ans;
    return 0;
}
