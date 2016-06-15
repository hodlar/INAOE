#include "node.h"

typedef struct Stack Stack;


struct Stack{
	Node *top;
};

void print(Node* head);
Stack* enStack(Stack *stack, int data);
Stack* deStack(Stack *stack);
