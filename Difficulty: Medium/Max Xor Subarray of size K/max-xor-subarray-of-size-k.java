class Solution {
    public int maxSubarrayXOR(int[] arr, int k) {
        // code here
        int n=arr.length;
        int xorsum=0;
        int m=-1;
        for(int i=0;i<k;i++)
        {
            xorsum=xorsum^arr[i];
        }
        m=Math.max(m,xorsum);
        for(int i=k;i<n;i++)
        {
            xorsum=xorsum^arr[i-k];
            xorsum=xorsum^arr[i];
            m=Math.max(xorsum,m);
        }
        return m;

    }
}
