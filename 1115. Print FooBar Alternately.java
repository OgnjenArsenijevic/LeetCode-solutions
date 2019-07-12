///1115. Print FooBar Alternately
///Author: Ognjen Arsenijevic
///username: ognjen1998
import java.util.concurrent.*;
class FooBar 
{
    private int n;
    private Semaphore sem1,sem2;
    public FooBar(int n) 
    {
        this.n = n;
        sem1=new Semaphore(1);
        sem2=new Semaphore(0);
    }

    public void foo(Runnable printFoo) throws InterruptedException {
        
        for (int i = 0; i < n; i++) 
        {
            sem1.acquire();
        	printFoo.run();
            sem2.release();
        }
    }

    public void bar(Runnable printBar) throws InterruptedException {
        
        for (int i = 0; i < n; i++) 
        {    
            sem2.acquire();
        	printBar.run();
            sem1.release();
        }
    }
}
