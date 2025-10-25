class Solution {
  public:
    int minOperations(vector<int>& arr) {
        // code here
        priority_queue<double>pq;
        double sum=0;
        for(int i=0;i<arr.size();i++)
        {
            pq.push(arr[i]);
            sum=sum+arr[i];
        }
        double res=sum/2.0;
        int c=0;
        while(sum>res)
        {
            double k=pq.top();
            pq.pop();
            
            double half=k/2.0;
             sum=sum-half;
            pq.push(half);
           
            c++;
        }
        return c;
    }
};