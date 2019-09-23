#include<stdio.h>

struct rectangle 
{
    int length;
    int breadth;

};

int main()
{
struct rectangle r={20,19};
struct rectangle *p=&r;

printf("%d\n",(*p).length);
printf("%d\n",p->breadth);
}