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

Node* enqueue(Queue *queue,int data)
{
    Node *tmp;
    tmp = (Node*)malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = 0;
    queue->end->next = tmp;
    queue->end = tmp;
 }

Queue* dequeue(Queue *queue)
{
    Node *tmp;
    tmp = queue->begin;
    if(!tmp)
        return 0;
    if(queue->begin == queue->end)
        return 0;

    while(tmp->next != queue->end){
        tmp = tmp->next;
    }
    queue->end = tmp;
}
