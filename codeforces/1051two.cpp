#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve(){
    
        int n,k;cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int>b(k);
        for(int i=0;i<k;i++)cin>>b[i];

        sort(a.begin(),a.end(),greater<long long>());
        sort(all(b));

        long long total=accumulate(a.begin(),a.end(),0LL);
        long long d=0;int no=0,ind=0;

        for(int i=0;i<n;i++){
            if(ind<k && b[ind]<=no+1){
                d+=a[i];
                no-=b[ind]-1;
                ind++;
            }else no++;
        }
        cout<<total-d<<endl;
        return;
    
    
}
int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
