#include<stdio.h>
#include<stdlib.h>
int stack[100],choice ,n ,x,top=-1,i;
void push(void);
 void  pop(void);
 void  display(void);

int main()
{
printf("Enter the size of stack[MAX=100]");
scanf("%d",&n); 
printf("Stack operationusing array");
printf("\t----------------");
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
 do
 {
	printf("Enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

			push();
			break;

		case 2:

			pop();
			break;

		case 3:

			display();
			break;
		case 4:

			printf("Exit point");
			exit(0);

		default:
			printf("enter a valid choice");
	}
}while(1);
} 
void push()
{
	if (top >=n-1)
 		printf("Stack is full");
	else
	{
		printf("Enter a value to be pushed:");
		scanf("%d",&x);
 		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
		printf("Stack is empty");

	else
	{
		printf("the popped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if (top==-1)
	{
		printf("stack is empty ");
	}
	else
	{
		for(i=n-1;i>=0;i--)
		{	
			printf("%d",stack[i]);
		}
	}
}

