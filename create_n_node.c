#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
    int data ;
    struct node *next;
};
int createll(int n ){
    struct node *head=NULL;
    // int *ptr=head;
    for(int i=1;i<=n;i++){
        head=malloc(sizeof(struct node));
        int key;
        printf("Enter a data in node ");
        scanf("%d",&key);
        head->data=key;
        head->next=head;
    }
    head->next=NULL;
    
}
int main(){
    int result,n;
    printf("Enter total number of node create in Linked list ");
    scanf("%d",&n);
struct node *head=NULL;
   result=createll( n );
   printf("%d",result);

}