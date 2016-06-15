#include "node.h"

#ifndef QUEUE_H
#define QUEUE_H
typedef struct Queue Queue;
#endif

struct Queue {
	Node *begin;
	Node *end;
	int count;
};

void printQueue(Queue *queue);
Queue* enQueue(Queue *queue, int data);
int deQueue(Queue **queueptr);
