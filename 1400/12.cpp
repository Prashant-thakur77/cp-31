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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int evenno1=0;
    int evenno2=0;
    int oddno1=0;
    int oddno2=0;
    int five=0;
    for(int i=0;i<n;i++){
      if(v[i]%5==0){
        five=1;
        v[i]=v[i]+v[i]%10;
        
      }
      
      
    }
    //cout<<"evenno1 "<<evenno1<<endl;
   //cout<<"evenno2 "<<evenno2<<endl;
    //cout<<"oddno1 "<<oddno1<<endl;
    //cout<<"oddno2 "<<oddno2<<endl;
    if(five==1){
      set<int> st;
      for(int i=0;i<n;i++){
        st.insert(v[i]);
      }
      if(st.size()==1){
        cout<<"yes"<<endl;
      }
      
      else {
        cout<<"no"<<endl;
        return;

      }
    }
    else{
      int flag=0;
      int flag2=0;
      for(int i=0;i<n;i++){
        ll x=v[i];
        while(x%10!=2){
          x=x+x%10;
        }
        if(x%20 ==2){
          flag=true;
        }
        else flag2=true;
        
      }
      cout<<((flag & flag2)?"no":"yes")<<endl;
      return;
    }
    

    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}