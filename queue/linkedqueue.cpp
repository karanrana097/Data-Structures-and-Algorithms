//Write a program to implement linked queue.
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}nodetype;
typedef struct queuee
{
    struct node *front;
    struct node *rear;
}Queue;

Queue *q;

void create_queue(Queue *q)
{
    q->rear=NULL;
    q->front=NULL;
}

void insert()
{
    int n;
    cout<<"Enter the number to be inserted in the queue : ";
    cin>>n;
    nodetype *ptr;
    ptr=(nodetype*)malloc(sizeof(nodetype));
    ptr->data=n;
    if(q->front==NULL)
    {
        q->front=ptr;
        q->rear=ptr;
        q->front->next=q->rear->next=NULL;
    }
    else
    {
        q->rear->next=ptr;
        q->rear=ptr;
        q->rear->next=NULL;
    }
}

void display()
{
    nodetype *ptr;
    ptr=q->front;
    if(ptr==NULL)
    {
        cout<<"Empty \n";
    }
    else
    {
        while(ptr!=q->rear)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<ptr->data<<" ";
    }
}

void deletequeue()
{
    nodetype *ptr;
    ptr=q->front;
    if(ptr==NULL)
    {
        cout<<"Underflow\n";
    }
    else
    {
        q->front=q->front->next;
        cout<<"\n The value deleted  is : "<<ptr->data;
        free(ptr);
    }
}

void peek()
{
    if(q->front==NULL)
    {
        cout<<"Empty \n";
    }
    else   
        cout<<"\nThe first value in queue is : "<<q->front->data; 
}


int main() {
    q = new Queue;
    create_queue(q);

    int option;
    do {
        cout << "\n********MAIN MENU********";
        cout << "\n1. ENQUEUE";
        cout << "\n2. DEQUEUE";
        cout << "\n3. PEEK";
        cout << "\n4. DISPLAY";
        cout << "\n5. Any other Key to Exit\n";
        cin >> option;

        switch (option) {
            case 1:
                insert();
                break;
            case 2:
                deletequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                break;
        }

    } while (option != 5);

    delete q;  // Free the allocated memory for the queue
    return 0;
}
