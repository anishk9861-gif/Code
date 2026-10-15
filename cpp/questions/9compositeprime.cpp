#include <bits/stdc++.h>
using namespace std;
int main()

{ int n ;
    cout<<"Enter n : ";
    cin>>n;

    bool flag = true;

   for(int i = 2 ; i<n ; i++){

    if (n%i==0) flag = false;
    ;
    break;
   }
      if(n==1) cout<<"Number is neither prime nor composite";
      else if (flag==false) cout<<"number is composite";
      else cout<<"number is prime";

      
}
    