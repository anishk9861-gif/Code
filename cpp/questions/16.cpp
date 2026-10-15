//WAP to print reverse of a given number.


#include <bits/stdc++.h>
using namespace std;
int main()

{

   int n , rev = 0 ;
   cout<<"Enter the number : ";
   cin>>n;
   while(n>0){
     rev = rev*10 + n%10 ;
     n = n/10;
   }

   cout<<"Reverse of digits is : "<<rev;


}
 




