//*important*
//fibonacci numbers.

//write a program to calculate nth fibonacci number using recursion.

//    1 1 2 3 5 8 13 21 34 55 89 144.........
//n=  0 1 2 3 4 5 6  7  8  9  10  11
//next number is always sum of last two terms.

//fibo(8) = fibo(7) + fibo(6) [conceept]

#include <iostream>
using namespace std;


int fibo(int a){
    if (a==0 || a==1) return 1; 
    else {return fibo(a-1) + fibo(a-2);
    } 
}



int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Here we  go : "<<fibo(n);

}

