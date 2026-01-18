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
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    vector<int> set1;
    vector<int> set2;
    for(int i=0;i<n;i++){
      if(i%2==0){
        set1.push_back(v[i]);
      }
      else set2.push_back(v[i]);
    }
    sort(all(v));
    sort(all(set1));
    sort(all(set2));
    ll check=0;
    int l=0;
    int m=0;
    for(int i=0;i<n;i++){
      if(i%2==0){
        if(v[i]!=set1[l]){
          check=1;
          break;
        }
        else l++;
      }
      else{
        if(v[i]!=set2[m]){
          check=1;
          break;
        }
        else m++;

      }
    }
    int j=0;
    int o=0;
    int check2=0;
    for(int i=0;i<n;i++){
      if(i%2==0){
        if(v[i]!=set2[j]){
          check2=1;
          break;
        }
        else j++;
      }
      else{
        if(v[i]!=set1[o]){
          check2=1;
          break;
        }
        else o++;

      }
    }
    if(check==1 && check2==1){
      cout<<"no"<<endl;
    }
    else{
      cout<<"yes"<<endl;
    }
}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}