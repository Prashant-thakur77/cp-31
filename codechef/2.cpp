#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n%2==0){
	        cout<<(n/2)-1<<endl;
	        
	    }
	    else{
	        if(x%2==0){
	            cout<<(n/2)-1<<endl;
	        }
	        else{
	            cout<<(n/2)<<endl;
	        }
	        
	    }
	}
	return 0;

}
