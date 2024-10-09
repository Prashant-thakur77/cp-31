#include<bits/stdc++.h>
using namespace std;

int ops(string& last, string& num){
  int x=last[0];
  int y=last[1];

  int steps=0;
  int j=num.length()-1;
  while(j>0 && num[j]!=y){
    steps++;
    j--;
  }
  int i=j-1;

  while(i>0 && num[i]!=x){
    i--;
    steps++;
  }
  return steps;


}

int main(){
    int t;
    cin>>t;
    

    while (t--){
      long long n;
      cin>>n;
      string s=to_string(n);
      vector<string> digits={"00","50","75","25"};
      int ans=INT_MAX;
      for(auto digit:digits){
        int mini=ops(digit,s);
         ans=min(mini,ans);

      }
      cout<<ans<<endl;

       
    }
    return 90;
}