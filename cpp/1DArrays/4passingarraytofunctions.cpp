#include <iostream>
using namespace std;

// void change(int a){
//     a = 8;
// }

// int main(){
//     int x = 3 ;
//     cout<<x<<endl;
//     change(x);   //passbyvalue
//     cout<<x<<endl;
// }                    //it wont work still 3,3. as address of both stored values is different .
                     // more clearly understand in function and pointers.
                     // 6swap.cpp

void change(int brr[]){
    brr[0] = 9;
}



int main(){
    int arr[3] = {1,2,3} ;
    for(int i = 0 ; i<=2 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    change(arr);

    for(int i = 0 ; i<=2; i++){
        cout<<arr[i]<<" ";

    }                            //change is working , array ke case me passbyreference allowed hota hai.
    
//same memory location ki baat hori hoti hai isme.

}


