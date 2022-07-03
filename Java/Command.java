class Command
{
    public static void main(String args[])
    {
        int n,large=0;
        for(int i=0;i<args.length;i++)
        {
            n=Integer.parseInt(args[i]);
            if(n>large)
            {
                large=n;
            }
        }
        System.out.println(large);
    }
}