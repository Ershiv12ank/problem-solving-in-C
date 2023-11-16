// this is code for basic of malloc with code


// malloc is used for memory allocation in run time 
// it is always run in heap area 

// code:

#include<stdio.h>
#include<stdlib.h>

void main(){
int n,i,*p;
printf("Enter a number of bytes you need ");
scanf("%d",&n);
p=malloc(n*sizeof(int));
if (p!=NULL){
    for(int i=0; i<=n;i++){
        printf("Enter a value %d  ",i);
        scanf("%d",p+i);
    }
    for(int i=0; i<=n;i++){
        printf(" value of %d is ",i);
        printf("%d  \n",*(p+i));
    }
}

  
}