#include <iostream>
using namespace std;
int main(){

    string s = "raghav";    //if i hover over raghav , i will see char 7 . because in last a null special character '/0' is always stroed.  Its ascii value is 0. that null character is always here but ignored when we use .length .it tells where string is ending.
    cout<<s.length();      // x.length()   it is a built in function
                           //             where x is string name



   char ch ='\0';     //checking ascii value.

   cout<<endl<<int(ch);




}



