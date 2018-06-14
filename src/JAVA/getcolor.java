public class getcolor
{
    //COLOR MANUAL
    //FORMATTING TEXT
    private final String RESET = "\u001B[0m";	    //RESET NORMAL COLOR
    private final String BOLD = "\u001B[1m";		//BOLD
    private final String ITALIC = "\u001B[3m";  	//ITALIC TEXT
    private final String UNDERLINE = "\u001B[4m";  	//UNDERLINE TEXT

    //TEXT COLORS
    private final String green = "\u001B[2m"; 		//green color
    private final String BLACK = "\u001B[30m"; 		//BLACK COLOR
    private final String RED = "\u001B[31m";  		//RED COLOR
    private final String GREEN = "\u001B[32m"; 		//GREEN COLOR
    private final String YELLOW = "\u001B[33m"; 	//YELLOW COLOR
    private final String BLUE = "\u001B[34m"; 		//BLUE COLOR
    private final String MAGENTA = "\u001B[35m"; 	//MAGENTA COLOR
    private final String CYAN = "\u001B[36m"; 		//CYAN COLOR
    private final String WHITE = "\u001B[37m"; 		//WHITE COLOR

    //BACKGROUND COLORS
    private final String BGGREENISH = "\u001B[40m"; //GREENISH BACKGROUND
    private final String BGRED = "\u001B[41m";		//RED BACKGROUND
    private final String BGLGREEN = "\u001B[42m";	//LIGHT GREEN BACKGROUND
    private final String BGORANGE ="\u001B[43m";	//ORANGE BACKGROUND
    private final String BGLBLUE = "\u001B[44m";	//LIGHT BLUE BACKGROUND
    private final String BGPINK = "\u001B[45m";		//PINK BACKGROUND
    private final String BGDGREEN = "\u001B[46m";	//DARK GREEN BACKGROUND
    private final String BGWHITE = "\u001B[47m";	//WHITE-GREEN BACKGROUND

    //FORMATTING WITH COLORS
    private final String Bgreen = "\u001B[1;2m";    //BOLD green color
    private final String Igreen ="\u001B[3;2m";     //ITALIC green color
    private final String Ugreen = "\u001B[4;2m";    //UNDERLINE green color
    private final String BRED = "\u001B[1;31m";     //BOLD RED COLOR
    private final String IRED = "\u001B[3;31m";		//ITALIC RED COLOR
    private final String URED = "\u001B[4;31m";	    //UNDERLINE RED COLOR
    private final String BGREEN = "\u001B[1;32m";   //BOLD GREEN COLOR
    private final String IGREEN = "\u001B[3;32m";	//ITALIC GREEN COLOR
    private final String UGREEN = "\u001B[4;32m";   //UNDERLINE GREEN COLOR
    private final String BYELLOW = "\u001B[1;33m";  //BOLD YELLOW
    private final String IYELLOW = "\u001B[3;33m";  //ITALIC YELLOW
    private final String UYELLOW = "\u001B[4;33m";	//UNDERLINE YELLOW
    private final String BBLUE = "\u001B[1;34m";	//BOLD BLUE
    private final String IBLUE = "\u001B[3;34m";	//ITALIC BLUE
    private final String UBLUE = "\u001B[4;34m"; 	//UNDERLINE BLUE
    private final String BMAGENTA = "\u001B[1;35m"; //BOLD MAGENTA
    private final String BCYAN = "\u001B[1;36m";	//BOLD CYAN
    private final String ICYAN = "\u001B[3;36m"; 	//ITALIC CYAN
    private final String UCYAN = "\u001B[4;36m"; 	//UNDERLINE CYAN
    private final String BWHITE = "\u001B[1;37m";	//BOLD WHITE
    private final String IWHITE = "\u001B[3;37m";	//ITALIC WHITE
    private final String UWHITE = "\u001B[4;37m";	//UNDERLINE WHITE

    //FORMATTING WITH BACKGROUND
    private final String BBGREENISH = "\u001B[1;40m";   //BOLD TEXT-GREENISH BACKGROUND
    private final String IBGGREENISH = "\u001B[3;40m";  //ITALIC TEXT-GREENISH BACKGROUND
    private final String UBGGREENISH = "\u001B[4;40m";  //UNDERLINE TEXT-GREENISH BACKGROUND

    private final String BBGRED = "\u001B[1;41m";		//BOLD TEXT-RED BACKGROUND
    private final String IBGRED = "\u001B[3;41m";		//ITALIC TEXT-RED BACKGROUND
    private final String UBGRED = "\u001B[4;41m";		//UNDERLINE TEXT-RED BACKGROUND

    private final String BBGLGREEN = "\u001B[1;42m";    //BOLD TEXT-LIGHT GREEN BACKGROUND
    private final String IBGLGREEN = "\u001B[3;42m";	//ITALIC TEXT-LIGHT GREEN BACKGROUND
    private final String UBGLGREEN = "\u001B[4;42m";	//UNDERLINE TEXT-LIGHT GREEN BACKGROUND

    private final String BBGORANGE = "\u001B[1;43m";	//BOLD TEXT-ORANGE BACKGROUND
    private final String IBGORANGE = "\u001B[3;43m";	//ITALIC TEXT-ORANGE BACKGROUND
    private final String UBGORANGE = "\u001B[4;43m";	//UNDERLINE TEXT-ORANGE BACKGROUND

    private final String BBGLBLUE = "\u001B[1;44m";		//BOLD TEXT-LIGHT BLUE BACKGROUND
    private final String IBGLBLUE = "\u001B[3;44m";		//ITALIC TEXT-LIGHT BLUE BACKGROUND
    private final String UBGLBLUE = "\u001B[4;44m";		//UNDERLINE TEXT-LIGHT BLUE BACKGROUND

    private final String BBGPINK = "\u001B[1;45m";		//BOLD TEXT-PINK BACKGROUND
    private final String IBGPINK = "\u001B[3;45m";		//ITALIC TEXT-PINK BACKGROUND
    private final String UBGPINK = "\u001B[4;45m";		//UNDERLINE TEXT-PINK BACKGROUND

    private final String BBGDGREEN = "\u001B[1;46m";	//BOLD TEXT-DARK GREEN BACKGROUND
    private final String IGDGREEN = "\u001B[3;46m";	    //ITALIC TEXT-DARK GREEN BACKGROUND
    private final String UGDGREEN = "\u001B[4;46m";	    //UNDERLINE TEXT-DARK GREEN BACKGROUND

    private final String BBGWHITE = "\u001B[1;47m";		//BOLD TEXT WHITE-GREEN BACKGROUND
    private final String IBGWHITE = "\u001B[3;47m";		//ITALIC TEXT WHITE-GREEN BACKGROUND
    private final String UBGWHITE = "\u001B[4;47m";		//UNDERLINEWHITE-GREEN BACKGROUND

    //METHODS CALLS
    //FORMATTING TEXT METHODS
    public String getRESET()      //getRESET
    {
        return (RESET);
    }
    public String getBOLD(String str)       //getBOLD
    {
        return (BOLD+str+RESET);
    }
    public String getITALIC(String str)
    {
        return (ITALIC+str+RESET);
    }
    public String getUNDERLINE(String str)
    {
        return (UNDERLINE+str+RESET);
    }

    //TEXT COLORS METHODS
    public String getgreen(String str)
    {
        return (green+str+RESET);
    }
    public String getBLACK(String str)
    {
        return (BLACK+str+RESET);
    }
    public String getRED(String str)
    {
        return (RED+str+RESET);
    }
    public String getGREEN(String str)
    {
        return (GREEN+str+RESET);
    }
    public String getYELLOW(String str)
    {
        return (YELLOW+str+RESET);
    }
    public String getBLUE(String str)
    {
        return (BLUE+str+RESET);
    }
    public String getMAGENTA(String str)
    {
        return (MAGENTA+str+RESET);
    }
    public String getCYAN(String str)
    {
        return (CYAN+str+RESET);
    }
    public String getWHITE(String str)
    {
        return (WHITE+str+RESET);
    }

    //BACKGROUND COLORS METHODS
    public String getBGGREENISH(String str)
    {
        return (BGGREENISH+str);
    }
    public String getBGRED(String str)
    {
        return (BGRED+str);
    }
    public String getBGLGREEN(String str)
    {
        return (BGLGREEN+str);
    }
    public String getBGORANGE(String str)
    {
        return (BGORANGE+str);
    }
    public String getBGLBLUE(String str)
    {
        return (BGLBLUE+str);
    }
    public String getBGPINK(String str)
    {
        return (BGPINK+str);
    }
    public String getBGDGREEN(String str)
    {
        return (BGDGREEN+str);
    }
    public String getBGWHITE(String str)
    {
        return (BGWHITE+str);
    }
    
    //FORMATTING WITH COLORS METHODS
    public String getBgreen(String str)
    {
        return (Bgreen+str+RESET);
    } 
    public String getIgreen(String str)
    {
        return (Igreen+str+RESET);
    }
    public String getUgreen(String str)
    {
        return (Ugreen+str+RESET);
    }
    public String getBRED(String str)
    {
        return (BRED+str+RESET);
    }
    public String getIRED(String str)
    {
        return (IRED+str+RESET);
    }
    public String getURED(String str)
    {
        return (URED+str+RESET);
    }
    public String getBGREEN(String str)
    {
        return (BGREEN+str+RESET);
    }
    public String getIGREEN(String str)
    {
        return (IGREEN+str+RESET);
    }
    public String getUGREEN(String str)
    {
        return (UGREEN+str+RESET);
    }
    public String getBYELLOW(String str)
    {
        return (BYELLOW+str+RESET);
    }
    public String getIYELLOW(String str)
    {
        return (IYELLOW+str+RESET);
    }
    public String getUYELLOW(String str)
    {
        return (UYELLOW+str+RESET);
    }
    public String getBBLUE(String str)
    {
        return (BBLUE+str+RESET);
    }
    public String getIBLUE(String str)
    {
        return (IBLUE+str+RESET);
    }
    public String getUBLUE(String str)
    {
        return (UBLUE+str+RESET);
    }
    public String getBMAGENTA(String str)
    {
        return (BMAGENTA+str+RESET);
    }
    public String getBCYAN(String str)
    {
        return (BCYAN+str+RESET);
    }
    public String getICYAN(String str)
    {
        return (ICYAN+str+RESET);
    }
    public String getUCYAN(String str)
    {
        return (UCYAN+str+RESET);
    }
    public String getBWHITE(String str)
    {
        return (BWHITE+str+RESET);
    }
    public String getIWHITE(String str)
    {
        return (IWHITE+str+RESET);
    }
    public String getUWHITE(String str)
    {
        return (UWHITE+str+RESET);
    }

    //FORMATTING WITH BACKGROUND METHODS
    public String getBBGREENISH(String str)
    {
        return (BBGREENISH+str);
    }
    public String getIBGGREENISH(String str)
    {
        return (IBGGREENISH+str);
    }
    public String getUBGGREENISH(String str)
    {
        return (UBGGREENISH+str);
    }
    public String getBBGRED(String str)
    {
        return (BBGRED+str);
    }
    public String getIBGRED(String str)
    {
        return (IBGRED+str);
    }
    public String getUBGRED(String str)
    {
        return (UBGRED+str);
    }
}