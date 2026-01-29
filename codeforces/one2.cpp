#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int cnt = 0;
    int ind1 = -1;
    int ind2 = -1;
    
    for(int i=0; i<n;i++){
        if(s[i]=='1'){
            cnt++;
            if(ind1==-1) ind1 = i;
            ind2 = i;
        }
    }
    ll ans = 0;
    if(cnt==0){
        ans=(n +2)/3;
        cout <<ans<< endl;
        return;
    }
    ans=cnt;
    int cnt2=ind1;
    ans+=(cnt2+1)/3;
    int cnt3 =n-1-ind2;
    ans+=(cnt3+1)/3;
    int prev=ind1;
    for(int i=ind1+1;i<=ind2;i++){
        if(s[i]=='1'){
            int gap=i-prev-1;
            ans+=gap/3;
            prev=i;
        }
    }
    
    cout <<ans<< endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}