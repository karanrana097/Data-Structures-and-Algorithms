#include<stdio.h>

void zeroOne(int arr[10][10], int n)
{
  for(int i=0; i<n ; i++)
  {
    for(int j=0; j<n ; j++){
      if(i<j)
      arr[i][j]=1;
      else if(i>j)
      arr[i][j]=-1;
      else
      arr[i][j]=0;
    }
  }
}

void display(int arr[10][10], int n)
{
  for(int i=0; i<n ; i++)
  {
    for(int j=0; j<n ; j++){
    printf("%d ", arr[i][j]);
    }printf("\n");
  }
}

int main()
{
  int  n;
  printf("\nEnter the size of array::");
  scanf("%d",&n);
  
  int a[n][n];
  zeroOne(a,n);
  display(a,n);
}