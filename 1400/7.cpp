#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntopen=0;
    int cntclose=0;
    for(int i=0;i<n;i++){
      if(s[i]=='(')cntopen++;
      else cntclose++;

    }
    if(cntopen!=cntclose){
      cout<<-1<<endl;
      return;
    }
    int start=0;
    bool hm=false;
    bool hm2=false;
    stack<pair<char,int>> st;
    vector<int> w(n,0);
    while(start<n){
      if(s[start]=='('){
        st.push({'(',start});
        start++;
      }
      else if(st.empty()){
        hm2=true;
        start++;
      }
      else{
        w[start]=1;
        w[st.top().second]=1;
        hm=true;
        st.pop();
        start++;

      }
    }
    int no=1;
    if(hm==false){
      cout<<1<<endl;
      for(int i=0;i<n;i++){
        cout<<1<<" ";
      }
      cout<<endl;
      return;
    }
    if(hm==true && hm2==true){
      no=2;

      
    }
    int start1=0;
    stack<pair<char,int>> st1;
    while(start1<n){
      if(s[start1]==')'){
        st1.push({')',start1});
        start1++;
      }
      else if(st1.empty()){
        start1++;
      }
      else{
        w[start1]=no;
        w[st1.top().second]=no;
        st1.pop();
        start1++;

      }
    }
    int j=0;
    for(int i=1;i<n;i++){
      if(w[i]!=w[i-1]){
        j=1;

      }
    }
    if(j==0){
      cout<<1<<endl;
      for(int i=0;i<n;i++){
        cout<<1<<" ";
      }
      cout<<endl;
      return;

    }

    cout<<no<<endl;
    for(int i=0;i<n;i++){
      cout<<w[i]<<" ";
    }
    cout<<endl;
    return;

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}