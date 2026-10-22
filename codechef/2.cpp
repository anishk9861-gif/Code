#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	//I AM DRRR DOOOOOOOOOOOMMMMMMMM;
	
	int t;
	cin>>t;
	for( int i = 1 ; i<= t  ; i++){
	    int count = 0;
	    int n ; 
	    cin>>n;
	    
	    int a[n];
	    
	    for(int j = 0 ; j<= n-1 ; j++){
	        
	        cin>>a[j];
	        
	        int INT_MIN , INT_MAX;
	        
	       int mx = max(INT_MIN , a[j]);
	       
	       int mn = min(INT_MAX , a[j]); 
	       
	        
	        if (a[j]!=mx || a[j]!=mn ){
	            count = count + 1; }
	        
	    }
	    
	    
	    cout<<count<<endl;
	
	    
	    
	}

}
