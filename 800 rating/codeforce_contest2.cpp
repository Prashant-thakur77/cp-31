#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,t,w;
        cin>>s;
        n=s.size();
        t="x";
        w="y";
        int yes=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                yes=1;
                s.insert(i+1,t);
                break;
            }
        }
        
        if(yes==0) s.insert(0,t);
        cout<<s<<endl;
    }
    return 0;
}
