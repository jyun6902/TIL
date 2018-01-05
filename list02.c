#include <stdio.h>
#include <stdlib.h>
/*
 *1. 문제점 : 한쪽으로만 삽입 가능
 *2. 해결방법? 끝에서도 삽입할 수 있도록 하기
 */

typedef struct _node
{
	int data;
	struct _node*next;
} NODE;

void insert_data (int data, NODE** head)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;

	temp->next = *head;
	*head = temp;
}

void display(NODE* head)
{
	NODE *temp;
	system("clear");
	printf("head");
	for (temp = head ; temp ; temp=temp->next)
		printf("->[%d]", temp->data);
	putchar('\n');
	getchar();
}

int main()
{
	NODE** head=0;
	display(head);
	for (int i = 0 ; i < 7; i++)
	{
		insert_data(i+1,&head);
		display(head);
	}
}

