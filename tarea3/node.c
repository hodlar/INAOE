#include "node.h"
#include <stdlib.h>

Node* new_node(int data){
	Node *tmp;
	tmp = (Node*)malloc(sizeof(Node));
	tmp->next = 0;
	tmp->data = data;
	return tmp;
}
