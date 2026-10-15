//permuation and combination based questions. for function


//combination =  nCr = n!/(r! * (n-r)!)


#include<bits/stdc++.h>
using namespace std;


int fact(int x) {
    int f = 1 ;
    for(int i = 1 ; i<= x ; i++){
        f = f*i;
    
    }
    return f;
}
int main(){
    int n , r;
    cout<<"Enter n : " ;
    cin>>n;

    cout<<"Enter r : " ;
    cin>>r;

    int a = fact(n) ,
    b = fact(r) , c = fact(n-r) ;

    

    cout<<"No of combinations : "<<a/(b*c);
}




