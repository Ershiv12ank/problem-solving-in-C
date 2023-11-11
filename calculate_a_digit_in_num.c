// This is program to calulate the number of digit present in the number

#include<stdio.h>
int main(){
int num;
int count=0;
printf("Enter a number:- ");
scanf("%d",&num);
while(num!=0){
     count=count+1;
    num=num/10;
   
}
printf("total number of digit is %d",count);
 return 0; 
}