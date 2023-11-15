// this is a c program to swap two numbers 

#include<stdio.h>
int main(){
int a,b;
int temp;
printf("Enter a value a : ");
scanf("%d",&a);
printf("Enter a value b : ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the valve of a is %d \n :",a);
printf("the valve of b is %d\n  :",b);

 return 0; 
}