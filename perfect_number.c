// this is a c program to check the number is a perfect or not 
#include<stdio.h>
int main(){
int num,sum=0;
printf("Enter a number -");
scanf("%d",&num);
for(int i=1;i<num;i++){
    if(num%i==0)
{
    sum=sum+i;
}

}
if(sum==num){
    printf("%d is a perfect number",num);
}
else{
    printf("%d is not perfect number",num);
}
 return 0; 
}