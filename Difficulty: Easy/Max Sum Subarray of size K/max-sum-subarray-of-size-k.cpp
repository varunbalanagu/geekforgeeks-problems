class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+arr[i];
        }
        int m=-1;
        // cout << sum << " ";
        m=max(m,sum);
        // sum=0;
        for(int i=k;i<n;i++)
        {
            sum=sum-arr[i-k];
            // cout << sum;
            sum=sum+arr[i];
            // cout << sum << " ";
            m=max(m,sum);
        }
        return m;
        // code here
        
    }
};