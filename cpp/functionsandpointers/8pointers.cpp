// #include <iostream>
// using namespace std;
// int main(){
//     int x = 3;
//     int* p = &x ;
//     cout<<&x<<endl;
//     cout<<p<<endl;  //now we will get same address output
                   //we have stored address of x inside p
                  //int* is syntax
                  // &x refers to address of a variable
                  // and p refers to box where we store address

//with pointers we can access the value of the variable whose address is in
//the pointer ->using dereference/* operator.


#include <iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x ;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl;     //*operator se p ke andr jaake us address se same address wala x dhunda and x ke andr or waha par padi value layenge.
    cout<<&p<<endl;     //p ke andr stored hai kisi or ka address lekin p ka ek khud ka bhi alag se address hoga.
}



