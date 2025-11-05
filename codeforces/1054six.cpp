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
    ll h,d;
    cin>>h>>d;
    double sum=0;
    ll steps=0;
    int cnt=0;
    if(h<3)steps++;
    
   
  while(h>3){
      ll i=0;
   while(sum<h){
      i++;

   
      sum=i*((double)(i+1)/2.0);
      
      
    }
    i--;
    h=h-i*((double)(i+1)/2.0);
    steps+=i;
    cnt+=i;

    }
    steps+=(d-cnt)*2-1;
    cout<<steps<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}