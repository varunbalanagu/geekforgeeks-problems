class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<int>prefix(n,0);
        int sum=0;
        int ma=0;
        map<int,int>mp;
        mp[0]=-1;
        for(int i = 0; i < n ; i++){
            sum=sum+arr[i];
            int rem=sum%k;
            if(rem < 0) rem+=k;
            if(mp.find(rem)!=mp.end()) ma=max(ma, abs(i-mp[rem]));
            else 
            mp[rem]=i;
        } 
        return ma;
        
    }
};