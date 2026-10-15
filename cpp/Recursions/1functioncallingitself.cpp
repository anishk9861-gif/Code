#include <iostream>
using namespace std;

// void greet(){
//     cout<<"HEY"<<endl;
//     greet();

// }

// int main(){
//     greet();
// }





void print(int n){
{   if (n==0) return;
    cout<<n<<endl;
    print(n-1); }
}

int main(){
    print(3);
}








