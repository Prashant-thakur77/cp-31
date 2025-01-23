 #include<bits/stdc++.h>
 using namespace std;
 int main(){
  int n;
  cin>>n;
  int target;
  cin>>target;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  searchRange(v,target);
 }

 vector<int> searchRange(vector<int>& nums, int target) {
        int firstt=first(nums,nums.size(),target);
        if(firstt==-1)return {-1,-1};
        int lastt=last(nums,nums.size(),target);
        return {firstt,lastt};

        
        
    }
    
    int first(vector<int>& arr,int n,int target){
        int low=0;
        int high=n-1;
        int firstt=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                firstt=mid;
                high=mid-1;
            }
            else if(arr[mid]>target) high=mid-1;
            else low=mid+1;

        }
        return firstt;

        
    }
    int last(vector<int>& arr,int n,int target){
        int low=0;
        int high=n-1;
        int lastt=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                lastt=mid;
                low=mid+1;
            }
            else if(arr[mid]>target) high=mid-1;
            else low=mid+1;

        }
        return lastt;

        
    }