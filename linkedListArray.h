typedef struct Node Node;

struct Node {
	char linkedListArray[50];
	int actSize;
};

void print(Node* head);
Node* insertTail(Node *head, int data);
Node* deleteTail(Node *head);
