#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void print(Node *head)
{
    while(head != NULL)
    {
        printf("%i\n",head->data);
        head = head->next;
    }
}

void printval(Node *head)
{
    while(head != NULL)
    {
        printf("%i",head->data);
        head = head->next;
    }
}

Node* insertTail(Node *head,int data)
{
    Node *tmp, *headTmp;
    tmp = (Node*)malloc(sizeof(Node));
    tmp->data = data;
    headTmp = head;
    if(head == NULL)
        return tmp;
    else
    {
        while(headTmp->next != NULL)
        {
            headTmp = headTmp->next;
        }
        headTmp->next = tmp;
    }
    return head;
}

Node* insertHead(Node *head,int data)
{
	Node *tmp, *headTmp;
    tmp = (Node*)malloc(sizeof(Node));
    tmp->data = data;
    headTmp = head;
    if(head == NULL)
    {
        head = tmp;
    }
    else
    {
        tmp->next = head;
        head = tmp;
    }
    return head;
}

Node* insertNth(Node *head, int data, int position)
{
    Node *tmp, *actual;
    int j;
    tmp = (Node*)malloc(sizeof(Node));
    actual = head;
    tmp->data = data;
    tmp->next = NULL;

    if(head == NULL)
    {head = tmp;}

    for(j = 1; j < position; j++)
    {
        actual = actual->next;
    }
    if(position != 0)
    {
        tmp->next = actual->next;
        actual->next = tmp;
    }
    else
    {
        tmp->next = actual;
        actual->next = 0;
        head = tmp;
    }
    return head;
}

Node* deleteNode(Node *head, int position)
{
    Node *tmp, *deleted;
    int i;
    if(position == 0){
        tmp = head;
        head = head->next;
        free(tmp);
        return head;
    }

    position = position - 1;
    tmp = head;
    for(i = 1; i <= position; i++)
        {tmp = tmp->next;}
    deleted = tmp->next;
    tmp->next = tmp->next->next;
    free(deleted);
    return head;
}

Node* revertList(Node *head)
{
	Node *prev, *next;
	prev = 0;

	if(head == 0)
		return head;
	while(head->next != 0){
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
		next = head->next;
	}
	head->next = prev;
	return head;
}
