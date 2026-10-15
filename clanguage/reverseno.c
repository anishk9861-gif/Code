#include <stdio.h> 
int main()

{ int a ;
 int rev = 0 ;
 int i ;

printf("Enter the number : ");
scanf( "%d" , &a ) ;

while (a>0){   
    i = a%10 ;
    rev = rev * 10 + i ;
    a = a/10 ;   }


printf("Reversed number = %d" , rev);


}