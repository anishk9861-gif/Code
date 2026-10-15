//in an array , change value of all odd indexed elements to there second multiple
//and increment all even waale by value 10.\




#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,5,4,32,67,8,34,22,51};
    int n = sizeof(arr)/4;

    for( int i = 0 ; i<n ; i++){
        if(i==0) arr[i] +=10;
        if (i%2==0) arr[i] = arr[i] + 10 ;
        else arr[i] = arr[i]*2;

        cout<<arr[i]<<endl;
    }
    }

