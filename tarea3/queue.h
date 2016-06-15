#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

typedef struct Queue Queue;

struct Queue {
	Node *begin;
	Node *end;
	int count;
};

void printQueue(Queue *queue);
Queue* enQueue(Queue *queue, int data);
int deQueue(Queue **queueptr);

#endif /*QUEUE_H*/
