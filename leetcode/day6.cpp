#include<bits/stdc++.h>
using namespace std;
vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        unordered_set<string> ans1;
        vector<string> ans;
        for(int i=0;i<n;i++){
            string t=words[i];
            for(int j=0;j<n;j++){
                if(j!=i){
                    
                    size_t txt=t.find(words[j]);
                    if(txt!=string::npos){
                        ans1.insert(words[j]);

                    }
                }
            }
        }
        for(auto it:ans1){
            cout<<it;
        }
        
        cout<<endl;
        return ans;
        
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
      stringMatching(words);

    }
     
}
