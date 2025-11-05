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
    deque<int> dq;
    for (int i = 1; i <= n; ++i) {
      dq.push_back(i);
    }

    bool check=true;

    while(dq.size() > 1){
        deque<int> k;
        if(check){
            for (int i = 0; i < dq.size();i++)
                if (i%2!=0) k.push_back(dq[i]); 
        } 
        else{
            for(int i=dq.size()-1;i>=0;i--){
              if((dq.size()-1-i)%2 ==1) k.push_front(dq[i]);

            }
             
        }
        dq = move(k);
        check = !check;
    }
   cout<<dq.front()<<endl;

    
    

}

int32_t main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}