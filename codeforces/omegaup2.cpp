#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

void solve() {
    int n;
    cin>>n;

    string s="ABCDEF";
    vector<int> v(6, 0);
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int> cnt(6, 0);
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            cnt[c-'A']++;
            v[c-'A']++;
        }

        for(int j= 0;j<6;j++){
            if(j){
              cout<<" ";
            }
            cout<<s[j]<<":"<<cnt[j];
        }
        cout<<endl;
    }
    cout<<"TOTAL:";
    for(int j=0;j<6;j++){
      cout<<" "<<s[j]<<":"<<v[j];
    }
        
    cout<<endl;
    return;
}

int32_t main() {
    fast_io;
   solve();
    return 0;
}