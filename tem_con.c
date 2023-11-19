// this is a program to convert farenhite to celius .
#include<stdio.h>
void main(){
    float celius , farenhite;
    printf("Enter the temperature in farenhite ");
    scanf("%f",&farenhite);
    celius= (farenhite - 32)*5/9;
    printf("%f Farenhite is equal to %f Celius ",farenhite, celius) ;
 
 
}