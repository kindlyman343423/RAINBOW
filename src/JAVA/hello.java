public class hello
{
	public static void main(String[] args)
	{
		rainbow obj = new rainbow();

		//FORMATTING TEXT METHODS
		System.out.println(obj.getBOLD("BOLD"));
		System.out.println(obj.getITALIC("ITALIC"));
		System.out.println(obj.getUNDERLINE("UNDERLINE"));

		//TEXT COLORS METHODS
		System.out.println(obj.getgreen("green"));
		System.out.println(obj.getBLACK("BLACK"));
		System.out.println(obj.getRED("RED"));
		System.out.println(obj.getGREEN("GREEN"));
		System.out.println(obj.getYELLOW("YELLOW"));
		System.out.println(obj.getBLUE("BLUE"));
		System.out.println(obj.getMAGENTA("MAGENTA"));
		System.out.println(obj.getCYAN("CYAN"));
		System.out.println(obj.getWHITE("WHITE"));
		
		//BACKGROUND COLORS METHODS
		System.out.println(obj.getBGGREENISH("BGGREENISH")+obj.getRESET());
		System.out.println(obj.getBGRED("BGRED")+obj.getRESET());
		System.out.println(obj.getBGLGREEN("BGLGREEN")+obj.getRESET());
		System.out.println(obj.getBGORANGE("BGORANGE")+obj.getRESET());
		System.out.println(obj.getBGLBLUE("BGLBLUE")+obj.getRESET());
		System.out.println(obj.getBGPINK("BGPINK")+obj.getRESET());
		System.out.println(obj.getBGDGREEN("BGDGREEN")+obj.getRESET());
		System.out.println(obj.getBGWHITE("BGWHITE")+obj.getRESET());
	
		//FORMATTING WITH COLORS METHODS
		System.out.println(obj.getBgreen("Bgreen"));
		System.out.println(obj.getIgreen("Igreen"));
		System.out.println(obj.getUgreen("Ugreen"));
		System.out.println(obj.getBRED("BRED"));
		System.out.println(obj.getIRED("IRED"));
		System.out.println(obj.getURED("URED"));
		System.out.println(obj.getBGREEN("BGREEN"));
		System.out.println(obj.getIGREEN("IGREEN"));
		System.out.println(obj.getUGREEN("UGREEN"));
		System.out.println(obj.getBYELLOW("BYELLOW"));
		System.out.println(obj.getIYELLOW("IYELLOW"));
		System.out.println(obj.getUYELLOW("UYELLOW"));
		System.out.println(obj.getBBLUE("BBLUE"));
		System.out.println(obj.getIBLUE("IBLUE"));
		System.out.println(obj.getUBLUE("UBLUE"));
		System.out.println(obj.getBMAGENTA("BMAGENTA"));
		System.out.println(obj.getBCYAN("BCYAN"));
		System.out.println(obj.getICYAN("ICYAN"));
		System.out.println(obj.getUCYAN("UCYAN"));
		System.out.println(obj.getBWHITE("BWHITE"));
		System.out.println(obj.getIWHITE("IWHITE"));
		System.out.println(obj.getUWHITE("UWHITE"));

		//FORMATTING WITH BACKGROUND METHODS
		System.out.println(obj.getBBGREENISH("BBGREENISH")+obj.getRESET());
		System.out.println(obj.getIBGGREENISH("IBGGREENISH")+obj.getRESET());
		System.out.println(obj.getUBGGREENISH("UBGGREENISH")+obj.getRESET());
		System.out.println(obj.getBBGRED("BBGRED")+obj.getRESET());
		System.out.println(obj.getIBGRED("IBGRED")+obj.getRESET());
		System.out.println(obj.getUBGRED("UBGRED")+obj.getRESET());
		System.out.println(obj.getBBGLGREEN("BBGLGREEN")+obj.getRESET());
		System.out.println(obj.getIBGLGREEN("IBGLGREEN")+obj.getRESET());
		System.out.println(obj.getUBGLGREEN("UBGLGREEN")+obj.getRESET());
		System.out.println(obj.getBBGORANGE("BBGORANGE")+obj.getRESET());
		System.out.println(obj.getIBGORANGE("IBGORANGE")+obj.getRESET());
		System.out.println(obj.getUBGORANGE("UBGORANGE")+obj.getRESET());
		System.out.println(obj.getBBGLBLUE("BBGLBLUE")+obj.getRESET());
		System.out.println(obj.getIBGLBLUE("IBGLBLUE")+obj.getRESET());
		System.out.println(obj.getUBGLBLUE("UBGLBLUE")+obj.getRESET());
		System.out.println(obj.getBBGPINK("BBGPINK")+obj.getRESET());
		System.out.println(obj.getIBGPINK("IBGPINK")+obj.getRESET());
		System.out.println(obj.getUBGPINK("UBGPINK")+obj.getRESET());
		System.out.println(obj.getBBGDGREEN("BBGDGREEN")+obj.getRESET());
		System.out.println(obj.getIGDGREEN("IGDGREEN")+obj.getRESET());
		System.out.println(obj.getUGDGREEN("UGDGREEN")+obj.getRESET());
		System.out.println(obj.getBBGWHITE("BBGWHITE")+obj.getRESET());
		System.out.println(obj.getIBGWHITE("IBGWHITE")+obj.getRESET());
		System.out.println(obj.getUBGWHITE("UBGWHITE")+obj.getRESET());
	}
}
