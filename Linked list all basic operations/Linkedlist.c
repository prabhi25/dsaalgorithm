#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node*START=NULL;
struct node *createNode()
{
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	return(n);
}
void insertNode()
{
	struct node *temp,*t;
	temp=createNode();
	printf("\nEnter any number:");
	scanf("%d",temp->info);
	temp->link=NULL;
	if(START==NULL)
	START = temp;
	else
	{
		t=START;
		while(t->link=NULL)
		{
			t=t->link;
			t->link=temp;
		}
	}
}

void deleteNode()
{
	struct node *r;
	if(START==NULL)
		printf("\nThe list is empty");
		r=START;
		START=START->link;
		free(r);
}
void viewlist()
{
	struct node *t;
	if(START==NULL)
	printf("\nList is empty");
	else
	{
		t=START;
		while(t!=NULL)
		{
			printf("%d",t->info);
			t=t->link;
		}
	}
}
int menu()
{
	int ch;
	printf("\n1.Add value to the list:\n");
	printf("\n2.Delete value to the list:\n");
	printf("\n3.View list:");
	printf("\n4.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	return(ch);
}
main()
{
	while(1)
	{
	
		
		switch(menu())
		{
			case 1:insertNode();
				break;
				case 2:deleteNode();
					break;
					case 3:viewlist();
						break;
						case 4:exit(0);
						default:printf("\nInvalid choice");
							
							
		}
	}
	return 0;
}
