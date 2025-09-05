#include<stdio.h>
#include<stdlib.h>

 struct node
 {
 	int data;
 	struct node *next;
 }*first=NULL;
 
 void create_LL(int A[],int n)
 {
 	struct node *temp,*nn;
 	first=(struct node*)malloc(sizeof(struct node));
 	first->data=A[0];
 	first->next=NULL;
 	temp=first;
 	
 	for(int i=1;i<n;i++)
 	{
 		nn=(struct node*)malloc(sizeof(struct node));
 		nn->data=A[i];
 		nn->data=NULL;
 		temp->next=nn;
 		temp=nn;
 		
	 }
 }
 
 int count(struct node *p)
 {
 	int count=0;
 	while(p!=NULL)
 	{
 		count++;
 		p=p->next;
	 }
	 return count;
 }
 
 int main()
 {
 	int A[]={5,3,6,2,8};
 	create_LL(A,5);
 	printf("No of node:%d",count(first));
 	return 0;
 }