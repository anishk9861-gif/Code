#include <stdio.h>
int main()

{  
int a,i ;
int prime = 1 ;

printf("Enter number : ");
scanf( "%d" , &a );

for ( i = 2 ; i < a ; i++)
{   if (  a%i == 0  ) 
    {     prime = 0 ;
    break;    } }

if (prime == 1)
  printf("Number is Prime");

else   
printf("Number is  NOT Prime"); 
}














