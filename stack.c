#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

int push();
int pop();
int display();

int main()
{s.top=-1;
int choice;
printf("STACK OPERATIONS\n");
while(1)
{
    printf("-------------------------------------------\n");
    printf("         1  -->   PUSH\n");
    printf("         2  -->   POP\n");
    printf("         3  -->   DISPLAY\n");
    printf("         4  -->   EXIT\n");
    printf("-------------------------------------------\n");
    printf("Enter Your Choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : push();
                 break;
        case 2 : pop();
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

int push()
{
    int num;
    if(s.top==(MAXSIZE-1))
        {
            printf("Stack is Overflow\n");

        }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d",&num);
        s.top++;
        s.stk[s.top]=num;
    }
    return 0;
    
}

int pop()
{ 
    if(s.top==-1)
    {
        printf("stack is empty\n");

    }
    else
    {   
        printf("poped element is =%d\n",s.stk[s.top]);
        
        s.top=s.top-1;
        
    }
     return 0;
    
}



int display()
{int i;
    if(s.top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        for(i=s.top;i>=0;i--)
        {
            printf("%d\n",s.stk[i]);
            
        }
    }
     return 0;

}

