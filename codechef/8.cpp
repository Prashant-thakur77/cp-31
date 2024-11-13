#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    string s,t;
	    cin>>s>>t;
	    long long a_in_t=0;
	    long long a_in_s=0;
	    long long first_a=-1;
	    long long first_b=-1;
	    for(int i=0;i<n;i++){
	        if(s[i]=='a') {
	            a_in_s++;
	        }
	    
	        if(a_in_s==1 && first_a==-1) first_a=i;
	        
	    }
	    for(int i=0;i<m;i++){
	        if(t[i]=='a') a_in_t++;
	  
	         if(a_in_t==1 && first_b==-1) first_b=i;
	    }
	   // cout<<a_in_t<<" "<<a_in_s<<" "<<first_b<<" "<<first_a<<endl;
	    if(s==t){
	        cout<<"yes"<<endl;
	    }
	    else if(a_in_t!=0 && a_in_t==a_in_s && first_b==first_a){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	    
	    
	    
	}

}
