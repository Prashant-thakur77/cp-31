#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && el2!=nums[i]){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0 && el1!=nums[i]){
                cnt2=1;
                el2=nums[i];
            }
            else if(el1==nums[i]) cnt1++;
            else if(el2==nums[i] ) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> v;
        cnt1=0;cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(el1==nums[i])cnt1++;
            if(el2==nums[i])cnt2++;
        }
        if(cnt1>nums.size()/3) v.push_back(el1);
          if(cnt2>nums.size()/3) v.push_back(el2);
          sort(v.begin(),v.end());
         // cout<<v.size()/3<<endl;
          return v;
          
        
    }
int main(){
    int t;
    
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(auto it=v.begin();it!=v.end();it++){
        cin>>*it;
      }
      vector<int> ans=majorityElement(v);
      for(auto& it:ans){
        cout<<it<<" ";
      }
      cout<<endl;
      
            

        
        
        
        
    }
    return 0;
}
