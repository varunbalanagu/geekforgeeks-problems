class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        map<int,int>ans;
        vector<int>sol;
        vector<int>res;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            res.push_back(arr[i]);
        }
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(ans[res[i]]==0)
            {
                c++;
            }
            ans[res[i]]++;
        }
        sol.push_back(c);
        // cout<<sol[0];
        for(int i=k;i<n;i++)
        {
            ans[res[i-k]]--;
            if(ans[res[i-k]]==0)
            c--;
            if(ans[res[i]]==0)
            c++;
            ans[res[i]]++;
            sol.push_back(c);
        }
        return sol;
    }
};