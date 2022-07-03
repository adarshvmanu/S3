import java.util.Scanner;
class CharacterFrequency
{
 public static void main(String args[])
 {
     int count=0;
     Scanner s=new Scanner(System.in);
     System.out.println("Enter the String : ");
     String sentence=s.nextLine();
     System.out.println("Enter the Character :");
     String character=s.nextLine();
     s.close();
     for(int i=0;i<sentence.length();i++)
     {
       if(sentence.charAt(i)==character.charAt(0))
       {
           count++;
       }
     }
     System.out.println("The Character "+character.charAt(0)+" appears "+count+" times.");
 }   
}
