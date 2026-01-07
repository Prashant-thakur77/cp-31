#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007


bool possible(int d, int n, int m, int k) {
    if (d==0)return true;
    

    int low = max(0, d - (n - k));
    int high = min(d, k - 1);
    if (low>high) return false;

    int t1 =2*d-m-1;
    int t2 =m+1-d;
    int left  =max(low,t1);
    int right =min(high,t2);

    return left <= right;

}

void solve() {
    int n,m,k;
    cin >>n>>m>>k;

    int low=0;
    int high=min(n-1,m);
    int ans=0;
    if(ans==1){
      cout<<ans<<endl;
      return;
    }

    while (low<=high) {
        int mid=(low+high)/2;
        if(mid==-1){
          int b=mid+1;
        }

        if(possible(mid,n,m,k)) {
            ans= mid;
            low = mid+1;
        } 
        else{
            high =mid-1;
        }
    }
    ans++;

    cout<<ans<<endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
