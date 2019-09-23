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
printf("CIRCULAR QUEUE OPERATIONS\n");
while(1)
{
    printf("-------------------------------------------\n");
    printf("         1  -->   ENqueue\n");
    printf("         2  -->   Dequeue\n");
    printf("         3  -->   DISPLAY\n");
    printf("         4  -->   EXIT\n");
    printf("-------------------------------------------\n");
    printf("Enter Your Choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : 
                 enqueue();
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
{   int num;
    if((front == 0 && rear == MAXSIZE-1) || (front == rear+1))
	{
		printf("Queue Overflow \n");
		return 0;
	}
    printf("ENTER the element");
    scanf("%d",&num);
	if (front == -1)  /*If queue is empty */
	{
		front = 0;
		rear = 0;
	}
	else
	{
		if(rear == MAXSIZE-1)	/*rear is at last position of queue */
			rear = 0;
		else
			rear = rear+1;
	}
	que[rear] = num ;

    

}

int dequeue()
{
    if(front==-1 )
    {
        printf("queue is empty\n");
        return 0;
    }
    printf("Element deleted from queue is : %d\n",que[front]);
    
    if(front==rear){
        
        front=-1;
        rear=-1;

    }
    else
    {
        if(front==MAXSIZE-1)
        {
            front=0;
        }
        else
        {
            front=front+1;
        }
        
    }
    
}

int display()
{   int front_pos = front,rear_pos = rear;
	if(front_pos == -1)
	{
		printf("Queue is empty\n");
        return 0;
		
	}
    printf("Queue elements :\n");
	
	if( front_pos <= rear_pos )
    {   
		while(front_pos <= rear_pos)
		{
			printf("%d ",que[front_pos]);
			front_pos++;
		}
    } 
	else
	{
		while(front_pos <= MAXSIZE-1)
		{
			printf("%d ",que[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{
			printf("%d ",que[front_pos]);
			front_pos++;
		}
	}
	printf("\n");

    

    
}