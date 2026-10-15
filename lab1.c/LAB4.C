// Temperature of a city in Fahrenheit degrees is input through the keyboard. 
// Write a program to convert this temperature into Centigrade degrees. 

#include<stdio.h>

int main() 
{
    float fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) * 5/9;

    printf("Temperature in Centigrade: %f\n", centigrade);
    return 0;
}



























