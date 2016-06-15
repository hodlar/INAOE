#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void print(Node *head)
{
    while(head != NULL)
    {
        printf("%i\n",head->data);
        head = head->next;
    }
}

Stack* enStack(Stack *stack,int data)
{
	Node *tmp;
    tmp = (Node*)malloc(sizeof(Node));
    tmp->data = data;
	tmp->next = 0;

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

Stack* deStack(Stack *stack)
{
    Node *tmp = 0;
    if(!stack)
        return 0;
	else{
		tmp = stack->top->next;
		free(stack->top);
		stack->top = tmp;
	}
}
