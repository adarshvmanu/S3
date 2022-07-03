class ThreadSynchronization
{
    public static void main(String args[])
    {
        try{
            Table d=new Table();
            MyClass1 m=new MyClass1(d);
            MyClass2 n=new MyClass2(d);
            m.start();
            n.start();
            m.join();
            n.join();
        }
        catch(InterruptedException e)
        {
            System.out.println(e.getMessage());
        }
    }
}
class Table
{
    public synchronized void display(int n)
    {
        for(int i=1;i<=n;i++)
        {
            System.out.println(n+" x "+i+" = "+n*i);
        }
    }
}
class MyClass1 extends Thread
{
    private Table t;
    public MyClass1(Table t)
    {
        this.t=t;
    }
    public void run()
    {
        t.display(5);
    }
}
class MyClass2 extends Thread
{
    private Table k;
    public MyClass2(Table k)
    {
        this.k=k;
    }
    public void run()
    {
        k.display(3);
    }
}

