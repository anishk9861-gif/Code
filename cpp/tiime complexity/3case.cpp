#include <bits/stdc++.h>
using namespace std;

// N < 10^5

int main(){

    int n;
    cin>>n;

    while(n>0){
        n=n/2;
    }
}


//thinking.


//let a number n and i can divide it by 2 for a times .  so i can simple say 2^a = n(think it by perfect square of 2 , easy to imagine) .
// log (2^a) = log (n)
//    2           2


//   a = log (n)
//          2

//that means humara while loop jo hai wo log (n) times chlega.
//                                          2


// o(2) + o(log(n)) ~ o(log(n))

//ye complexity bahut achi hai kuinki iski value bahut hi zada small hogi.


//example 
//log (10^5) = 5log (10)       { log2(10) ~ 3 }
//   2             2

// => 5*3 = 15 , mtlb itna bada number dalke bhi while loop bas 15 times chlega.WOW




