#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
void display(struct node *start);
void main()
{
	struct node *start;
	start=NULL;
	start=create_list(start);
	display(start);
}
struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("enter no. of nodes\n");
	scanf("%d",&n);
	if(n==0)
	return start;
	else
	{
	 printf("enter first element\n");
	 scanf("%d",&data);
	 start=addatbeg(start,data);
	 for(i=2;i<=n;i++)
	 {
	  printf("enter element no %d - \n",i);
	  scanf("%d",&data);
	  start=addatend(start,data);
	 }
	}
	return start;
}
struct node *addatbeg(struct node *start,int data)
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	new->info=data;
	new->link=NULL;
	return start;
}
struct node *addatend(struct node *start,int data)
{
	struct node *new,*t;
	new=(struct node *)malloc(sizeof(struct node));
	new->info=data;
	t=start;
	while(t->link!=NULL)
	 {
	  t=t->link;
	 }
	t->link=new;
	new->link=NULL;
	return start;
}
void display(struct node *start)
{
	struct node *t;
	t=start;
	while(t!=NULL)
	{
	 printf("%d\n",t->info);
	 t=t->link;
	}
}
