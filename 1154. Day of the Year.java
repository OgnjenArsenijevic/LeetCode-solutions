///1154. Day of the Year
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public int dayOfYear(String date) 
    {
        int[] arr=new int[12];
        arr[0]=31;
        arr[1]=28;
        arr[2]=31;
        arr[3]=30;
        arr[4]=31;
        arr[5]=30;
        arr[6]=31;
        arr[7]=31;
        arr[8]=30;
        arr[9]=31;
        arr[10]=30;
        arr[11]=31;
        String[] split=date.split("-");
        int year=Integer.parseInt(split[0]);
        int month=Integer.parseInt(split[1]);
        int day=Integer.parseInt(split[2]);
        if((year%4==0 && year%100!=0) || year%400==0)
            arr[1]++;
        int ans=0;
        for(int i=0;i<month-1;i++)
            ans+=arr[i];
        ans+=day;
        return ans;
    }
}
