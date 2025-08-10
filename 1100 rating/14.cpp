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
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    int start=0;
    int end=n-1;
    bool flag=true;
    bool flag2=true;
    while((start<end) &&(flag || flag2)){
      if(a[start]==b[start]){
        start++;
      }
      else flag=false;
      if(a[end]==b[end]){
        end--;
        
      }
      else flag2=false;
   
    }
    //cout<<"start"<<start<<" "<<"end"<<end<<endl;
    if(start==end){
      cout<<1<<" "<<n<<endl;
      return;
    }
    bool flag3=true;
    bool flag4=true;
    while((start>0 ||end<n-1)&&(flag3 || flag4)){
      if(b[start-1]<=b[start] && start>0){
        start--;
      }
      else flag3=false;
      if((b[end]<=b[end+1])&& end<n-1){
        end++;
      }
      else flag4=false;
    }
    cout<<start+1<<" "<<end+1<<endl;
    return;
    
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}