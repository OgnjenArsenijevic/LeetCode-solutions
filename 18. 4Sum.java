///18. 4Sum
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public List<List<Integer>> fourSum(int[] arr, int target) 
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
                for(int k=j+1;k<arr.length;k++)
                {
                    ArrayList<Integer> list=new ArrayList();
                    int curr=target-arr[i]-arr[j]-arr[k];
                    if(mp.containsKey(curr) && mp.get(curr)>k)
                    {
                        list.add(arr[i]);
                        list.add(arr[j]);
                        list.add(arr[k]);
                        list.add(curr);
                        st.add(list);
                }
                }
            }
        }
        return new ArrayList(st);
    }
}
