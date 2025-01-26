#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    string s;
    cin>>s;
    int cnt=0;
    int n=s.length();
    for(int i=0;i<n;i++){
      if(s[i]=='1')cnt++;

    }
    cout<<cnt<<endl;
	    
	}
	    return 0;

}
