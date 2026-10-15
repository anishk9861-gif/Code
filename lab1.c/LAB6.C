// Two numbers are input through the keyboard into two locations C and D.
//  Write a program to interchange the contents of C and D. 

#include<stdio.h>
int main()
{ int C, D , X;/
printf("Enter the value of C: ");
scanf("%d", &C);
printf("Enter the value of D: ");
scanf("%d", &D);
X = C;
C = D;
D = X;
printf("After interchange:\n");
printf("C = %d, D = %d\n", C, D);
return 0;
}