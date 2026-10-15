//continue 
//if u want to skip a round 
// eg print a number from 1 to 20 except 3 & 8 

#include <bits/stdc++.h>
using namespace std;
int main()

{ 
    for( int i = 1 ; i<=20 ;    i++){
        if(i==3||i==8) continue;
        cout<<i<<" ";

    }

}          