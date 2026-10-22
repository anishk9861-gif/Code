#include <bits/stdc++.h>
using namespace std;
//N < 10^5
int main(){
    int n;
    cin>>n;
    int ct = 0 ;
    for( int i = 0 ; i <= n ; ++i ){
        for( int j = 0 ; j < i ; ++j ){
            ct++;
        }
    }
}





//iterations kitni hui in loop



//when i  it runs  j 
//     0           !no
//     1           0
//     2           01
//     3           012  
//     n           012345......n-1

//number of iterations , how many times it ran in loops.
// 0+1+2+3+4+..........n  [(n-1) actually but we round it to n]

// iterations = n(n+1)/2

// ---->  n^2/2 + n/2    ( rouding off and ignoring n/2 because n^2>>>>n)

//rounded iterations ----> n^2/2 


//so overall time complexity - O(n^2/2)




