//special case
//given t test cases and array of size n . print sum of array in each test case.

//constraints given
// 1 <= T <= 100000
// 1 <= N <= 100000
// 1 <= a[i] <= 1000 
// sum of N over all test cases is < 10^7


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ct=0;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
            sum += x;
            ct++;
        }
        cout<<sum<<endl;
    }
}

// time complexity - O(T*N) = O(N^2)   // as T hand N have same ranges for value to fill |  10^10 out of limit if 10^7 not given and code out of time.
// but as limit is given to us of counter < 10^7 , now according to limit we will see.

// value of t        value of n
//       0              n0
//       1              n1
//       2              n2
//       3              n3
//       t              nt



// how many times whole loop work 
//  n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 = ct
// and we given that sum of n in all test cases < 10^7

////  n0 + n1 + n2 + n3 + n4 + n5 + n6 + n7 < 10^7


// so new time complexity 
// O(ct) < O(10^7) (given constraint) 



