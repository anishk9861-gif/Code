#include <iostream>
using namespace std;
int main(){
    // i have to store 5 integers
    int arr[5]; //declaration  //ye 5 dabbe banadega , 5 values store.
                // x ke andar 5 dabbe


                // arr[0] = 1 ;    //first index me 1 value hogi
                // arr[1] = 2 ;    //set but lmba way , har ek ko mehnat se dalna
                // arr[2]= 6;      //can also be made short using for loop
                // arr[3] = -2;    
                // arr[4] = 10 ;

                cout<<"Enter array elements : ";
                for(int i = 0 ; i<= 4 ; i++){
                    cin>>arr[i];
                }

            //   cout<<arr[0]<<" ";    //run krne ka lmba trika
            //   cout<<arr[1]<<" ";
            //   cout<<arr[2]<<" ";
            //   cout<<arr[3]<<" ";
            //   cout<<arr[4]<<" ";

              //just use for loop and print all easily

              arr[0] = 1000000;

              for(int i = 0 ; i<= 4 ; i++){
                cout<<arr[i]<<endl;
              }


              
             //to change a element inside array arr , just simply make it equate.
             // as we run code , still first element will remain 1000000 as we assigned it after input.
             



}