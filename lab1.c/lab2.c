//The distance between two cities (in km.) is input through the keyboard
//Write a program to convert and print this distance in meters, feet, inches and centimeters. 





#include <stdio.h>

void main()
{ float a,b,c,d,e;
printf("Enter distance in km: ");

scanf("%f", &a);

b = a*1000;
c = a*3280.84;
d = a*39370.1;
e = a*100000;

printf("Distance in meters: %f \n", b);
printf("DIstance in feet: %f \n", c);
printf("Distance in inches: %f \n", d);
printf("Distance in centimeters: %f \n", e);
 }
