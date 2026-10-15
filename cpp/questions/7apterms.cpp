//display ap 1,3,5,7,9..... upto n terms.



//method 1 - maths , nth term formula , an = a + (n-1)d
// #include <bits/stdc++.h>
// using namespace std;
// int main()

// {   //so here d = 2 , a1 = 1 , an = 2n -1 

//     int n ;
//     cout<<"Enter n :";
//     cin>>n;

//     for(int i = 1 ; i <= 2*n-1 ; i+=2)
//      { cout<<i<<" " ;}

// }






//method 2 - using extra variable & keeping 'i' only for the iterations 


#include <bits/stdc++.h>
using namespace std;
int main()

{   int n ;
     cout<<"Enter n: ";
     cin>>n;

     int a = 1 ;

     for(int i = 1 ; i <=n ; i++){
        cout<<a<<" ";
        a = a + 2;
     }

}








