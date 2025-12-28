#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define mod 1000000007

ll rev(ll x){
    ll r=0;
    while(x){
        r=r*10+x%10;
        x/=10;
    }
    return r;
}

bool palin(ll x){
    return rev(x)==x;
}

static int dp[50000][500];

int main(){
    fast_io;

    const int k=50000;
    const int l=500;

    vector<int> pal;
    pal.push_back(0);
    for(int i=0;i<k;i++){
        if(palin(i)) pal.push_back(i);
    }

    for(int j=1;j<l;j++) dp[0][j]=1;

    for(int i=1;i<k;i++){
        dp[i][0]=0;
        for(int j=1;j<l;j++){
            if(pal[j]<=i)
                dp[i][j]=(dp[i][j-1]+dp[i-pal[j]][j])%mod;
            else
                dp[i][j]=dp[i][j-1];
        }
    }

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<dp[n][l-1]<<'\n';
    }
    return 0;
}
