//which operator to use for input instead of cin?

// Ans : *getline*
//syntax ->

#include <bits/stdc++.h>
using namespace std;
int main(){

    string s ;

    cout<<"Enter string : ";

    getline(cin,s);    //instead of cin>>s;

    cout<<s;

    cout<<endl<<endl<<sizeof(s);   //it is 32 mostly

}

//now if we even have spaces in our sentence , it will print whole.