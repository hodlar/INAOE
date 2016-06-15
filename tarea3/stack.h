#ifndef STACK_H
#define STACK_H

#include "node.h"

typedef struct Stack Stack;


struct Stack{
	Node *top;
};

void printStack(Stack* stack);
Stack* enStack(Stack *stack, int data);
int deStack(Stack **stackptr);

#endif /*STACK_H*/
