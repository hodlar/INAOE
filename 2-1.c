#include <stdio.h>
#include <stdlib.h>
//#include "doubleLinkedList.h"
#include "linkedListArray.h"
#define SIZE 50


char getLetter(char data){
	if( (data >= 'a' && data <= 'z') ||	(data >= '0' && data <= '9') )
	{return data;}
	else if(data >= 'A' && data <= 'Z')
	{return data + 32;}
	else return 0;

}

Node* stringToQueue(char *string, Node *head){
	int i = 0;
	char tmp;

	do{
		tmp = getLetter(* (string + i++) );
		if( tmp ){
			head = insertTail(head, tmp);
		}
	}while( *(string + i) != '\n');
	return head;
}

int main(){
	size_t size;
	char *arr;
	int readChars, win;
	Node *queue = 0;

	arr = malloc(SIZE*sizeof(char));
	size = SIZE;
	printf("Write down the text\n");
	readChars = getline(&arr, &size, stdin);
	queue = stringToQueue(arr,queue);
	//print(queue);
	win = isPalindrome(queue);
	if(win)
		printf("is Palindrome\n");
	else
		printf("is not Palindrome\n");

	free(arr);
	return 0;
}
