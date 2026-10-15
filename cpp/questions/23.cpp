//find max value of all elements in array.

#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,5,6,4,3,12,999,34,22,54,1,2,3,5};
    int n = sizeof(arr)/4;

    int mx = arr[0];
    for(int i = 1 ; i<=n ; i++ ){
        if (arr[i]>mx) mx=arr[i];
    }
    cout<<mx<<endl;


}





