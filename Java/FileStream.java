import java.io.*;
class FileStream
{
	public static void main(String args[])
	{
		try{
			FileInputStream fin=new FileInputStream("file.txt");
			FileOutputStream fout=new FileOutputStream("result.txt");
			int i;
			while((i=fin.read())!=-1)
			{
				fout.write(i);
			}
			fin.close();
			fout.close();
		}
		catch(FileNotFoundException e)
		{
			System.out.println(e.getMessage());
		}
		catch(IOException e)
		{
			System.out.println(e.getMessage());
		}
		finally
		{
			System.out.println("Program has finished Execution.");
		}
    }
}
			 
			