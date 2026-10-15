// If a five-digit number is input through the keyboard.
// write a program to calculate the sum of its digits.  

#include<stdio.h>
int main()
 { int a, sum;

    printf("Enter Five digit number :");
    scanf("%d", &a);

    sum = a / 10000;
    sum += (a / 1000) % 10;
    sum += (a / 100) % 10;
    sum += (a / 10) % 10;
    sum += a % 10;

    printf("Sum of digits = %d\n", sum);
    return 0;

}