#include <stdio.h>
#include "linkedListArray.h"

void print(Node* head){
	int j;
	for(j = 0; j < head->actSize; j++){
		printf("%c",head->linkedListArray[j]);
	}
}

Node* insertTail(Node* head, char letter){
	head->linkedListArray[head->actSize++] = letter;
}

Node* deleteTail(Node* head){
	head->actSize--;
}
