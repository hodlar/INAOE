#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void printQueue(Queue *queue)
{
	Node *head = queue->begin;
    while(head)
    {
        printf("%i\n",head->data);
        head = head->next;
    }
}

Queue* enQueue(Queue *queue, int data)
{
	Node *tmp;
	tmp = new_node(data);

    if(!queue)
    {
		queue = malloc(sizeof(queue));
		queue->count = 1;
        queue->begin = tmp;
		queue->end = tmp;
    }
    else
    {
		tmp->next = queue->begin;
		queue->begin = tmp;
        queue->count++;
    }
    return queue;
}

int deQueue(Queue **queueptr)
{
    Node *deleted;
	Queue *queue;
	int j, position, deletedValue;

	queue = *queueptr;
    if(!queue || !queue->begin){
		return 0;
	}
	else if(queue->count > 1){
		position = queue->count;
		deleted = queue->begin;

		for(j = 2; j < queue->count; j++){
			deleted = deleted->next;
		}
		queue->end = deleted;
		queue->count--;
		deletedValue = deleted->next->data;
		free(deleted->next);
	}
	else{
		deletedValue = queue->end->data;
		free(queue->end);
		free(queue);
		queue = 0;
	}
	*queueptr = queue;
    return deletedValue;
}
