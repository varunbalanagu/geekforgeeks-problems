class Solution {
    public int median(int[][] mat) {
        int n=mat.length;
        List<Integer>lis=new ArrayList<>();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mat[0].length;j++)
            {
                lis.add(mat[i][j]);
            }
        }
        Collections.sort(lis);
        int k=lis.size();
        return lis.get(k/2);
        // code here
        
    }
}