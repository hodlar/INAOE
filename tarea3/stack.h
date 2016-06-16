#ifndef STACK_H
#define STACK_H

#include "node.h"

typedef struct Stack Stack;


struct Stack{
	Node *top;
};

Stack* stack_new();
void stack_print(Stack* stack);
Stack* stack_push(Stack *stack, int data);
int stack_pop(Stack *stack);
int stack_delete(Stack *stack);

#endif /*STACK_H*/
