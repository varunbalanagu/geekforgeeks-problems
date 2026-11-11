class Solution {
  public:
    bool checkWithinK(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        map<int ,vector<int>>mp;
        for(int  i =0 ; i < n ; i++){
            mp[arr[i]].push_back(i);
            // cout<<mp[5].size()<<endl;
           
            if(mp[arr[i]].size()==2){
                
            //  cout<<mp[arr[i]][0]<<mp[arr[i]][1]<<endl;
                if(abs(mp[arr[i]][0]-mp[arr[i]][1])<=k)
                return true;
                 else{
                mp[arr[i]].clear();
                mp[arr[i]].push_back(i);
            }
            }
           
        }
        return false;
       
    }
};