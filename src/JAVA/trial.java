public class trial
{
	
	//public static final String ANSI_BLACK = "\u001B[30m";
	//public static final String ANSI_GREEN = "\u001B[32m";
	//public static final String ANSI_YELLOW = "\u001B[33m";
	//public static final String ANSI_BLUE = "\u001B[34m";
	//public static final String ANSI_PURPLE = "\u001B[35m";
	//public static final String ANSI_CYAN = "\u001B[36m";
	//public static final String ANSI_WHITE = "\u001B[37m";
	public static void main(String[] args)
	{
		//color obj = new color();
		//System.out.println(obj.ANSI_RED + "This text is red!" + obj.ANSI_RESET);
		getcolor ob = new getcolor();
		System.out.println(ob.getBRED("HELLO WORLD"));
	}
}
