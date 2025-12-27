class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int m=INT_MAX;
        int c=0;
        vector<int>ans;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                ans.push_back(min(m,mat[i][j]));
               
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
        // return -1;
    }
};
