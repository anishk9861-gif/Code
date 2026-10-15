#include <stdio.h> 
int main()

{ int a ,i ,c , d = 1 ;
    printf("Enter the number : ");
    scanf("%d" , &a) ;
 
    for ( i = 2 ; i<a ; i++ ) 
 {  c = a%i ;

    if(c==0) { 
        d=0 ; break;  } 
    
    }

    if(d==1) 
    printf("Number is prime") ;

    else 
    printf("Number is not prime") ;

}

