class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        int n=mices.size();
        int maxtime=-1;
        for(int i=0;i<n;i++)
        {
            maxtime=max(maxtime,abs(mices[i]-holes[i]));
        }
        return maxtime;
        
    }
};