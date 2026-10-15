//pascal traingle 
//0 1 2  3  4 5   ---->       //columns 
//1               0     
//1 1             1
//1 2 1           2
//1 3 3 1         3
//1 4 6 4 1       4
//1 5 10 10 5 1   5
//               rows



// if we calculate (row)
//                      C
//                       (column)


//eg -> 4c2 = 6 we get get value inside pascal traingle
//this is algorithm building of this question

//lets make function of ncr first 

 #include <bits/stdc++.h>
 using namespace std;


 int fact(int x){ 
    int a = 1;
    for(int i = 1 ; i<=x ; i++){
        a = a*i;
    }
    return a ;
 }

 int ncr(int x , int y) {
   int f;
   f = fact(x)/(fact(y)*fact(x-y));
     return f;
 }





 int main(){
    int n;
    cout<<"Enter n : ";     //first we print structure of star triangle
    cin>>n;

    for(int i = 0 ; i<= n ; i++){

        for(int j=0 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int j=0 ; j<=i ; j++){
              cout<<ncr(i,j)<<" ";

        }
        cout<<endl;
    }
     
 }


 






