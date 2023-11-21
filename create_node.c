// This is a program to create a node in linked list.

#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *link;
}start;
int main(){
 struct Node *head =NULL;
 head=malloc(sizeof(struct Node));
 head->data=45;
 head->link=NULL;
 printf("%d",head->data);

return 0;
 
}
