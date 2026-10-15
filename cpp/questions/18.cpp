//WAP to print all ASCII values and their equivalent characters of 26 alphabets using a while loop.


#include <bits/stdc++.h>
using namespace std;
int main()
{
             // 65-A ............90-Z

             int n = 65; 
             for(n ; n<=90 ; n++){

                cout<<"ASCII values : "<<n<<"   ";
                cout<<"Equivalent character : "<<char(n)<<endl;
             }

}

