class Solution {
    // Function to find equilibrium point in the array.
    public static int findEquilibrium(int arr[]) {
       int n=arr.length;
       if(n==0)
       return -1;
       List<Integer>prefix=new ArrayList<>();
       prefix.add(arr[0]);
       for(int i=1;i<n;i++)
       {
           prefix.add(prefix.get(i-1)+arr[i]);
       }
       int total=prefix.get(n-1);
       int left,right;
       for(int i=0;i<n;i++)
       {
           if(i==0)
            left=0;
           else
           left=prefix.get(i-1);
           
           right=total-prefix.get(i);
           if(left==right)
           return i;
           
       }
       return -1;
    
    }
}
