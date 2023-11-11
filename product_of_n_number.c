// this is a c program to find the product of natural number 0 to n or we can also tell factorial of n 

#include<stdio.h>
int main(){
int num;
printf("Enter number -");
scanf("%d",&num);
int prod=1;
for(int i=1;num>=i;i++){
    prod=prod*i;

}

printf("the product of 0 to %d natural number or factroial is  %d",num, prod);

 return 0; 
}