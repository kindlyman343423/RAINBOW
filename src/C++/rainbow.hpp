#include <string>
// #include "rainbow.h"
using namespace std;

//FORMATTING TEXT
#define RESET "\x1B[0m"			//RESET NORMAL COLOR
#define BOLD "\x1B[1m" 			//BOLD
#define ITALIC "\x1B[3m"  		//ITALIC TEXT
#define UNDERLINE "\x1B[4m"  	//UNDERLINE TEXT

//TEXT COLORS
#define green "\x1B[2m" 		//green color
#define BLACK "\x1B[30m" 		//BLACK COLOR
#define RED "\x1B[31m"  		//RED COLOR
#define GREEN "\x1B[32m" 		//GREEN COLOR
#define YELLOW "\x1B[33m" 		//YELLOW COLOR
#define BLUE "\x1B[34m" 		//BLUE COLOR
#define MAGENTA "\x1B[35m" 	//MAGENTA COLOR
#define CYAN "\x1B[36m" 		//CYAN COLOR
#define WHITE "\x1B[37m" 		//WHITE COLOR

//BACKGROUND COLORS
#define BGGREENISH "\x1B[40m" //GREENISH BACKGROUND
#define BGRED "\x1B[41m"		//RED BACKGROUND
#define BGLGREEN "\x1B[42m"	//LIGHT GREEN BACKGROUND
#define BGORANGE "\x1B[43m"	//ORANGE BACKGROUND
#define BGLBLUE "\x1B[44m"		//LIGHT BLUE BACKGROUND
#define BGPINK "\x1B[45m"		//PINK BACKGROUND
#define BGDGREEN "\x1B[46m"	//DARK GREEN BACKGROUND
#define BGWHITE "\x1B[47m"		//WHITE-GREEN BACKGROUND

//FORMATTING WITH COLORS
#define Bgreen "\x1B[1;2m" 	//BOLD green color
#define Igreen "\x1B[3;2m" //ITALIC green color
#define Ugreen "\x1B[4;2m" //UNDERLINE green color
#define BRED "\x1B[1;31m"   //BOLD RED COLOR
#define IRED "\x1B[3;31m"		//ITALIC RED COLOR
#define URED "\x1B[4;31m"	//UNDERLINE RED COLOR
#define BGREEN "\x1B[1;32m"//BOLD GREEN COLOR
#define IGREEN "\x1B[3;32m"	//ITALIC GREEN COLOR
#define UGREEN "\x1B[4;32m"//UNDERLINE GREEN COLOR
#define BYELLOW "\x1B[1;33m"//BOLD YELLOW
#define IYELLOW "\x1B[3;33m"   //ITALIC YELLOW
#define UYELLOW "\x1B[4;33m"		//UNDERLINE YELLOW
#define BBLUE "\x1B[1;34m"				//BOLD BLUE
#define IBLUE "\x1B[3;34m"			//ITALIC BLUE
#define UBLUE "\x1B[4;34m" 	//UNDERLINE BLUE
#define BMAGENTA "\x1B[1;35m" //BOLD MAGENTA
#define IMAGENTA "\x1B[3;35m"		//ITALIC MAGENTA
#define UMAGENTA "\x1B[4;35m" //UNDERLINE MAGENTA
#define BCYAN "\x1B[1;36m"		//BOLD CYAN
#define ICYAN "\x1B[3;36m" 		//ITALIC CYAN
#define UCYAN "\x1B[4;36m" 		//UNDERLINE CYAN
#define BWHITE "\x1B[1;37m"		//BOLD WHITE
#define IWHITE "\x1B[3;37m"			//ITALIC WHITE
#define UWHITE "\x1B[4;37m"		//UNDERLINE WHITE

//FORMATTING WITH BACKGROUND
#define BBGREENISH "\x1B[1;40m" //BOLD TEXT-GREENISH BACKGROUND
#define IBGGREENISH "\x1B[3;40m" //ITALIC TEXT-GREENISH BACKGROUND
#define UBGGREENISH "\x1B[4;40m" //UNDERLINE TEXT-GREENISH BACKGROUND

