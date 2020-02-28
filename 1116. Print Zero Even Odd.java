///1116. Print Zero Even Odd
///Author: Ognjen Arsenijevic
///username: ognjen1998
class ZeroEvenOdd 
{
    private int n;
    
    Semaphore sem1, sem2, sem3;
    
    public ZeroEvenOdd(int n) 
    {
        this.n = n;
        sem1 = new Semaphore(1);
        sem2 = new Semaphore(0);
        sem3 = new Semaphore(0);
    }

    // printNumber.accept(x) outputs "x", where x is an integer.
    public void zero(IntConsumer printNumber) throws InterruptedException 
    {
        boolean odd=true;
        for(int i=0;i<n;i++)
        {
            sem1.acquire();
            printNumber.accept(0);
            if(odd)
                sem3.release();
            else
                sem2.release();
            odd=!odd;
        }
    }

    public void even(IntConsumer printNumber) throws InterruptedException 
    {
        int val=2;
        for(int i=0;i<n/2;i++)
        {
            sem2.acquire();
            printNumber.accept(val);
            val+=2;
            sem1.release();
        }
    }

    public void odd(IntConsumer printNumber) throws InterruptedException
    {
        int val2=1;
        for(int i=0;i<n/2 + (n%2);i++)
        {
            sem3.acquire();
            printNumber.accept(val2);
            val2+=2;
            sem1.release();
        }
    }
}
