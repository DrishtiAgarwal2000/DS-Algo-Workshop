#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

int que[MAXSIZE],front,rear;

int enqueue();
int dequeue();
int display();

int main()
{front=-1;
rear=-1;
int choice;
printf("LINEAR QUEUE OPERATIONS\n");
while(1)
{
    printf("-------------------------------------------\n");
    printf("         1  -->   enqueue\n");
    printf("         2  -->   Dequeue\n");
    printf("         3  -->   DISPLAY\n");
    printf("         4  -->   EXIT\n");
    printf("-------------------------------------------\n");
    printf("Enter Your Choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : enqueue();
                 break;
        case 2 : dequeue();
                 break;
        case 3 : display();
                 break;
        case 4 : exit(0);
                 break;
        default: printf("plz select correct option\n");
                 break;
    }
}
}

int enqueue()
{
    int num;
    if(rear==(MAXSIZE-1))
    {
          printf("Queue  is Overflow\n");

    }
    else 

    {   if(front==-1)
        {
            front=0;
        }
        
        printf("Enter the element to be INSERT\n");
        scanf("%d",&num);

        rear++;
        
        que[rear]=num;

    }


  
    return 0;
    
}

int dequeue()
{
    if(front==-1 || front==rear+1)
    {
        printf("queue is empty\n");
    }
    
    else
    {
        printf("removed element is %d",que[front]);
        front++;
    }
    return 0;

    
}
int display()
{   int i;
     if(front==-1 || front==rear+1)
    {
        printf("queue is empty\n");
    }
    
   
    else{
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",que[i]);
        }
    return 0;

    }

    
}