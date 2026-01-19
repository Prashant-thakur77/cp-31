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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int cnt=0;
    int currdon1=0;
    int currdon0=0;
    int start=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        start=i;
        break;
      }
    }
    int end=n;
    for(int i=start;i<n;i++){
      if(s[i]=='0'){
        end=i;
        break;
      }
    }
    int start1=start;




    string sorted = s;
    sort(sorted.begin(), sorted.end());

    if (s == sorted) {
        cout << "Bob"<<endl;
        return;
    }

    vector<int> idx;
    for(int i = 0; i < n; ++i) {
        if(s[i] != sorted[i]) {
            idx.push_back(i + 1);
        }
    }
    cout<<"Alice"<<endl;
    cout<<idx.size()<<endl;
    for(int i=0;i<idx.size();i++){
      cout<<idx[i]<<" ";
    }
    cout<<endl;


}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}