//find second largest element in given array.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,5,6,4,3,12,999,34,22,54,1,2,3,5};
    int n = sizeof(arr)/4;

    int mx = INT_MIN;
    for(int i = 0 ; i<n ; i++ ){
        if (arr[i]>mx) mx=arr[i];
    }
    cout<<mx<<endl;


    int smx = INT_MIN;        //INT_MIN IS A  VERY MINIMUM VALUE EXISTING IN CPP.
    for(int i = 0 ; i<n ; i++){
         if(arr[i]!=mx) smx = max(smx,arr[i]);
        
        }
       cout<<endl<<smx;
}



