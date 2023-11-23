#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
float len , bri;
printf("Enter a lengt of rectangle ");
scanf("%f",&len);
printf("Enter a bridth of rectangle ");
scanf("%f",&bri);
float area;
area=len*bri;
printf("Area of length %.2f  and %.2f is %.2f ",len,bri,area);

 
return 0; 
}