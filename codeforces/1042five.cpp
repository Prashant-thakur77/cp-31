#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mod 1000000007

void solve() {
    // Your code here
    int n;
    cin>>n;
    vector<unsigned int> a(n);
    vector<unsigned int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
   for(int i=0;i<n;i++){
        cin>>b[i];
    } 

    if(a[n-1]!=b[n-1]){
        cout<<"no"<<endl;
        return;
    }

    vector<unsigned int> ans(n - 1);
    for(int i=0;i<n-1;i++){
        ans[i]=a[i]^b[i];
    }

    bool flag=true;
    for(int i=0;i<n- 1 && flag; ) {
        if(ans[i]==0){
            i++;
            continue;
        }
        int no=i;
        while(true) {
            if(ans[no]==a[no + 1]){
                i=no+ 1;
                break;
            }
            if(no==n - 2) {
                flag=false;
                break;
            }
            if(ans[no+1]!=(ans[no]^a[no+1])) {
                flag= false;
                break;
            }
            no++;
        }
    }

    if(flag){
      cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return;
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}