#include <stdio.h>
#include <stdlib.h>
/*
 *문제점
 *head가 전역변수 ->프로그램 내에서 오직 한개의 리스트만 존재할 수 있다.
 *해결방안
 *전역 변수x ->함수 인자로 처리
 */
typedef struct _node
{
	int data;
	struct _node* next;
}NODE;

NODE* head;

void insert_data(int data)
{
	NODE* temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;

	temp->next = head;
	head = temp;
}

void display()
{
	NODE* temp;
	system("clear");
	printf("head");
	for (temp = head ; temp ; temp=temp->next)
		printf("-> [%d]", temp->data);
	putchar('\n');
	getchar();
}


int main()
{
	display();
	for (int i = 0 ; i< 7 ;i++)
	{
		insert_data(i);
		display();
	}
}

