//   *    
//  **
// ***
//**** 

//only way to solve it is 1 loop ke andr do loops.
//hard problem

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for( int i = 1 ; i<=n ; i++){    ///rows

        for(int j = 1 ; j<=n-i+1 ; j++){ //spaces 
            cout<<" ";
        
    }
        for( int j = 1 ; j <=i ; j++){

            cout<<"*";

        }
        cout<<endl;
    }
}


