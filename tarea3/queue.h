typedef struct Node Node;
typedef struct Queue Queue;

struct Node {
	Node *next;
	int data;
};

struct Queue{
Node *begin;
Node *end;
};

void print(Node* head);
void printval(Node* head);
Queue* enqueue(Queue *queue, int data);
Queue* dequeue(Queue *queue);