#define BBGRED "\x1B[1;41m"		//BOLD TEXT-RED BACKGROUND
#define IBGRED "\x1B[3;41m"		//ITALIC TEXT-RED BACKGROUND
#define UBGRED "\x1B[4;41m"		//UNDERLINE TEXT-RED BACKGROUND

#define BBGLGREEN "\x1B[1;42m" //BOLD TEXT-LIGHT GREEN BACKGROUND
#define IBGLGREEN "\x1B[3;42m"	//ITALIC TEXT-LIGHT GREEN BACKGROUND
#define UBGLGREEN "\x1B[4;42m"	//UNDERLINE TEXT-LIGHT GREEN BACKGROUND

#define BBGORANGE "\x1B[1;43m"	//BOLD TEXT-ORANGE BACKGROUND
#define IBGORANGE "\x1B[3;43m"	//ITALIC TEXT-ORANGE BACKGROUND
#define UBGORANGE "\x1B[4;43m"	//UNDERLINE TEXT-ORANGE BACKGROUND

#define BBGLBLUE "\x1B[1;44m"		//BOLD TEXT-LIGHT BLUE BACKGROUND
#define IBGLBLUE "\x1B[3;44m"		//ITALIC TEXT-LIGHT BLUE BACKGROUND
#define UBGLBLUE "\x1B[4;44m"		//UNDERLINE TEXT-LIGHT BLUE BACKGROUND

#define BBGPINK "\x1B[1;45m"		//BOLD TEXT-PINK BACKGROUND
#define IBGPINK "\x1B[3;45m"		//ITALIC TEXT-PINK BACKGROUND
#define UBGPINK "\x1B[4;45m"		//UNDERLINE TEXT-PINK BACKGROUND

#define BBGDGREEN "\x1B[1;46m"	//BOLD TEXT-DARK GREEN BACKGROUND
#define IGDGREEN "\x1B[3;46m"	//ITALIC TEXT-DARK GREEN BACKGROUND
#define UGDGREEN "\x1B[4;46m"	//UNDERLINE TEXT-DARK GREEN BACKGROUND

#define BBGWHITE "\x1B[1;47m"		//BOLD TEXT WHITE-GREEN BACKGROUND
#define IBGWHITE "\x1B[3;47m"		//ITALIC TEXT WHITE-GREEN BACKGROUND
#define UBGWHITE "\x1B[4;47m"		//UNDERLINEWHITE-GREEN BACKGROUND

//AWESOME COMBINATION

/*++++++++++++++++++++++++++++++++++++++++++++++*/
/*===============> Rainbow class <==============*/
class Rainbow
{
    protected:
    //USE THE UNDER CONSTANTS CAREFULLY!!!!!!
    //FORMATTING TEXT
    string rst;                 //RESET NORMAL COLOR
    string bld;                 //BOLD
    string itlc;                //ITALIC TEXT
    string udrlne;              //UNDERLINE TEXT
    
    //TEXT COLORS
    string grn;                 //green color
    string blk;                 //BLACK COLOR
    string red;                 //RED COLOR
    string GRN;                 //GREEN COLOR
    string ylw;                 //YELLOW COLOR
    string blu;                 //BLUE COLOR
    string mgta;                //MAGENTA COLOR
    string cyn;                 //CYAN COLOR
    string wht;                 //WHITE COLOR

    //BACKGROUND COLORS
    string bgrn;                //GREENISH BACKGROUND
    string bred;                //RED BACKGROUND
    string blgrn;               //LIGHT GREEN BACKGROUND
    string borng;               //ORANGE BACKGROUND
    string bblu;                //LIGHT BLUE BACKGROUND
    string bpnk;                //PINK BACKGROUND
    string bdgrn;               //DARK GREEN BACKGROUND
    string bwht;                //WHITE-GREEN BACKGROUND

