#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;



int iab();
int transverse();
int dab();
int  ial();
int  iaw();

int main()
{

int choice;
printf("LINEAR QUEUE OPERATIONS\n");
while(1)
{
    printf("-------------------------------------------\n");
    printf("         1  -->   Insert at beginning\n");
    printf("         2  -->   Delete at beginning\n");
    printf("         3  -->   transverse \n");
    printf("         4  -->   Insert at last\n");
    printf("         5  -->   Insert anywhere\n");
    printf("         6  -->   EXIT\n");
    printf("-------------------------------------------\n");
    printf("Enter Your Choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : iab();
                 break;
        case 2 : dab();
                 break;
        case 3 : transverse();
                 break;
        case 4 : ial();
                 break;
        case 5:  iaw();
                break;
        case 6 : exit(0);
                 break;
        default: printf("plz select correct option\n");
                 break;
    }
}
}

int iab()
{   int n;
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number which you want to enter in link list");
    scanf("%d",&n);

   if(start==NULL)
   {
       start=t;
       start->data=n;
       start->next=NULL;
       return 0 ;
    }
    
   t->next=start;
   t->data=n;
   start=t;
   return 0;
    
}

int dab()
{
    struct node *temp;
    
    if(start==NULL)
    {
        printf("link list is already empty");
        return 0;

    }
    
    int n=start->data;
    temp=start->next;
    free(start);
    printf("the deleted element is%d",n);
    start=temp;
    return 0;
    
}

int transverse()
{
    struct node *a;
   
   a = start;
   
   if (a == NULL)
    {
      printf("Linked list is empty.\n");
      return 0;
    }
   
  
   
   while (a != NULL)
    {
      printf("%d\n", a->data);
      a = a->next;
   }
   return 0;
   
}
int ial()
{   int n;
    struct node *t,*temp;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number which you want to enter in link list");
    scanf("%d",&n);
   

    if(start==NULL)
   {
       start=t;
       start->data=n;
       start->next=NULL;
       return 0 ;
    }
     temp=start;
    while(temp->next!= NULL)
    { 
        temp=temp->next;

    }
    t->data=n;

    temp->next=t;
    t->next=NULL;
    
    
return 0;

}
int iaw ()
{   int n,s;
    struct node *t,*temp,*a;
    temp=start;
    t=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number after which you want to insert new node");
    scanf("%d",&n);

    printf("Enter the number which you want to enter in link list");
    scanf("%d",&s);

    

    while(temp->data!= n)
    { 
        temp=temp->next;
        if(temp==NULL)
        {
            printf("there is no such element in linked list you had entered\n");
            return 0;
        }


    }
    t->data=s;
    a=t;
    t->next=temp->next;
    temp->next=a;
    
    
    printf("node successfully inserted \n");

    
    return 0;
}
