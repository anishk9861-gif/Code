//recursion way


//5+4+3+2+1 = 1++2+3+4+5

//do after 2onetoN.cpp

//sum(n) = sum(n-1)

#include <iostream>
using namespace std;

int sum(int n){
    if (n==1) return 1;
    else { return n + sum(n-1) ;}
}


int main(){
    int n ; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Here it is : "<<sum(n);

}