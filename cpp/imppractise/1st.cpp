#include <bits/stdc++.h>
using namespace std;
int main(){
int x = 3 , y , z;

y = x = 10 ;
z = x < 10;

cout<<x<<" "<<y<<" "<<z;


}

//heirrachy of x=y=z is always from *RIGHT TO LEFT*

//SO in first statement 
// x first becomes 10 , then y becomes equal to x , so y = 10 
// and then x<10 , its not assigning , ye to ek comparison,checking hai 
// if we are saying that x<10 so it should be true or false 
// as our x = 10 so x<10 is false here
// And in programming language, true and false have assigned number
// TRUE = 1 , FALSE = 0 
// so our z is equal to 0 because x<10 condition is false and it assigns 0 value to z 

