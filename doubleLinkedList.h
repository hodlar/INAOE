typedef struct Node Node;

struct Node {
	Node *next;
	Node *prev;
	int data;
}; 

void print(Node* head);
Node* insertTail(Node* head, int data);
Node* deleteTail(Node *head);
int isPalindrome(Node *head);