    //FORMATTING WITH COLORS
    string Bgrn;                //BOLD green color
    string Igrn;                //ITALIC green color
    string Ugrn;                //UNDERLINE green color
    string Bred;                //BOLD RED COLOR
    string Ired;                //ITALIC RED COLOR
    string Ured;                //UNDERLINE RED COLOR
    string BGRN;                //BOLD GREEN COLOR
    string IGRN;                //ITALIC GREEN COLOR
    string UGRN;                //UNDERLINE GREEN COLOR
    string Bylw;                //BOLD YELLOW
    string Iylw;                //ITALIC YELLOW
    string Uylw;                //UNDERLINE YELLOW
    string Bblu;                //BOLD BLUE
    string Iblu;                //ITALIC BLUE
    string Ublu;	            //UNDERLINE BLUE
    string Bmgta;               //BOLD MAGENTA
    string Imgta;               //ITALIC MAGENTA
    string Umgta;               //UNDERLINE MAGENTA
    string Bcyn;                //BOLD CYAN
    string Icyn;                //ITALIC CYAN
    string Ucyn;                //UNDERLINE CYAN
    string Bwht;                //BOLD WHITE
    string Iwht;                //ITALIC WHITE
    string Uwht;                //UNDERLINE WHITE

    //FORMATTING WITH BACKGROUND
    string BBgrn;
    string IBgrn;
    string UBgrn;

    string BBred;
    string IBred;
    string UBred;

    string BBlgrn;
    string IBlgrn;
    string UBlgrn;
    
    string BBorng;
    string IBorng;
    string UBorng;

    string BBblu;
    string IBblu;
    string UBblu;

    string BBpnk;
    string IBpnk;
    string UBpnk;

    string BBdgrn;
    string IBdgrn;
    string UBdgrn;

    string BBwht;
    string IBwht;
    string UBwht;
    public:
    Rainbow()
    {
        rst = "\x1B[0m";        
        bld = "\x1B[1m"; 	    
        itlc = "\x1B[3m";  		
        udrlne = "\x1B[4m";  	
    }
    
    /*********************************************/
    /*=========> FORMATTING TEXT <===============*/
    string getRESET()
    {
        return RESET;
    }
    string getBOLD(string str)
    {
        return BOLD+str+RESET;
    }
    string getITALIC(string str)
    {
        return ITALIC+str+RESET;
    }
    string getUNDERLINE(string str)
    {
        return UNDERLINE+str+RESET;
    }

    /*********************************************/
    /*=========> GET TEXT COLORS <===============*/
    string getgreen(string str)
    {
        return green+str+RESET;
    }
    string getBLACK(string str)
    {
        return BLACK+str+RESET;
    }
    string getRED(string str)
    {
        return RED+str+RESET;
    }
    string getGREEN(string str)
    {
        return GREEN+str+RESET;
    }
    string getYELLOW(string str)
    {
        return YELLOW+str+RESET;
    }
    string getBLUE(string str)
    {
        return BLUE+str+RESET;
    }
    string getMAGENTA(string str)
    {
        return MAGENTA+str+RESET;
    }
    string getCYAN(string str)
    {
        return CYAN+str+RESET;
    }
    string getWHITE(string str)
    {
        return WHITE+str+RESET;
    }

    /*********************************************/
    /*=======> BACKGROUND COLORS <===============*/
    string getBGGREENISH(string str)
    {
        return BGGREENISH+str;
    }
    string getBGRED(string str)
    {
        return BGRED+str;
    }
    string getBGLGREEN(string str)
    {
        return BGLGREEN+str;
    }
    string getBGORANGE(string str)
    {
        return BGORANGE+str;
    }
    string getBGLBLUE(string str)
    {
        return BGLBLUE+str;
    }
    string getBGPINK(string str)
    {
        return BGPINK+str;
    }
    string getBGDGREEN(string str)
    {
        return BGDGREEN+str;
    }
    string getBGWHITE(string str)
    {
        return BGWHITE+str;
    }

