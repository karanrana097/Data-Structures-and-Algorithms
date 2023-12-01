#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

struct node* input(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to exit :\n");
    printf("Enter your no :");
    scanf("%d",&num);
    while(num!=-1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new_node;
        }
        printf("Enter your no :");
        scanf("%d",&num);
    }
    return start;
}

void display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *start=NULL;
    
    // int *ptr;
    // ptr=NULL;
    
    
    printf("Input :\n");
    start=input(start);
    printf("Output :\n");
    display(start);

    return 0;
}