import java.util.Scanner;
class Palindrome
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int flag=0; 
        System.out.println("Enter the String : ");
        String word=s.nextLine();
        s.close();
        for(int i=0,j=word.length()-1;i<(word.length())/2;i++,j--)
        {
          if(word.charAt(i)!=word.charAt(j))
          {
            flag=1;
            break;
          }
        }
        if(flag==1)
        {
            System.out.println(word+" is not a Palindrome");
        }
        else
        {
            System.out.println(word+" is a Palindrome");
        }
    }
}