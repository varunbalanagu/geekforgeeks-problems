class Solution {
  public:
    int countSubarrays(vector<int>& nums, int k) {
        // code here
        int l=nums.size();
        vector<int>prefix(l);
        int c=0;
        if(nums[0]%2!=0)
        {
            prefix[0]=1;
        }
        else
        {
            prefix[0]=0;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            prefix[i]=prefix[i-1]+1;
            else
            prefix[i]=prefix[i-1];
        }
        map<int,int>mp;
        mp[0]++;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           // cout<<prefix[i];
            int x=prefix[i];
            if(mp.find(x-k)!=mp.end())
            {
                sum=sum+mp[x-k];
            }
            mp[x]++;
        }
        return sum;
    }
};