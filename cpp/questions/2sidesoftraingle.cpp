//check if 3 numbers can be sides of triangle

#include <bits/stdc++.h> 
using namespace std ; 
int main() {

    int a,b,c ;
    cout<<"enter sides of traingle ";
    cin>>a>>b>>c ;

    if (  (a+b)>c and (a+c)>b and (c+b)>a   )
    cout<<"Yes, these are sides of a traingle" ;

    else cout<<"No , these cant form a traingle";





}

