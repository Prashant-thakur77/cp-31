#include<bits/stdc++.h>
using namespace std;
 int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        
        if(n==0) return 0;
        int longest=1;
        
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }

int main(){
    int t;
    cin>>t;
    

    while (t--){
      int n;
      cin>>n;
      vector<int> nums(n);
      for(int i=0;i<n;i++){
        cin>>nums[i];
      }
      int x=longestConsecutive(nums);
      cout<<x<<endl;
    }
    return 0;
   
}