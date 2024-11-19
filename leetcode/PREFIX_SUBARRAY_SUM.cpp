#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int preSum=0;
        int cnt=0;
        int n=nums.size();
        mp[0]++;
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            if(mp.find(preSum-k)!=mp.end()) cnt=cnt+mp[preSum-k];
            mp[preSum]++;

        }
        return cnt;
}
int main(){
  int n, k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<subarraySum(v,k)<<endl;
  

    
}
        
        
        
                

        
        