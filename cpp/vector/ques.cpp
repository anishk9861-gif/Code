#include <bits/stdc++.h>
using namespace std;
  
    void solve() {
       vector<int> v;
       while(true){
        int x;cin>>x;
        if (x==-1)break;

        v.push_back(x);
       }
       int n;
       int h = v.size();
       for( int i = 0; i<v.size();i++){
        v[i]+=n;
       }

       cout<<n<<endl;
       for(int i=v.size();i>=0;i--){
        cout<<v[i]<<endl;
       }
    }

    int32_t main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t=1;
        cin>>t;
        while(t--){
            solve();
        }
    }