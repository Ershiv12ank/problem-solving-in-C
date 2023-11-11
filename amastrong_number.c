// this is a program to check the number is amanstrog or not.
#include<stdio.h>
#include<math.h>
int main(){
int num;

printf("Enter a number:- ");
scanf("%d",&num);
int a=num;
int sum_cube=0;
int mod=0;
while(num!=0){
    mod=num%10;
    num= num/10;
    sum_cube=sum_cube+mod*mod*mod;
    
}
if(sum_cube==a){
    printf("This is a amanstrong number ");
}
else{
    printf("This is not a amastrong number");
}
 return 0; 
}