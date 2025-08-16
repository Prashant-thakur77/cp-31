#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<int> v(n);
   
    for(int i=0;i<n;i++){
      cin>>v[i];
      

    }
    if(n==2 || n==1){
      cout<<"yes"<<endl;
      return;
    }
    int no1=-1;
    int no2=-1;

    for(int i=0;i<n;i++){
      if(v[i]!=v[n-i-1]){
        no1=v[i];
        no2=v[n-i-1];
        break;

      }
    }
    if(no1==-1 && no2==-1){
      cout<<"yes"<<endl;
      return;
    }
    int j=n-1;
    int i=0;
    bool flag=true;
    while(i<j){
      if(v[i]==v[j]){
        i++;
        j--;
        continue;
      }
      else if(v[i]==no1){
        i++;
        continue;
      }
      else if(v[j]==no1){
        j--;
        continue;
      }
      if(v[i]!=v[j]){
        flag=false;
        break;
      }
      

    }
    if(flag){
      cout<<"yes"<<endl;
      return;
    }
    flag=true;
    int j1=n-1;
    int i1=0;
   
    while(i1<j1){
      if(v[i1]==v[j1]){
        i1++;
        j1--;
        continue;
      }
      else if(v[i1]==no2){
        i1++;
        continue;
      }
      else if(v[j1]==no2){
        j1--;
        continue;
      }
      if(v[i1]!=v[j1]){
        flag=false;
        break;
      }
      

    }
    if(flag){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return;
   

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}