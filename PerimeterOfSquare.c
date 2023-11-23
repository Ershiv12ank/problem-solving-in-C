// this is a c program to find the perimeter of a square 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
float size , bri;
printf("Enter a Size of rectangle ");
scanf("%f",&size);

float perimeter;
perimeter=4*size;
printf("perimeter of squar with side %.2f is %.2f ",size,perimeter);

 
return 0; 
}