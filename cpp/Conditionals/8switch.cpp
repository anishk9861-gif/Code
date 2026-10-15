//another way of doing if else statements 
//not that useful , only for papers 


//Q.  Write a program to create a calculator that performs basic arothmetic operations
// (+,-,/) using switch case and functions .
// Calculator should input two numbers and an operator from user


// #include <bits/stdc++.h>          #BY NORMAL WAY 
// using namespace std ; 
// int main() {
 
//     int n1;
//     cin>>n1;
//     char op;
//     cin>>op;
//     int n2;
//     cin>>n2;

//     if (op=='+') cout<<n1+n2;
//     if (op=='-') cout<<n1-n2;
//     if (op=='/') cout<<n1/n2;
//     if (op=='*') cout<<n1*n2;


// }



//SWITCH WAY

#include <bits/stdc++.h>
using namespace std;
int main(){

    float n1;
    cin>>n1;
    char op;
    cin>>op;
    float n2;
    cin>>n2;


    switch(op) {

        case '+' :
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;

        case '/':
        cout<< n1/n2<<endl ;
        break;

        case '*':
        cout<< n1*n2<<endl ;
        break;

        default :
        cout<< "invalid operator";

    }
}
