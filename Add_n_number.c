#include<stdio.h>
float sum(int n){
float sum=0,num;
for(int i=1;i<=n;i++){
printf("Enter number %d ",i);
 scanf("%f",&num);
 sum=sum+num;

}
return sum;
}
void main(){
 int n;
 float result;
 printf("Enter total numbers ");
 scanf("%d",&n);
 result=sum(n);
 printf("Total sum == %f ",result);
}