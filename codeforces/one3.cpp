#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()

bool func(int k, vector<int>& a, vector<int>& vec, int mini, int maxi, int n) {
    ll low=(ll)maxi-k;
    ll high=(ll)mini+k;
    if (low>=high) return true;
    for (int i=0;i<n;i++) {
        if (a[i]>low && a[i]<high) {
            if (a[i]!=vec[i]) return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    bool ok=true;
    int i=0;
    while(ok && i<n-1){
        ok=(a[i]<=a[i+1]);
        i++;
    }
    
    if(ok){
        cout<<-1<< endl;
        return;
    }
    vector<int> vec=a;
    sort(all(vec));
    int l=0, r=1e9;
    int ans=0;
    
    while(l<=r){
        int mid=(l +r)>>1;
        if(func(mid,a,vec,mini,maxi,n)){
            ans=mid;
            l=mid+1;
        } 
        else{
            r=mid-1;
        }
    }

    
    cout << ans << endl;
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}