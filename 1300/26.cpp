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
    string s;
    cin>>s;
    int n=s.size();
    vector<int> presum0(n);
    int sum=0;
    for(int i=0;i<n;i++){
      if(s[i]=='o')sum++;
      presum0[i]=sum;

    }
    vector<pair<int,int>> pr;
    int cnt=0;
    for(int i=0;i<n-1;i++){
      if(s[i]=='v')cnt++;
      else cnt=0;
      if(cnt>=2 && s[i+1]=='o'){
        pr.push_back({cnt,i});
        
        cnt=0;
      }
      

    }
    if(cnt>=1 && s[n-1]=='v' ){
      pr.push_back({cnt+1,n-1});
    }
  
   
    int k=pr.size();
   
    

    vector<long long> sufA(k+1, 0), sufAB(k+1, 0);

for (int i = k-1; i >= 0; i--) {
    int A = pr[i].first - 1;
    int B = presum0[pr[i].second];
    sufA[i]  = sufA[i+1] + A;
    sufAB[i] = sufAB[i+1] + 1LL * A * B;
}

long long summ = 0;
for (int i = 0; i < k; i++) {
    int no  = pr[i].first - 1;
    int no2 = presum0[pr[i].second];
    long long innerSum = sufAB[i+1] - 1LL * no2 * sufA[i+1];
    summ += 1LL * no * innerSum;
}

    cout<<summ<<endl;
    return;
    

    
}

int32_t main() {
     solve();
    return 0;
}