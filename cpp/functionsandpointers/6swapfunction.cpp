// #include <bits/stdc++.h>
// using namespace std;
// void swap(int x,int y){
//     int a;
//     a = x ;
//     x = y;
//     y = a;
   

// }

// int main(){
//     int x = 12;
//     int y = 45;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;


// }                            //why code did not worked?
                             //we did blunder , its wrong.
                             //swapping only happens in swap
                             //*passbyreference is not allowed.*
                             //but in main , actual container contains same value
                             //Method 1 to do it is passbyrefernce.
                             // -> change swap(int x , int y) to swap(int& x , int& y)


//Method 2 . BEFORE DOING METHOD 2 , STUDY TILL 9 DEREFERNCE OR WONT UNDERSTAND.
//more easy by pointers.
// go to 7 to understand address first then try to understand address.
// so main() and swap() dono me jo x hai wo alag hai
//jab hum unka address check krenge to different jagah stored value ayegi.
//jaise x ke andr value store ki ek address ek andr , waise hi ek address bi store ho skta hai.
//ab hum is address ko store kar sakte hai with help of pointers.

// now understand in 8pointers . 



#include <bits/stdc++.h>
using namespace std;
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;

}



//ana chahaiye , even if tough 

                            