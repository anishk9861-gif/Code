//example question 
//take 3 positive integers and print the greatest of them.
//without using multiple conditions.



#include <bits/stdc++.h> 
using namespace std ; 
int main() {


    int a,b,c ;

    cout<<"Enter the first number:";
    cin>>a  ;

     cout<<"Enter the second number:";
    cin>>b    ;
    
     cout<<"Enter the third number:";
    cin>>c    ;

    //a>b and b>c -> a>c obviously a is greatest 

    if (a>b) { //b can never be the greatest 

        if(a>c) 
        {cout<<a<<" is greatest" ;}

        else  //c is greator than a , so obviously c is bigger than b too
        {cout<<c<<" is greatest" ;}

    }

    else { //b>a 
        if (b>c) 
        { cout<<b<<" is greatest" ;}

        else //c>b    c>b>a
        { cout<<c<<" is greatest" ;}
        
    }



    















}


