// User function Template for Java

class Solution {
    // Function to rotate an array by d elements in counter-clockwise direction.
    static void rotateArr(int arr[], int d) {
        Queue<Integer> q=new LinkedList<>();
        for(int i=0;i<arr.length;i++)
        {
            q.add(arr[i]);
        }
        for(int i=0;i<d;i++)
        {
            int temp=q.poll();
            q.add(temp);
        }
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=q.peek();
            q.poll();
        }
        // add your code here
    }
}