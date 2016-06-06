#include <stdio.h>
#include "linkedListArray.h"

void print(Node* head){
	int j;
	for(j = 0; j < head->actSize; j++){
		printf("%c",head->linkedListArray[j]);
	}
}

Node* insertTail(Node *head, char letter){
	if(head == null)
	{ head = (Node*)malloc(sizeof(Node)); }
	head->linkedListArray[head->actSize++] = letter;
	return head;
}

Node* deleteTail(Node* head){
	head->actSize--;
}

int isPalindrome(Node *head){
	int halfSize;
	halfSize = head->actSize / 2;
	for(j = 0; j <= halfSize; j++){
		if( head->linkedListArray[j] != head->linkedListArray[actSize-1-j] )
		{return 0;}
	}
	return 1;
}
