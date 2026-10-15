//calculate the sum of elements of a array.


//thinking 
//int arr[] = {5,1,2,4,6,3}
// sum = 0
// sum += arr[0] ; sum += arr[1] ; sum ++ arr[2]...........





#include <iostream>
using namespace std;
int main(){

    int arr[] = {12,6,7,34,9,23,2,8,31} ;
    int sum = 0;
    for(int i = 0 ; i<=8 ; i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    cout<<sizeof(arr)/4;           //size of one integer is 4 bytes.
    }                              //if i divide wiht 4 , i get number of elements.
   
    