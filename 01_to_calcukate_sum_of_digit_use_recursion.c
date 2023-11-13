#include<stdio.h>
int sum_of_digit(int n){
    
    
        if(n<=9){
            
            return n;
        }
        else{
            return n%10 + sum_of_digit(n/10);

        }
    
}
int main(){
    int n,result;
printf("Enter a number - ");
scanf("%d",&n);
result=sum_of_digit(n);
printf("the sum of %d is %d",n,result);
 return 0; 
}