#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    
    float t ;
    cin>>t;
    
    for( int i = 1 ; i<= t ; i++ ){
        float a,b;
        cin>>a>>b;
        
        float a1 , a2;
        a1 = 10*10;
        a2 = 15*15;
        
        float x = a1/a , y = a2/b ;
        if(x>y) cout<<"small"<<endl;
        if(y>x) cout<<"large"<<endl;
        else cout<<"equal"<<endl;
    }
}