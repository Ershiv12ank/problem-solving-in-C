// this is program c to calculate sum of 1 to n natural number
#include<stdio.h>
int main(){
int num;
printf("Enter a number -");
scanf("%d",&num);
int sum=0;
for(int i=1;i<=num;i++){
    sum=sum+i;
}
printf("Sum of Natural number between 0 to %d is %d ",num,sum);


 return 0; 
}