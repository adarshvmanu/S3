import java.util.*;
//define user defined exception InvalidInputEx
class InvalidInputEx extends Exception {
    public String getMessage(){
        return ("Invalid index input");
    }
}

class IntList{
    int[] arr=new int[5];
    public void set_value(int n,int m) throws InvalidInputEx{
        if(n<0||n>4){
        throw new InvalidInputEx();
        }
        else
        arr[n]=m;
    }
    public int[] getArray(){
        return arr;
    }
}

class FClass{
    public static void main(String[] args) throws InvalidInputEx {
        Scanner sc = new Scanner(System.in);
        IntList ilist = new IntList();
        try {
            for(int i = 0; i < 5; i++) {			
                int n = sc.nextInt();
                int m = sc.nextInt();
                ilist.set_value(n, m);
            }
        }
        catch(InvalidInputEx e) {
            System.out.println(e.getMessage());
            Throwable ori = new Throwable();
            ori.initCause(e);
            ori=e.getCause();
            System.out.println(ori.getMessage());
            throw e; 
        }	
       finally{
         int[] i_arr = ilist.getArray();
         for(int i = 0; i < i_arr.length; i++)
            System.out.print(i_arr[i] + " ");
       }
    }
}