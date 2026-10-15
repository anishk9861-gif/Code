//print
//1
//13
//135
//1357

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for( int i = 1 ; i<=n ; i=i+1){
        for(int j = 1; j<=i ; j=j+1){ 
            
          cout<<2*j-1<<" ";
        
        }
        
        
         cout<<endl;

    }  
}