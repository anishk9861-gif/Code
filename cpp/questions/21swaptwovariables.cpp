//imp

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 2 ;
    int y = 5 ;
    int a;

    // cout<<"x : "<<x<<endl;         //Method 1 with extra variable
    // cout<<"y : "<<y<<endl;

    // a = x;
    // x = y;
    // y = a;
    //  cout<<endl<<endl<<endl;
    // cout<<"x : "<<x<<endl;
    // cout<<"y : "<<y<<endl;



    //Method 2 without using extra variable
    //using math

    cout<<x<<" "<<y<<endl;

    x = x+y;
    y = x-y;
    x = x-y;

    cout<<x<<" "<<y;     
                                          
}



