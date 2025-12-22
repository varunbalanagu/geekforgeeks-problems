// User function Template for Java

class Solution {
    public int rowWithMax1s(int arr[][]) {
        // code here
        int n=arr.length;
        int m=-1;
        int index=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<arr[i].length;j++)
            {
                if(arr[i][j]==1)
                {
                    c++;
                }
            }
            if(c>m)
            {
                m=c;
                index=i;
            }
        }
        return index;
    }
}