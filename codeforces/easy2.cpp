#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> freq(26,0);
        for(char c:s)freq[c-'a']++;

        bool ok=false;
        for(int i=0;i<26;i++){
            if(freq[i]>=3)ok=true;
            else if(freq[i]==2&&(s.front()-'a'!=i||s.back()-'a'!=i))
                ok=true;
        }

        cout<<(ok?"Yes":"No")<<endl;
    }
    return 0;
}
