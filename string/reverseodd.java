import java.lang.*;
import java.io.*;
import java.util.*;
public class reverseodd
{
	public static void main(String[] args) 
	{
  		Scanner s=new Scanner(System.in);
		Scanner s1=new Scanner(System.in);
		String str1;
		int i,t;
		t=s1.nextInt();
		while(t>0)
		{
		
		str1=s.nextLine();
		
		//StringBuffer str2[]=new StringBuffer[100];
		//String str3=str2.toString();
		//System.out.println(str3);
		String str[]=str1.split(" ");
		int len=str.length;
		for(i=0;i<len;i++)
		{
			StringBuffer str2=new StringBuffer(str[i]);
			str[i]=str2.reverse().toString();
		}
		
		for( i=0;i<len;i+=2)
		{
			if(i<len-1)
				System.out.print(str[i+1]);
			
			System.out.print(" "+str[i]+" ");
		}
		System.out.print("\n");
		t--;
		}		
			
	}
}
