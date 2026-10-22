#include <iostream>
using namespace std;
int main(){
    int x = 12;
    int* ptr = &x;
    cout<<x<<endl;
    //if we want to change value of x now , we can simple write x = 7 or we have another cool way.

    *ptr = 7;   // x=7
    cout<<x<<endl;
}


