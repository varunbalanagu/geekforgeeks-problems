class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
        // code here
        int n = arr.size(),sum=0;
        for(int i =0 ; i < m ;i++){
            sum=sum+arr[i];
        }
        int ma =INT_MIN;
        ma=max(ma,sum);
        for(int i =m ;i < n+m-1 ;i++){
            sum=sum-arr[(i-m)%n];
            sum=sum+arr[i%n];
            ma=max(ma,sum);
        }
        return ma;
    }
};