#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*first=NULL;

void insert_at_begin(int key)
 {   
    struct node *t;
    
 	if(first==NULL)
 	{
    	first=(struct node*)malloc(sizeof(struct node));
 	    first->data=key;
		first->next=NULL;	
	}
	else
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=key;
		t->next=first;
		first=t;
	}
 }
 
 void insert_at_end(int key)
 {
 	struct node *k,*tempo;
 	
 	
 	if(first==NULL)
 	{
 	  first=(struct node*)malloc(sizeof(struct node));
 	   first->data=key;
	   first->next=NULL;
	   tempo=first;
	}
	else
	{
		k=(struct node*)malloc(sizeof(struct node));
		k->data=key;
		k->next=NULL;
		tempo->next=k;
		tempo=tempo->next;
		
	}
 }
 
 void display(struct node *p)
 {
 	while(p!=NULL)
 	{
 		printf("%5d",p->data);
 		p=p->next;
	}
 }
 
 void display_menu()
 {
 	printf("\n ---------------------------------------------");
 	printf("\n 1:INSERT NODE AT BEGIN");
 	printf("\n 2:INSERT NODE AT END");
 	printf("\n 3:INSERT NODE AT BEFORE GIVEN DATA");
 	printf("\n 4:INSERT NODE AT DESIRED POSITION");
 	printf("\n 5:DISPLAY");
 	printf("\n 6:exit");
 	printf("\n------------------------------------------------");
 }
 
 int main()
 {
 	int choice, data;
 	
 	display_menu();
 	do
 	{
    	
 		
 		
 		printf("\n enter your choice:");
 		scanf("%d",&choice);
 	
 		
 		switch(choice)
 		{
 			case 1:printf("\n enter the data:");
 				  scanf("%d",&data);
 				  insert_at_begin(data);
 				  printf("\n data added successfully:");
 				  break;
 			case 2:printf("\n enter the data:");
 					scanf("%d",&data);
 					insert_at_end(data);
 					printf("\n data added successfully:");
 					break;
 		    case 5:display(first);
 		    	   break;
 		    case 6:exit(0);
 		    
 		    
 				  
		 }
 		
	 }while(choice!=6);
 	
 }