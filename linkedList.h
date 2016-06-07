typedef struct Node Node;

struct Node {
	Node *next;
	int data;
};

void print(Node* head);
void printval(Node* head);
Node* insertTail(Node* head, int data);
Node* insertHead(Node* head, int data);
Node* insertNth(Node* head, int data, int position);
Node* deleteNode(Node *head, int position);
Node* revertList(Node *head);
