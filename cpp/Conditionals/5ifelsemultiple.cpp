//check number is divisible by 5 or 3 

#include <bits/stdc++.h> 
using namespace std ; 
int main() {

    int a ;
    cout<<"Enter n : ";
    cin>>a;

    if (a%5==0 or //we can use || too
         a%3==0)
    cout<<"Number is divisible by 5 or 3";

    else cout<<"Not divisible";

}

