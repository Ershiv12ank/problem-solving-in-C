// this is a c program to find the perimeter of a rectangle


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
float len , bri;
printf("Enter a lengt of rectangle ");
scanf("%f",&len);
printf("Enter a bridth of rectangle ");
scanf("%f",&bri);
float perimeter;
perimeter=2*(len+bri);
printf("perimeter of length %.2f  and %.2f is %.2f ",len,bri,perimeter);

 
return 0; 
}