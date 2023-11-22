#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int year,a;
 printf("Enter a year ");
 scanf("%d",&year);
 year=a;
 if(year%4==0){
    if(year%100==0){
        if(year%400==0){
            printf("it is a leap year",year);
        }
        else{
            printf("it is not a leap year ",year);
        }
    }
    else{
        if(year%4==0){
            printf("it is a leap year ",year);
        }
    }
 }
 
return 0; 
}