#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    

    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a,b,c,d;
        a=0;
        b=0;
        c=0;
        d=0;
        for(int i=0;i<4*n;i++){
            if(s[i]=='A') {
                if(a<n) a++;
            }
            else if(s[i]=='B') {
                if(b<n) b++;
            }
            else if(s[i]=='C') {
                if(c<n) c++;
            }
            else if(s[i]=='D') {
                if(d<n) d++;
            }
        }
        int total=a+b+c+d;
        cout<<total<<endl;
    }
    return 0;
}