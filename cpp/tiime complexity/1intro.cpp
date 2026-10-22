#include <bits/stdc++.h>
using namespace std;
int main(){

    int x;   //constant time iteration
    int sum = 0;  //constant time iteration(we are defining permanently , not calculating).
    sum = x+x;  //iteration

    int n;  //iteration
    cin>>n;  //iteration
    for(int i = 0 ; i<=n ; i++){     // n times
        
        int y;     
        y= 5;
        y++;
    }

}

//Number of iterations(steps where we do something in our code)
// O(5) [five steps that we took wihtout repetetion] + O(3*n) [n is multiplied because 3 steps will be repeated in our loop code]


//to write overall time complexity of a code
// we write it as capital o with brackets.  [o:overall , it refers to time complexity]

//syntax-  O(n)      (where n is number of iterations) 



//in our given question case , if we take n somewhere between 1e4 and 1e5[very large number].
//no of iteration was = O(5) + O(3*n)
//but O(5) is very small as compared to O(3*n)  [we can ignore small 5]
// 5 iterations<<<<<<<<<<<< 3 times 1e4 iterations 
// we can write it simply as assume total time complexity to be O(3*n). and ignore 5 iterations to write significant amount.


//-----------------------*important points* learn------------------------------------------------------------------------------------------------------------------------------------------------

// 1. O(N) + O(N) ~ O(N)    :jab tak bahut saare O(N) add ni hore significant number me , tab tak overall O(N) boldete


// 2. O(K*N) (K<<<<N)     ~ O(N)

// 3. O(3),O(4),O(5)..............O(10) ~ O(1)  [ye kaafi chote iterations hai , ye sab generally jitna time 1 iteration leti hai utne me hi hojayenge.]

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//general number of iterations a compiler can handle in 1 second.
// 1e7 - 1e8 ke beech. (kaafi large hai)



// agar 1e7 iterations 1 second me hoti hai to 
// 1e8 take 10 seconds.   (1e8 = 1e7 * 10)
//1e9 take 100 seconds.
//1e10 take 1000 seconds.





// int a;  O(1)

// int arr[n] ;  O(n)

// int arr[n][n] ; O(n^2)
