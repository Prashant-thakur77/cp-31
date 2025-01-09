#include<bits/stdc++.h>
using namespace std;
int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(words[i].find(pref)==0) cnt++;
        }
        return cnt;
        
    }
int main(){
    int t;
    
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<string> words(n);
      for(int i=0;i<n;i++){
        cin>>words[i];
      }
      string pref;
      cin>>pref;
      int ans=prefixCount(words,pref);
      cout<<ans<<endl;
    }
}
        
        
        
                

        
        