///1169. Invalid Transactions
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public List<String> invalidTransactions(String[] transactions)
    {
        List<String> ans=new ArrayList<>();
        for(int i=0;i<transactions.length;i++)
        {
            String[] split=transactions[i].split(",");
            if(Integer.parseInt(split[2])>1000)
                ans.add(transactions[i]);
            else
            {
                for(int j=0;j<transactions.length;j++)
                {
                    if(j==i) continue;
                    String[] split1=transactions[j].split(",");
                    if(split[0].equals(split1[0]) && Math.abs(Integer.parseInt(split[1])-Integer.parseInt(split1[1]))<=60 && !split[3].equals(split1[3]))
                    {
                        ans.add(transactions[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
}
