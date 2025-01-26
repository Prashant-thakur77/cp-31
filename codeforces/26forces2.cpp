#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    int maxi=0;
    int flag=0;
    for(int i=0;i<n;i++){
      maxi=n-1-i;
      maxi=max(maxi,i-0);
      //cout<<"maxi"<<maxi<<endl;
      if(v[i]<=maxi*2){
        flag=1;
        break;
      }
      

    }
    if(flag==1){
      cout<<"no"<<endl;


    }
    else{
      cout<<"yes"<<endl;
    }

    
	}
	    return 0;

}
