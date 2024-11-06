#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,x;
	    cin>>n>>x;
	    vector<long long> a(n);
	    vector<long long> b(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int cnt=0;
	    vector<long long> result;
	    for(int i=0;i<n;i++){
	        if(a[i]-b[i]>0){
	            cnt++;
	        }
	        else{
	             result.push_back(b[i]-a[i]+1);
	            
	        }
	       
	    }
	    sort(result.begin(),result.end());
	    int needmore=n/2 + 1 -cnt;
	    long long compare=0;
	    for(int i=0;i<needmore;i++){
	        compare+=result[i];
	        
	    }
	    
	    if(needmore<=0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        if(x>=compare){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	}
	    return 0;

}
