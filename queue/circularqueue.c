// Implementation of circular queue
#include <stdio.h>  
# define max 3
int queue[max]; 
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front) //3%3=0 == 2
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        rear=(rear+1)%max;  // (3)%3 =0
        queue[rear]=element;    
    }  
}

void dequeue()  
{  
    if((front==-1) && (rear==-1)) 
    {  
        printf("\nQueue is underflow..");  
    }  
    else if(front==rear)  
    {  
       printf("\nThe dequeued element is %d", queue[front]);  
       front=-1;  
       rear=-1;  
    }   
    else  
    {  
        printf("\nThe dequeued element is %d", queue[front]);  
        front=(front+1)%max;
    }  
}


void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
        return;
    }
    printf("\nElements in a Queue are :"); 
    if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d,", queue[i]); 
        }
         
    }// 4  3 6 7 8 9
    else
    {
        for(int i=front;i<max;i++)
        {
            printf("%d,", queue[i]);
        }
        for(int i=0;i<=rear;i++)
        {  
            printf("%d,", queue[i]);  
        }  
    }  
}  
int main()  
{  
    int choice=1,x;   
    while(choice<4 && choice!=0)
    {  
        printf("\n Press 1: Insert an element ");  
        printf("\nPress 2: Delete an element ");  
        printf("\nPress 3: Display the element ");  
        printf("\nEnter your choice ");  
        scanf("%d", &choice);  
          
        switch(choice)  
        {  
              
            case 1:  
          
            printf("Enter the element which is to be inserted");  
            scanf("%d", &x);  
            enqueue(x);  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
        }
    }  
    return 0;  
}  
