public class Vararg
{
	public static void main(String args[])
	{
		foo(2,3,4,5,-1);
	}
	
	public static void foo(int...numbers)
	{
		for (int arg : numbers)
		{
			if(arg>0)
				System.out.println(arg);
		} 
	}
}
