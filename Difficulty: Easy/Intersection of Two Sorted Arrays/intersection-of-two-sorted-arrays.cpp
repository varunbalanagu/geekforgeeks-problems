class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        vector<int>ans;
        for(int j=0;j<m;j++)
        {
            if(mp[b[j]]>=1)
            {
                ans.push_back(b[j]);
                mp[b[j]]=0;
            }
        }
        return ans;
    }
};