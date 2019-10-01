#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
}Node;

struct Node *head;

void insert_beg(int x, int n) {
int i;
struct Node *temp = (struct Node*)malloc(sizeof(struct Node)); temp->data = x;
temp->next = NULL;
temp->prev = NULL;
if(n==1) {
if(head!=NULL){ temp->next = head; head->prev = temp; }
head = temp;
return; }
struct Node *temp1 = head; for(i=0;i<n-2;i++)
temp1 = temp1->next; //n+1 node
//nth node
temp->prev = temp1; temp->next = temp1->next; temp1->next->prev = temp; temp1->next = temp;
}
void print() {
struct Node *temp = head;
 printf("\n FORWARD LIST IS \n"); while(temp!=NULL)
{
printf("%d", temp->data);
temp = temp->next; }
printf("\n"); }
void reverse(){
struct Node *temp = head; if(temp==NULL)
return; while(temp->next!=NULL) {
temp=temp->next; }
printf("\n REVERSE LIST IS \n"); while(temp!=NULL)
{
printf("%d", temp->data);
temp = temp->prev; }
printf("\n"); }
void rem(int n) {
struct Node *temp3 = head; struct Node *store_next; struct Node *store_prev;
if(n==1){
head = head->next; head->prev=NULL; free(temp3);
}
int i; for(i=0;i<n-2;i++)
temp3 = temp3->next;
struct Node *temp4 = temp3->next; store_next = temp4->next; store_prev = temp4->prev;
store_next->prev = store_prev; store_prev->next = store_next;
free(temp4);

}
int main() {
int n,x,a,ch,z,i;
head = NULL;
printf("enter the total number of elements "); scanf("%d",&n);
while(ch!=4){
printf("\n\n1.Insert \n\n2.Remove \n\n3.Print\n\n4.Exit\n\n"); printf("\n enter your choice \n");
scanf("%d", &ch);
switch(ch) {
case 1:
for(i=0;i<n;i++) {
printf("enter the data "); scanf("%d", &x); printf("enter the position "); scanf("%d", &a); insert_beg(x,a);
} break;
case 2:
printf("\n enter the position from where data has to be removed \n"); scanf("%d", &z);
rem(z);
break;
case 3: print();
break;
default: printf("Exit");
break;
} }
return 0; }
