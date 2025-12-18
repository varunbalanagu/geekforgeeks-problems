class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        int n=arr.size();
        // int n=arr.size();
        sort(arr.begin(),arr.end(),greater<int>());
        // int temp=arr[n-2];
        int count=0;
        int i=0;
        while(i<n-count)
        {
           if(arr[i]%2==0)
           {
              int temp=arr[i];
               arr.erase(arr.begin()+i);
               arr.push_back(temp);
               count++;
           }
           else
           {
               i++;
           }
           }
        
        
        reverse(arr.end()-count,arr.end());;
        // return arr;
        
    } 
};