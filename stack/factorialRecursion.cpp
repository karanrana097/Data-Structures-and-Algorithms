//Write a program to calculate factorial of a given number.
#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==1)
        return 1;
    else   
        return n*factorial(n-1);
}


int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans;
    return 0;
}
