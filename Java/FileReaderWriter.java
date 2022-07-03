import java.io.*;
class FileReaderWriter
{
	public static void main(String args[])
	{
		try{
            FileWriter fw=new FileWriter("Copy.txt");
			FileReader fr=new FileReader("file.txt");
			BufferedReader br=new BufferedReader(fr);
			String s;
			while((s=br.readLine())!=null)
			{
				fw.write(s);
			}
			fr.close();
			fw.close();
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
			 
			