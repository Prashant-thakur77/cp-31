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
    vector<vector<int>> v(n + 1);
    vector<int> c(n+1);
    for(int i=1;i<n+1;i++){
        int x,y;
        cin>>x>>y;
        if(x==-1){
            c[i]=y;
            
        }
        else{
            v[x].push_back(i);
         c[i]=y;

        }
        

    }
    vector<int> ans;
    for(int i=1;i<=n;i++){
        int size=v[i].size();
        if(c[i]==0)continue;
        else if(size==0){
            ans.push_back(i);
            continue;
        }
        int check=0;
        
        for(int j=0;j<size;j++){
            if(c[v[i][j]]==0){
                check=1;
                break;
            }



        }
        if(check==0){
            ans.push_back(i);
        }
    }
    if(ans.size()==0){
        cout<<-1<<endl;
        return;
    }
    sort(all(ans));
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}

int32_t main() {
     solve();
    return 0;
}