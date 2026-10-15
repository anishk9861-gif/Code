//with recursion




// #include <bits/stdc++.h>
// using namespace std;

// void print(int x , int y){

//     if (x>y) return;
//     cout<<x<<" ";
//     print(x+1 , y);
// }




// int main(){

//     int n;
//     int* p = &n;
//     cout<<"Enter n :"<<" " ;
//     cin>>n;
//     print(1,n);

// }




//now without extra parameter only use print(int x)


#include <iostream>
using namespace std;

void print(int n){
{   if (n==0) return;   //base case

    print(n-1);         //call
    cout<<n<<endl;      //work       ->it gives reverse output
 }
}

int main(){

    int n ;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
}




