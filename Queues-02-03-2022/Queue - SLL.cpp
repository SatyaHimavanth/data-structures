#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*newnode,*temp;
  struct node* front=NULL;
  struct node* rear=NULL;
  
void enqueue();
void display();
void dequeue();

int main()
{
int choice;
	while(1)
	{
		printf("Enter choice:\n 1. Enqueue\n 2.Dequeue\n 3. Display\n 4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();
				   break;
			case 2: dequeue();
					break;
			case 3:display();
				   break;
			case 4:exit(0);
				   break;
			default: printf("Wrong choice:");
			        break;
		}
	}
}

void enqueue()
{
	    int value;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter value of a node\n");
		scanf("%d",&value);
		newnode->data=value;
		newnode->next=NULL;
		
		if(front==NULL&& rear==NULL)
		{
			front=newnode;
			rear=newnode;
		}
		
		else{
			rear->next=newnode;
			rear=newnode;
		}
		
		
}

void dequeue()
{
	if(front == NULL && rear==NULL)
	printf("Queue is Empty");
	else	
	{
	temp=front;
	printf("Dequeued Element is%d\n",front->data);
	front=front->next;
	temp->next=NULL;
	free(temp);
    }
}


void display()
{
	temp=front;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
