class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int len=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                len++;
                continue;
            }
            else
            {
                // cout<<len<<" ";
                sum+=((len+1)*(len))/2;
                // cout<<sum<<endl;
                len=0;
            }
        }
        // cout<<len;
        if(len!=0)
        sum+=((len)*(len+1))/2;
        return sum;
    }
};
