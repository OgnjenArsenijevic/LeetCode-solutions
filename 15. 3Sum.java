///15. 3Sum
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public List<List<Integer>> threeSum(int[] arr) 
    {
        HashSet<List<Integer>> st=new HashSet();
        HashMap<Integer,Integer> mp=new HashMap();
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++)
            mp.put(arr[i],i);
        for(int i=0;i<arr.length;i++)
        {
            for(int j=i+1;j<arr.length;j++)
            {
                ArrayList<Integer> list=new ArrayList();
                int curr=0-arr[i]-arr[j];
                if(mp.containsKey(curr) && mp.get(curr)>j)
                {
                    list.add(arr[i]);
                    list.add(arr[j]);
                    list.add(curr);
                    st.add(list);
                }
            }
        }
        return new ArrayList(st);
    }
}
