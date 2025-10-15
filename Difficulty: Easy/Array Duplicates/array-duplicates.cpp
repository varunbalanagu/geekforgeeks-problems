class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        map<int,int>mp;
        int m=-1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            m=max(arr[i],m);
        }
        vector<int>ans;
        for(int i=0;i<=m;i++)
        {
            if(mp[i]>1)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};