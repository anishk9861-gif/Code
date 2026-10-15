// If a five-digit number is input through the keyboard.
// write a program to reverse the number. 

#include<stdio.h>
int main()  
{ 
    int a, reverse = 0;

    printf("Enter Five digit number :");
    scanf("%d", &a);

    reverse += a % 10;
    reverse *= 10;
    reverse += (a / 10) % 10;
    reverse *= 10;
    reverse += (a / 100) % 10;
    reverse *= 10;
    reverse += (a / 1000) % 10;
    reverse *= 10;
    reverse += a / 10000;

    printf("Reversed number = %d\n", reverse);
    return 0;
}