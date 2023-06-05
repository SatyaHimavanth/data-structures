#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int rear=-1,front=-1;

void enqueue(int);
void dequeue();
void display();

int main()
{
int choice,x;
	while(1)
	{
		printf("\n\nEnter choice:\n 1. Enqueue\n 2. Dequeue\n 3.Display\n 4.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter element x\t");
					scanf("%d",&x);
				   enqueue(x);
				   break;
			case 2:dequeue();
				   break;
			case 3: display();
					break;
			case 4:exit(0);
				   break;
			default: printf("Wrong choice:");
			        break;
		}
	}
}

void enqueue(int x)
{
	if(rear==N-1)
		printf("Overflow");
	else if (front == -1 && rear == -1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else {
		rear++;
		queue[rear]=x;
		}
}

void dequeue()
{
	if (front == -1 && rear == -1)
	{
		printf("Queue is empty");
    }	
    else if(front == rear)
	{
	   printf("Dequeued element is %d", queue[front]);
	   front=rear=-1;
	}
	else{
	  	printf("Dequeued element is %d", queue[front]);
	  	front++;
	}
	}
	
	void display()
	{
		int i;
		if (front == -1 && rear == -1)
				printf("Queue is empty");
    	for(i=front;i<=rear;i++)	
			printf("%d\t", queue[i]);
	}

