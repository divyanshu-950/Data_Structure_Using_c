#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}nod;
nod* head;
void insert_beg();
void insert_end();
void insert_pos();
void del_beg();
void del_end();
void del_pos();
void view();
void del_all();
int main()
{
	int n;
	while(1){
	printf("\t\tWelcome To Circular List\n");
	printf("\t============================================\n");
	printf("1->Insert At Begining\n2->Insert At End\n3->Insert at Certain Position\n4->View List\n5->Delete From Begining\n6->Delete From End\n7->Delete From Certain position\n8->Delete All\n9->Exit List\n");
	printf("X--x--x--x--x--x--x--x--x--x--x--x--x--x--x--x--x--x--X\n\n");
	printf("\nEnter Your Choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		   insert_beg();
		   break;
		case 4:
		   view();
		   break;
		case 9:
			printf("\n\t\tPess Any Key To Exit List");
			printf("\n\t-------------------------------------");
		    exit(0);
		default:
			printf("Wrong choice\nPress Enter To Try Again");
		    break;     
	}
}
}
void insert_beg()
{
	char ch;
	do{
		nod* ptr=malloc(sizeof(nod));
		ptr->next=head;
		printf("Enter Data: ");
		scanf("%d",&ptr->data);
		if(head==NULL)
		head=ptr;
		else{
			ptr->next=head;
			head=ptr;
			
		}
		printf("Enter y To Insert Again: ");
		scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
}
void view()
{
	nod* ptr=head;
	if(head==NULL)
	printf("List Is Empty");
	else{
		while(ptr!=head)
		printf("%d",ptr->data);
		ptr=ptr->next;
		
	}
}
