#ifndef NODE_H
#define NODE_H
typedef struct Node Node;

struct Node{
	Node *next;
	int data;
};

Node* new_node(int data);

#endif /*NODE_H*/
