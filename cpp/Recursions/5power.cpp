//write code and make function to calculate a^b using recursion.


#include <iostream>
using namespace std;

int pow(int a, int b){
      if (b==1) return a; 
    else return a * pow(a,b-1);
    }



int main(){
    int m,n ;
    cout<<"Enter m : ";
    cin>>m; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Here it is : "<<pow(m,n);

}

