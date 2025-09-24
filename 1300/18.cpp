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
   
}

int32_t main() {
      ll n;
    cin>>n;
    if(n%2==0){
      cout<<((n/2)+1)*((n/2)+1)<<endl;
    }
    else{
      cout<<2*((n/2)+1)*((n/2)+2)<<endl;
    }
    return 0;
}