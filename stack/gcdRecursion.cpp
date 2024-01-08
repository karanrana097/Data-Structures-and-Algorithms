//Write a program to calculate GCD of two numbers using a recursive funtion.
#include<bits/stdc++.h>
using namespace std;

int GCD(int x,int y)
{
    int rem = x%y;
    if(rem == 0)
        return y;
    else
        return(GCD(y,rem));
}


int main()
{
    int x,y;
    cin>>x>>y;
    int ans=GCD(x,y);
    cout<<"Greatest common divisisor of  "<<x<<","<<y<<" is "<<ans;
    return 0;
}
