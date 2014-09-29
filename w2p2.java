import java.util.*;
public class w2p2{
	static int a =100;
	static class StaticNested{
				public void footer(){
			System.out.println(a);
			}
	}
	public static void main(String[] args){
	  class NestedClass{
			public String a = "Hello";
		
			public void foo(){
				System.out.println("Booo\n");
			}
		}
		
		NestedClass n = new NestedClass();
		n.foo();
		StaticNested s = new StaticNested();
		s.footer();	
	}
	
}
