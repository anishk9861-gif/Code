//input a string and count total vowel inside it.


#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "Cow is an animal with four legs.";

    int n = s.length();   //.length() or .size
    int vowels = 0;
    for(int i = 0 ;i<n ; i++ ){
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
            vowels = vowels + 1 ;
        }

    }

    cout<<vowels;

}