    /*********************************************/
    /*=======> FORMATTING WITH COLORS <==========*/
    string getBgreen(string str)
    {
        return Bgreen+str+RESET;
    }
    string getIgreen(string str)
    {
        return Igreen+str+RESET;
    }
    string getUgreen(string str)
    {
        return Ugreen+str+RESET;
    }
    string getBRED(string str)
    {
        return BRED+str+RESET;
    }
    string getIRED(string str)
    {
        return IRED+str+RESET;
    }
    string getURED(string str)
    {
        return URED+str+RESET;
    }
    string getBGREEN(string str)
    {
        return BGREEN+str+RESET;
    }
    string getIGREEN(string str)
    {
        return IGREEN+str+RESET;
    }
    string getUGREEN(string str)
    {
        return UGREEN+str+RESET;
    }
    string getBYELLOW(string str)
    {
        return BYELLOW+str+RESET;
    }
    string getIYELLOW(string str)
    {
        return IYELLOW+str+RESET;
    }
    string getUYELLOW(string str)
    {
        return UYELLOW+str+RESET;
    }
    string getBBLUE(string str)
    {
        return BBLUE+str+RESET;
    }
    string getIBLUE(string str)
    {
        return IBLUE+str+RESET;
    }
    string getUBLUE(string str)
    {
        return UBLUE+str+RESET;
    }
    string getBMAGENTA(string str)
    {
        return BMAGENTA+str+RESET;
    }
    string getIMAGENTA(string str)
    {
        return IMAGENTA+str+RESET;
    }
    string getUMAGENTA(string str)
    {
        return UMAGENTA+str+RESET;
    }
    string getBCYAN(string str)
    {
        return BCYAN+str+RESET;
    }
    string getICYAN(string str)
    {
        return ICYAN+str+RESET;
    }
    string getUCYAN(string str)
    {
        return UCYAN+str+RESET;
    }
    string getBWHITE(string str)
    {
        return BWHITE+str+RESET;
    }
    string getIWHITE(string str)
    {
        return IWHITE+str+RESET;
    }
    string getUWHITE(string str)
    {
        return UWHITE+str+RESET;
    }

    /*********************************************/
    /*=======> FORMATTING WITH BACKGROUND <======*/
    string getBBGREENISH(string str)
    {
        return (BBGREENISH+str);
    }
    string getIBGGREENISH(string str)
    {
        return (IBGGREENISH+str);
    }
    string getUBGGREENISH(string str)
    {
        return (UBGGREENISH+str);
    }
    string getBBGRED(string str)
    {
        return (BBGRED+str);
    }
    string getIBGRED(string str)
    {
        return (IBGRED+str);
    }
    string getUBGRED(string str)
    {
        return (UBGRED+str);
    }
    string getBBGLGREEN(string str)
    {
        return (BBGLGREEN+str);
    }
    string getIBGLGREEN(string str)
    {
        return (IBGLGREEN+str);
    }
    string getUBGLGREEN(string str)
    {
        return (UBGLGREEN+str);
    }
    string getBBGORANGE(string str)
    {
        return (BBGORANGE+str);
    }
    string getIBGORANGE(string str)
    {
        return (IBGORANGE+str);
    }
    string getUBGORANGE(string str)
    {
        return (UBGORANGE+str);
    }
    string getBBGLBLUE(string str)
    {
        return (BBGLBLUE+str);
    }
    string getIBGLBLUE(string str)
    {
        return (IBGLBLUE+str);
    }
    string getUBGLBLUE(string str)
    {
        return (UBGLBLUE+str);
    }
    string getBBGPINK(string str)
    {
        return (BBGPINK+str);
    }
    string getIBGPINK(string str)
    {
        return (IBGPINK+str);
    }
    string getUBGPINK(string str)
    {
        return (UBGPINK+str);
    }
    string getBBGDGREEN(string str)
    {
        return (BBGDGREEN+str);
    }
    string getIGDGREEN(string str)
    {
        return (IGDGREEN+str);
    }
    string getUGDGREEN(string str)
    {
        return (UGDGREEN+str);
    }
    string getBBGWHITE(string str)
    {
        return (BBGWHITE+str);
    }
    string getIBGWHITE(string str)
    {
        return (IBGWHITE+str);
    }
    string getUBGWHITE(string str)
    {
        return (UBGWHITE+str);
    }
};