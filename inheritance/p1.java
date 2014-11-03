class parent{
	public void hello(){
		System.out.println("This is hello");
	}
}
class child extends parent{
	public void hello(){
		System.out.println("This is goodbye");
	}
	
} 
public class p1{
	public static void main(String[] args){
		child c1 = new child();
		c1.hello();
	}

}
