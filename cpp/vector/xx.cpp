#include <bits/stdc++.h>
using namespace std;
signed main(){
    vector<int> v = {5,4,2,3,1,5};

    for(int &x : v){
        x=5;
    }


for(int x : v) cout<<x<<" ";

}


