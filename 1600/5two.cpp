#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
bool check(int no,string &s,string &str ){
    int l=str.size();
    int i=0;
    while(i<l && str[i]==s[no+i])i++;
    int j=i;
    while(j<l && str[j]==s[no+j+1])j++;
    return j==l;
}

void solve() {
    // Your code here
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==0){
      cout<<"NOT POSSIBLE"<<endl;
      return;
    }
    string m=s.substr(0,n/2);
    string l=s.substr(n/2+1,n/2);
    int no=n/2;
    int start=0;
    int chn=0;
    bool one=check(no,s,m);
    bool two=check(0,s,l);
    if(one && two){
      if(m==l){
        cout<<m<<endl;
      }
      else{
        cout<<"NOT UNIQUE"<<endl;
      }
    }
    else if(one){
      cout<<m<<endl;
    }
    else if(two){
      cout<<l<<endl;
    }
    else{
      cout<<"NOT POSSIBLE"<<endl;
    }
   
}

int32_t main() {
    solve();
    return 0;
}