// WAP to print sum of digits of a given number . 

#include <bits/stdc++.h>
using namespace std;
int main()

{ 
    int a,n;
    cin>>n;
    int sum = 0;
    
    for(n ; n>0 ; n=n/10 ){
         a = n%10 ;
         sum = sum + a ;
                   }
        cout<<sum;           
}


