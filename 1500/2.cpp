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
    sort(all(v));
    ll start=0;
    ll end=n-1;
    ll cnt=0;
    ll x=0;
    while(start<=end){
      //cout<<"x "<<x<<endl;
      if(start==end-1 && x!=0){
       // cout<<"hello  "<<x<<"  "<<v[start]<<"  "<<v[end]<<endl;
        ll k=v[start];
        ll m=v[end];
        ll no=m-x;
        if(no<k){
          v[start]-=no;
          cnt+=no;
          x=0;
          cnt++;
          end--;
        }
        else if(no>k){
          
          cnt+=v[start];
          x+=v[start];
          start++;


        }
        else{
          v[start]-=no;
          cnt+=no;
          cnt++;
          end--;
          break;

        }
        

      }
      if(start==end){
        if(x>=v[start]){
          cnt++;
          break;
        }
        int m=v[start];
        if(m==1){
          cnt++;
          break;
        }
        m=m-x;
        if(m==1){
          cnt+=2;
          break;
        }
        
        cnt+=((m+1)/2 + 1);
        break;


      }
      if(v[end]<=x){
        cnt++;
        x-=v[end];
        end--;
        //cout<<"x     "<<v[end]<<endl;

      }
      else if(v[start]>0){
        
        cnt+=v[start];
        x+=v[start];
        v[start]=0;
        start++;


      }

    }
    cout<<cnt<<endl;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}