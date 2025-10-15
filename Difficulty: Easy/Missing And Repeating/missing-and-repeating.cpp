class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n=arr.size();
        vector<int>sol;
        map<int,int>ans;
        int max=-1;
        for(int i=0;i<n;i++)
        {
           
           ans[arr[i]]++;
        }
        for(int j=1;j<=n;j++)
        {
           
             if(ans[j]==2)
            {
                sol.push_back(j);
            }
        }
        for(int j=1;j<=n;j++)
        {
           
             if(ans[j]==0)
            {
                sol.push_back(j);
            }
        }
        return sol;
        // code here
    }
};