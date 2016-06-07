#include <stdio.h>
#include <stdlib.h>
#include "doubleLinkedList.h"

void print(Node *head)
{
	Node *actual = head;
    do
    {
        printf("%c",head->data);
        head = head->next;
    }while(head != actual);
}

void printbool(Node *head){
	Node *actual = head;
    do
    {
        printf("%i",head->data);
        head = head->next;
    }while(head != actual);

}

Node* insertTail(Node *head,int data)
{
    Node *tmp;
    tmp = (Node*)malloc(sizeof(Node));
    tmp->data = data;
	tmp->next = tmp;
	tmp->prev = tmp;

    if(head == NULL)
        return tmp;
    else
    {
		tmp->prev = head->prev;
		tmp->next = head;
        head->prev->next  = tmp;
		head->prev = tmp;
    }
    return head;
}

Node* deleteTail(Node *head)
{
    Node *tmp, *deleted;

	if(head->prev == head){
        free(head);
		head = 0;
		printf("Lista vacia");
		return head;
    }
	tmp = head->prev;
	head->prev = tmp->prev;
	head->prev->prev->next = head;
	free(tmp);
    return head;
}

int isPalindrome(Node *head)
{
	Node *actual, *start;

	start = head;
	if(head == 0)
	{return 1;}

	actual = head->prev;
	do{
		if(actual->data != head->data)
		{return 0;}
		actual = actual->prev;
		head = head->next;
	}while( (head != actual) && (head->next != actual) );

	if(head->data == actual->data) { return 1; }
	else {return 0;}
}
