#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* stack_new(){
	Stack *tmp;
	tmp = malloc(sizeof(tmp));
	tmp->top = 0;
	return tmp;
}

void stack_print(Stack *stack)
{
	Node *head;
	head = stack->top;
    while(head)
    {
        printf("%i\n",head->data);
        head = head->next;
    }
}

Stack* stack_push(Stack *stack,int data)
{
	Node *tmp;
	tmp = new_node(data);
	tmp->next = stack->top;
	stack->top = tmp;
    return stack;
}

int stack_pop(Stack *stack)
{
	int deletedValue;
    Node *tmp = 0;

    if(!stack->top)
	{
        deletedValue = -1;
	}
	else{
		tmp = stack->top->next;
		deletedValue = stack->top->data;
		free(stack->top);
		stack->top = tmp;
	}
	return deletedValue;
}

int stack_delete(Stack *stack)
{
	if(!stack)
		return 0;
	else{
		free(stack);
		return 1;
	}
}
