import java.io.*;
import java.util.*;
import java.lang.*;	

public class reverse
{
	public static void main(String[] args)
	{
		String str;
		int i,j=0,count=0;
		str=new String();
		Stack st=new Stack();
		Scanner s=new Scanner(System.in);
		str=s.nextLine();
		String arr[]=str.split(" ");
		for(i=0;i<arr.length;i++)
		{
			st.push(arr[i]);
		}
		//System.out.println();
		while(!st.isEmpty())
		{
			System.out.print(" "+st.peek());
			if(!(st.peek()).equals(arr[j]))
			{
					count++;
			}
			j++;
			st.pop();
		}
		if(count>0)
		System.out.println("not");
		else
			System.out.print("yes");
		System.out.println();
		
	}
}
