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
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mini=1;
    int maxi=n;
    int low=0;
    int high=n-1;
    while(low<high){
        if(v[low]==mini || v[low]==maxi){
            if(v[low]==mini)mini++;
            else maxi--;
            low++;
            
            
        }
        else if(v[high]==maxi || v[high]==mini){
             if(v[high]==maxi)maxi--;
             else mini++;
            high--;
           
        }
        else break;
    }
    if(low>=high){
        cout<<-1<<endl;
    }
    else cout<<low+1<<" "<<high+1<<endl;
    return;
    
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}