#include <stdio.h>
int main()

{  
  int n ;
  int a;
  int b = 0 ;

    printf("Enter The Value Of N : ");
    scanf ( "%d" , &n );
   while (n>0) { 
    a = n % 10 ;
    b = b*10 + a ;
    n = n/10 ;
} 

printf("Reversed number is : %d", b);
}



