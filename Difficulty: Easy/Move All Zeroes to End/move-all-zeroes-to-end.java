class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int n=arr.length;
        int k=0;
        int [] temp=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=arr[i];
            
        }
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=0)
            {
                arr[k]=temp[i];
                k++;
            }
            else
            {
                continue;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(temp[i]==0)
            {
                arr[k]=temp[i];
                k++;
            }
        }
    }
}