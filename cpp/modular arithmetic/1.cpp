// 1. (a+b)%M = ((a%M) + (b%M))%M
// 2. (a*b)%M = ((a%M) * (b%M))%M
// 3. (a-b)%M = ((a%M) - (b%M) + M)%M
// 4. (a/b)%M = ((a%M) * (b^-1)%M)%M


//why we need module
//it is used in many cp problems.

//Given a number N. Print its factorial .
//constraints :   

//  1 <= N <= 100
//print answer module M
//where M = 47

// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     long long fact = 1;
//     for(int i = 2 ; i<= n ; i++){
//         fact=fact*i;
//     }
//     cout<<fact;
// }

//jab is question me main 20 tak ka factorial count krta hu to easily hojata hai
//lekin 21 ka krte hi output negative me ata hai
//kuinki longlong function bhi utni badi value store nahi kar paa rha hai.
//isliye ese cases me hum modulo ka use krte hai jab number bahaut bada ho.


//now lets use modulo 
//mtlb hume answer ko modulo ki form , by dividing it and writing in remainder divisor type shii

//lets do again

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

//we can understand by property easily.
//suppose factorial of 5 
// now (1*2*3*4*5)%47 = (1*120)%47
// ((1%47)*(120%47))%47
// (1*26)%47
// 26







