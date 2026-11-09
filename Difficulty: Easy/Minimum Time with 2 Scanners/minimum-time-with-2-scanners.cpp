class Solution {
  public:
    bool good(int mid ,int s1 , int s2,int n){
        int sum=0;
        // checks1=false;
        long long  pro1=1,pro2=1,pro3=1;
        // int mini=min(s1,s2);
         pro1=mid/s1;
         pro2=mid/s2;
         if(pro1+pro2>=n) return true;
        return false;
    }
    int minTime(int n, int s1, int s2) {
        // code here
        int ma=max(s1,s2);
        int ans =0;
        int low =0 , high =ma*n; 
        while(low <= high){
            int mid=(low+high)/2;
            if(good(mid,s1,s2,n)){
                ans=mid;
                high=mid-1;
                // cout<<ans<<endl;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};