#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long k1,k2;
        cin>>k1>>k2;
        long long q1,q2;
        cin>>q1>>q2;
        vector<pair<int,int>> d={{a,b},{a,-b},{-a,b},{-a,-b},
                                {b,a},{b,-a},{-b,a},{-b,-a}};
        set <pair<int,int>> st1,st2;
        for(auto t:d){
            int x= k1+t.first;
            int y=k2+t.second;
            st1.insert(make_pair(x,y));
            x=q1 + t.first;
            y=q2+t.second;
            st2.insert(make_pair(x,y));
        }                        
        int ans=0;
        for(auto pos:st1){
            if(st2.find(pos)!=st1.end()) ans++;

        }
        cout<<ans<<endl;
    }
    return 0;
 }
       