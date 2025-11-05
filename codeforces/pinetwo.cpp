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
    vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
      string m;
      cin>>m;
      for(int j=0;j<n;j++){
        if(m[j]=='.'){
          v[i][j]=0;
        }
        else v[i][j]=1;
      }
    }
    
    
    if(n<=2){
      cout<<"yes"<<endl;
    }
    else{
      for(int i=0;i<n;i++){
        
        bool chek=false;
        int cnt=0;
        for(int j=0;j<n;j++){
           
          if(v[i][j]==1 && (chek==false || v[i][j-1]==1) && cnt<2){
            chek=true;
            cnt++;
            // cout<<"cnt  "<<cnt<<endl;
          }
          else if(v[i][j]==1){
           // cout<<i<<" "<<j<<endl;
            cout<<"no"<<endl;
            //cout<<"yes1"<<endl;
            return;
          }
        }
      }
      for(int i=0;i<n;i++){
        
        bool chek1=false;
        int cnt=0;
        for(int j=0;j<n;j++){
          
          if(v[j][i]==1 && (chek1==false || v[j-1][i]==1) && cnt<2){
            chek1=true;
            cnt++;
          }
          else if(v[j][i]==1){
            //cout<<i<<" "<<j<<endl;
            cout<<"no"<<endl;
            
            return;
          }
        }
      }
      cout<<"yes"<<endl;

    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}