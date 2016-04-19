import java.io.*;
import java.util.*;
import java.lang.*;


class issub
{
	public static void main(String args[])
	{
		String str1,str2;
		
		int i,j,n,len;
		Scanner s1=new Scanner(System.in);
		Scanner s2=new Scanner(System.in);
		str1=s1.nextLine();
		str2=s2.nextLine();
		len=str1.length();
		n=str2.length();
		char arr1[]=str2.toCharArray();
		Arrays.sort(arr1);
		String rev1=new String(arr1);
		//String rev1=buf2.reverse().toString();
		System.out.println(rev1);
		for(i=0;i<len;i++)
		{
			String sub1=str1.substring(i,i+n);
			char arr2[]=sub1.toCharArray();
			Arrays.sort(arr2);
			String rev2=new String(arr2);
			//StringBuffer sub2 = new StringBuffer(sub1);
			//String rev2=sub2.reverse().toString();
			System.out.println(rev2);
			if(rev1.equals(rev2))
			{
				System.out.println("Yes");
				break;
			}
		}
		
							
	}
}
