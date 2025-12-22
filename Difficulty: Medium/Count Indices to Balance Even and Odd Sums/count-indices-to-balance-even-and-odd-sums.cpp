class Solution {
  public:
    int cntWays(vector<int>& arr) {
        int n=arr.size();
        vector<int>Even_prefix(n,0);
        vector<int>Odd_prefix(n,0);
        //  int j=0;
        // Even_prefix[0]=arr[0];
        // Odd_prefix[0]=0;
        // j++;
        for(int i=0;i<n;i++)
        {
            if(i>0){
            Even_prefix[i]=Even_prefix[i-1];
            Odd_prefix[i]=Odd_prefix[i-1];
            }
            if(i%2==0)
            {
            Even_prefix[i]+=arr[i];
            }
            else
            {
                Odd_prefix[i]+=arr[i];
            }
            
        }
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            int lefteven,righteven,leftodd,rightodd;
            lefteven = (i == 0) ? 0 : Even_prefix[i - 1];
             leftodd  = (i == 0) ? 0 : Odd_prefix[i - 1];
           

                // lefteven=Even_prefix[i-1];
                // leftodd=Odd_prefix[i-1];

                righteven=Even_prefix[n-1]-Even_prefix[i];
                rightodd=Odd_prefix[n-1]-Odd_prefix[i];
                if(lefteven+rightodd==righteven+leftodd)
                {
                    count++;
                    
                }
            }
        
        
        return count;
        // code here
        
    }
};