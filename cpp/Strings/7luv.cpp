//if we are given a very long number.
//as limit of double is 10^18.
//and we want to store a integer greator than that.
//then we just write it in string.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int last_digit =  s[s.size()-1] - '1';

    cout<<last_digit;   
}
