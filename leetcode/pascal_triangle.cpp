#include<bits/stdc++.h>
using namespace std;
  vector<int> GenerateRows(int row){
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            ansRow.push_back(ans);

        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(GenerateRows(i));
        }
        return ans;
        
    }

int main(){
    int t;
    
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      generate(n);
      
    }
    return 0;
}
        
        
        
                

        
        