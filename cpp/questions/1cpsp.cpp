#include <bits/stdc++.h> 
using namespace std ; 
int main() {


    int a,b,loss , profit ;
    cout<<"Enter CP : ";
    cin>>a;

    cout<<"Enter SP : ";
    cin>>b;

    loss = a - b ;
    profit = b - a ;

    if (a>b) cout<<"Seller made loss"<<endl<<loss;
    else if (b>a) {cout<<"Seller made profit"<<endl<<profit ;}
    else { cout<< " Seller made no profit no loss" ;}






}