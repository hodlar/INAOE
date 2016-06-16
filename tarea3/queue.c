#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* queue_new(){
	Queue *tmp;
	tmp = malloc(sizeof(Queue));
	tmp->begin = 0;
}

void queue_print(Queue *queue)
{
	Node *head = queue->begin;
    while(head)
    {
        printf("%i\n",head->data);
        head = head->next;
    }
}

Queue* queue_push(Queue *queue, int data)
{
	Node *tmp;
	tmp = new_node(data);

	tmp->next = queue->begin;
	queue->begin = tmp;
    return queue;
}

int queue_pop(Queue *queue)
{
    Node *tmp;
	int j, position, deletedValue;

    if(!queue->begin){
		return 0;
	}
	else if(queue->begin->next != 0){
		tmp = queue->begin;
		while(tmp->next->next != 0){
			tmp = tmp->next;
		}
		deletedValue = tmp->next->data;
		free(tmp->next);
		tmp->next = 0;
	}
	else{
		deletedValue = queue->begin->data;
		free(queue->begin);
		queue->begin = 0;
	}
    return deletedValue;
}

int queue_delete(Queue *queue){
	if(queue){
		free(queue);
		return 1;
	}
	else{
		printf("This shouldn't have happened, queue was null");
		return 0;
	}
}
