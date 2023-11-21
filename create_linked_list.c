#include<stdio.h>
void Insert_begining(int key){
    struct Node *ptr;
    ptr=malloc(sizeof(struct Node *ptr));

    if(ptr!=NULL){
        ptr->data=key;
        ptr->link=start;
        start=ptr;
    }
}
struct Node start {
    int data;
    struct  start *link;
};
void main(){
 int key;
 struct Node start {
    int data;
    struct  start *link;
};
 printf("Enter a key ");
 scanf("%d",&key);
 
}