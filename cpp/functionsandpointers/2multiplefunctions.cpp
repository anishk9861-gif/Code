#include <bits/stdc++.h>
using namespace std;


void usa() {
      cout<<"You are in USA"<<endl ;
} 


void india() {
    cout<<"You are in India "<<endl ;
    usa();          //india ke andr hi usa ko call krdiya
}


int main(){
    cout<<"You are main"<<endl ;
    india();     //india ke andr usa already hai , both india and usa running.
 return 0;
}





