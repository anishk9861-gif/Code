//foundation



//with operators -+/*

//ques: wap to count digits of a given number 

#include <bits/stdc++.h>
using namespace std;
int main()

{    int n ;
     cin>>n ;      
    int count = 0 ;
    while (n>0) { n=n/10 ; 
    count = count + 1 ;
    }

    cout<<count;
}


