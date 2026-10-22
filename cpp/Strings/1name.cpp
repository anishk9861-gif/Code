// #include <iostream>
// using namespace std;
// int main(){
//     //print name raghav :

//     char arr[6]= {'R','a','g','h','a','v'};

//     for(int i = 0 ; i<6 ; i++){
//         cout<<arr[i];
//     }

//     //OR

//     cout<<endl<<"Raghav";
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    string x = "Raghav is a Teacher";

    cout<<x<<endl;


    string y;
    cout<<"Enter Name : ";
    cin>>y;
    
    cout<<y;
    cout<<sizeof(y);

}


//if we use cin to take input of a string and then output it , then it dont work properly .

//like if i input "i am doom" , it will only store "i" , becausse of space.
//if i input "iamdoom" , it will output "iamdoom".

//So how to fix it?
//Solution : in next .cpp


