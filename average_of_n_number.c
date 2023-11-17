// this is a program to find the average of n number 

#include<stdio.h>
float average(int n){
    float num, sum=0 ,a;
    for(int i=1;i<=n;i++){
        printf("Enter num %d ",i);
        scanf("%f",&num);
       sum=sum+num;
       
      
    }
    float avr;
    avr=sum/n;
    return avr;
}
void main(){
 int n;
 float result;
 printf("Enter a total number ");
 scanf("%d",&n);
 result=average(n);
 printf("Average of number  is %f",result);

 
}