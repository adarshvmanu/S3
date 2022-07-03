import java.util.Scanner;
class PerfectNumber{
  public static void main(String args[])
  {
    Scanner s=new Scanner(System.in);
    System.out.println("Enter the Number : ");
    int sum=0;
    int a=s.nextInt();
    for(int i=1;i<a;i++)
        if(a%i==0)
            sum=sum+i;
    if(a==sum)
        System.out.println("The Number is a Perfect Number");
    else
        System.out.println("The Number is not a Perfect Number");
    s.close();
  } 
}