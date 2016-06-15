#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void printStack(Stack *stack)
{
	Node *head;
	head = stack->top;
    while(head)
    {
        printf("%i\n",head->data);
        head = head->next;
    }
}

Stack* enStack(Stack *stack,int data)
{
	Node *tmp;
	tmp = new_node(data);

    if(!stack)
    {
		stack = malloc(sizeof(stack));
        stack->top = tmp;
    }
    else
    {
		tmp->next = stack->top;
		stack->top = tmp;
    }
    return stack;
}

int deStack(Stack **stackptr)
{
	Stack *stack;
	int deletedValue;
    Node *tmp = 0;

	stack = *stackptr;
    if(!stack || !stack->top)
        deletedValue = 0;
	else{
		tmp = stack->top->next;
		deletedValue = stack->top->data;
		free(stack->top);
		stack->top = tmp;
	}
	*stackptr = stack;
	return deletedValue;
}
