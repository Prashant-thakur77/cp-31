#include<bits/stdc++.h>
using namespace std;
int count(string s){
  unordered_set<char> st(s.begin(),s.end());
  return st.size();

}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int maxi=0;
    
    for(int i=1;i<n;i++){
      string a=s.substr(0,i);
      string b=s.substr(i);
      int cnt1=count(a);
      int cnt2=count(b);
      maxi=max(maxi,cnt1+cnt2);
      

    }
    cout<<maxi<<endl;
  }
  return 0;
}
