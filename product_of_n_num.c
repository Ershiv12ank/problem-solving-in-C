#include<stdio.h>
float prod(int n){
float prod=1,num;
for(int i=1;i<=n;i++){
printf("Enter number %d ",i);
 scanf("%f",&num);
 prod=prod*num;

}
return prod;
}
void main(){
 int n;
 float result;
 printf("Enter total numbers ");
 scanf("%d",&n);
 result=prod(n);
 printf("Total product == %f ",result);
}