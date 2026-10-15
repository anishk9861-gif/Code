//print
//1
//01
//101
//0101

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , a= 1;
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            if ((i+j)%2==0 || i==j)
            cout<<1<<" ";
            else cout<<0<<" ";
    
    }
    cout<<endl;
}
}
