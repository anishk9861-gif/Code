//actual realistic M in questions

//Given a number N. Print its factorial .
//constraints :   

//  1 <= N <= 100
//print answer module M
//where M = 10^9 + 7

//why such a big number?

// 1. its very close to integer maximum(10^7mostly)
// 2. Multiplicative inverse. 



#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int M = 47;
    long long fact = 1;
    for(int i = 2 ; i<= n ; i++){
        fact=(fact*i)%47;
    }
    cout<<fact;    
}




