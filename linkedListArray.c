#include <stdio.h>
#include <stdlib.h>
#include "linkedListArray.h"

void print(Node* head){
	int j;
	for(j = 0; j < head->actSize; j++){
		printf("%c",head->linkedListArray[j]);
	}
}

Node* insertTail(Node *head, int data){
	if(head == 0)
	{ head = (Node*)malloc(sizeof(Node)); }
	head->linkedListArray[head->actSize++] = data;
	return head;
}

Node* deleteTail(Node* head){
	head->actSize--;
}

int isPalindrome(Node *head){
	int halfSize, j;
	halfSize = head->actSize / 2;
	for(j = 0; j <= halfSize; j++){
		if( head->linkedListArray[j] != head->linkedListArray[head->actSize-1-j] )
		{return 0;}
	}
	return 1;
}
