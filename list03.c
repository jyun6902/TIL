#include <stdio.h>
#include <stdlib.h>
/*
 */

typedef struct _node
{
	int data;
	struct _node* next;
} NODE;

void insert_data (int data, NODE** head)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;

	temp->next = *head;
	*head = temp;
}

//s의 위치 다음에 데이터 노드를 삽입하는 함수
//head->끝 값->s->3->2->1->previous_값들
void insert_data2(int data, NODE* s)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;

	temp->next = s->next;
	s->next = temp;
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
	NODE* head=0;
	display(head);
	for (int i = 0 ; i < 7; i++)
	{
		insert_data(i+1,&head);
		display(head);
	}

	for (int i = 0 ; i < 7 ; i++)
	{
		insert_data2(i+1, head);
		display(head);
	}
}

