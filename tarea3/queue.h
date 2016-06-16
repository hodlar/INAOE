#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

typedef struct Queue Queue;

struct Queue {
	Node *begin;
};

Queue* queue_new();
void queue_print(Queue *queue);
Queue* queue_push(Queue *queue, int data);
int queue_pop(Queue *queue);
int queue_delete(Queue *queue);

#endif /*QUEUE_H*/
