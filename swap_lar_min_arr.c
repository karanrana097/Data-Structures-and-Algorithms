#include<stdio.h>
void create_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
} 

void display_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
} 

int min_index(int arr[],int n)
{
    int m=arr[0];
    int pos=0;
    for(int i=0;i<n;i++)
    {
        
        if(m>arr[i])
        {
            m=arr[i];
            pos = i;
        }
    }
    return pos;
}

int lar_index(int arr[],int n)
{
    int l=arr[0];
    int pos=0;
    for(int i=0;i<n;i++)
    {
        
        if(l<arr[i])
        {
            l=arr[i];
            pos = i;
        }
    }
    return pos;
}

void swap(int arr[],int n)
{
    int  pos_min= min_index(arr,n);
    int pos_lar=lar_index(arr,n);
    int temp= arr[pos_min];
    arr[pos_min]=arr[pos_lar];
    arr[pos_lar]=temp;
}




int main()
{
    int arr[50];
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    create_array(arr,n);
    swap(arr,n);
    display_array(arr,n);

}