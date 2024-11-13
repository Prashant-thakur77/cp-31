#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        
	    }
	    if(v[0]==0 && v[n-1]==0){
	        cout<<2*n-1<<endl;
	    }
	    else if(v[0]==0 && v[n-1]==1){
	        cout<<2*n-2<<endl;
	    }
	    else if(v[0]==1 && v[n-1]==0){
	        cout<<2*n-1<<endl;
	    }
	    else if(v[0]==1 && v[n-1]==1){
	        cout<<2*n-1<<endl;
	    }
	    
	}

}
