#include <string>
// #include "rainbow.h"
using namespace std;

/*###################################################################*/
/*=======================> GLOBAL CONSTANTS <========================*/
//FORMATTING TEXT
#define RESET "\x1B[0m"			//RESET NORMAL COLOR
#define BOLD "\x1B[1m" 			//BOLD
#define ITALIC "\x1B[3m"  		//ITALIC TEXT
#define UNDERLINE "\x1B[4m"  	//UNDERLINE TEXT

//TEXT COLORS
#define DGREEN "\x1B[2m" 		//DARK GREEN COLOR
#define BLACK "\x1B[30m" 		//BLACK COLOR
#define RED "\x1B[31m"  		//RED COLOR
#define LGREEN "\x1B[32m" 		//LIGHT GREEN COLOR
#define YELLOW "\x1B[33m" 		//YELLOW COLOR
#define BLUE "\x1B[34m" 		//BLUE COLOR
#define MAGENTA "\x1B[35m" 	//MAGENTA COLOR
#define CYAN "\x1B[36m" 		//CYAN COLOR
#define WHITE "\x1B[37m" 		//WHITE COLOR

//BACKGROUND COLORS
#define BGGREEN "\x1B[40m" //GREEN BACKGROUND
#define BGRED "\x1B[41m"		//RED BACKGROUND
#define BGLGREEN "\x1B[42m"	//LIGHT GREEN BACKGROUND
#define BGORANGE "\x1B[43m"	//ORANGE BACKGROUND
#define BGLBLUE "\x1B[44m"		//LIGHT BLUE BACKGROUND
#define BGPINK "\x1B[45m"		//PINK BACKGROUND
#define BGDGREEN "\x1B[46m"	//DARK GREEN BACKGROUND
#define BGWHITE "\x1B[47m"		//WHITE-GREEN BACKGROUND

//FORMATTING WITH COLORS
#define BDGREEN "\x1B[1;2m" 	//BOLD DARK GREEN COLOR
#define IDGREEN "\x1B[3;2m" //ITALIC DARK GREEN COLOR
#define UDGREEN "\x1B[4;2m" //UNDERLINE DARK GREEN COLOR
#define BRED "\x1B[1;31m"   //BOLD RED COLOR
#define IRED "\x1B[3;31m"		//ITALIC RED COLOR
#define URED "\x1B[4;31m"	//UNDERLINE RED COLOR
#define BLGREEN "\x1B[1;32m"//BOLD LIGHT GREEN COLOR
#define ILGREEN "\x1B[3;32m"	//ITALIC LIGHT  GREEN COLOR
#define ULGREEN "\x1B[4;32m"//UNDERLINE LIGHT GREEN COLOR
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
#define BBGGREEN "\x1B[1;40m" //BOLD TEXT-GREEN BACKGROUND
#define IBGGREEN "\x1B[3;40m" //ITALIC TEXT-GREEN BACKGROUND
#define UBGGREEN "\x1B[4;40m" //UNDERLINE TEXT-GREEN BACKGROUND

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
#define IBGDGREEN "\x1B[3;46m"	//ITALIC TEXT-DARK GREEN BACKGROUND
#define UBGDGREEN "\x1B[4;46m"	//UNDERLINE TEXT-DARK GREEN BACKGROUND

#define BBGWHITE "\x1B[1;47m"		//BOLD TEXT WHITE-GREEN BACKGROUND
#define IBGWHITE "\x1B[3;47m"		//ITALIC TEXT WHITE-GREEN BACKGROUND
#define UBGWHITE "\x1B[4;47m"		//UNDERLINEWHITE-GREEN BACKGROUND

//AWESOME COMBINATION

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*==========================> Rainbow class <===============================*/
class Rainbow
{
    protected:
    //USE THE UNDER CONSTANTS CAREFULLY!!!!!!
    //b ---- background
    //l ---- light
    //d ---- dark
    //FORMATTING TEXT
    string Rst;                 //RESET NORMAL COLOR
    string Bld;                 //BOLD
    string Itlc;                //ITALIC TEXT
    string Undrlne;              //UNDERLINE TEXT
    
    //TEXT COLORS
    string lgrn;                 //LIGHT GREEN COLOR
    string blk;                 //BLACK COLOR
    string red;                 //RED COLOR
    string dgrn;                 //DARK GREEN COLOR
    string ylw;                 //YELLOW COLOR
    string blu;                 //BLUE COLOR
    string mgta;                //MAGENTA COLOR
    string cyn;                 //CYAN COLOR
    string wht;                 //WHITE COLOR
    //orng                      ORANGE COLOR

    //BACKGROUND COLORS
    string bgrn;                //GREENISH BACKGROUND
    string bred;                //RED BACKGROUND
    string blgrn;               //LIGHT GREEN BACKGROUND
    string borng;               //ORANGE BACKGROUND
    string bblu;                //LIGHT BLUE BACKGROUND
    string bpnk;                //PINK BACKGROUND
    string bdgrn;               //DARK GREEN BACKGROUND
    string bwht;                //WHITE BACKGROUND

    //FORMATTING WITH COLORS
    string Blgrn;                //BOLD green color
    string Ilgrn;                //ITALIC green color
    string Ulgrn;                //UNDERLINE green color
    string Bred;                //BOLD RED COLOR
    string Ired;                //ITALIC RED COLOR
    string Ured;                //UNDERLINE RED COLOR
    string Bdgrn;                //BOLD GREEN COLOR
    string Idgrn;                //ITALIC GREEN COLOR
    string Udgrn;                //UNDERLINE GREEN COLOR
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
    string Bbgrn;       //BOLD TEXT-GREEN BACKGROUND
    string Ibgrn;       //ITALIC TEXT-GREEN BACKGROUND
    string Ubgrn;       //UNDERLINE TEXT-GREEN BACKGROUND

    string Bbred;	    //BOLD TEXT-RED BACKGROUND
    string Ibred;       //ITALIC TEXT-RED BACKGROUND
    string Ubred;       //UNDERLINE TEXT-RED BACKGROUND

    string Bblgrn;      //BOLD TEXT-LIGHT GREEN BACKGROUND
    string Iblgrn;      //ITALIC TEXT-LIGHT GREEN BACKGROUND
    string Ublgrn;      //UNDERLINE TEXT-LIGHT GREEN BACKGROUND
    
    string Bborng;      //BOLD TEXT-ORANGE BACKGROUND
    string Iborng;      //ITALIC TEXT-ORANGE BACKGROUND
    string Uborng;      //UNDERLINE TEXT-ORANGE BACKGROUND

    string Bbblu;       //BOLD TEXT-LIGHT BLUE BACKGROUND
    string Ibblu;       //ITALIC TEXT-LIGHT BLUE BACKGROUND
    string Ubblu;       //UNDERLINE TEXT-LIGHT BLUE BACKGROUND

    string Bbpnk;       //BOLD TEXT-PINK BACKGROUND
    string Ibpnk;       //ITALIC TEXT-PINK BACKGROUND
    string Ubpnk;       //UNDERLINE TEXT-PINK BACKGROUND

    string Bbdgrn;      //BOLD TEXT-DARK GREEN BACKGROUND
    string Ibdgrn;      //ITALIC TEXT-DARK GREEN BACKGROUND
    string Ubdgrn;      //UNDERLINE TEXT-DARK GREEN BACKGROUND

    string Bbwht;       //BOLD TEXT WHITE-GREEN BACKGROUND
    string Ibwht;       //ITALIC TEXT WHITE-GREEN BACKGROUND
    string Ubwht;       //UNDERLINEWHITE-GREEN BACKGROUND
    
    public:
    /***************************************************************************/
    /*=====================> DEFAULT CONSTRUCTOR <=============================*/
    Rainbow()
    {
        //FORMATTING TEXT VALUE
        Rst = RESET;        //RESET NORMAL COLOR
        Bld = BOLD; 	    //BOLD
        Itlc = ITALIC;  		//ITALIC TEXT
        Undrlne = UNDERLINE;  	//UNDERLINE TEXT

        //TEXT COLORS VALUE
        dgrn = DGREEN;                 //DARK GREEN COLOR
        blk = BLACK;                 //BLACK COLOR
        red = RED;                 //RED COLOR
        lgrn = LGREEN;            //LIGHT GREEN COLOR
        ylw = YELLOW;                 //YELLOW COLOR
        blu = BLUE;                 //BLUE COLOR
        mgta = MAGENTA;                //MAGENTA COLOR
        cyn = CYAN;                 //CYAN COLOR
        wht = WHITE;                 //WHITE COLOR

        //BACKGROUND COLORS VALUE
        bgrn = BGGREEN;                //GREEN BACKGROUND
        bred = BGRED;                //RED BACKGROUND
        blgrn = BGLGREEN;               //LIGHT GREEN BACKGROUND
        borng = BGORANGE;               //ORANGE BACKGROUND
        bblu = BGLBLUE;                //LIGHT BLUE BACKGROUND
        bpnk = BGPINK;                //PINK BACKGROUND
        bdgrn = BGDGREEN;               //DARK GREEN BACKGROUND
        bwht = BGWHITE;                //WHITE BACKGROUND

        //FORMATTING WITH COLORS VALUE
        Bdgrn = BDGREEN;                //BOLD DARK GREEN COLOR
        Idgrn = IDGREEN;                //ITALIC DARK GREEN COLOR
        Udgrn = UDGREEN;                //UNDERLINE DARK GREEN COLOR
        Bred = BRED;                //BOLD RED COLOR
        Ired = IRED;                //ITALIC RED COLOR
        Ured = URED;                //UNDERLINE RED COLOR
        Blgrn = BLGREEN;                //BOLD LIGHT GREEN COLOR
        Ilgrn = ILGREEN;                //ITALIC LIGHT GREEN COLOR
        Ulgrn = ULGREEN;                //UNDERLINE LIGHT GREEN COLOR
        Bylw = BYELLOW;                //BOLD YELLOW
        Iylw = IYELLOW;                //ITALIC YELLOW
        Uylw = UYELLOW;                //UNDERLINE YELLOW
        Bblu = BBLUE;                //BOLD BLUE
        Iblu = IBLUE;                //ITALIC BLUE
        Ublu = UBLUE;	            //UNDERLINE BLUE
        Bmgta = BMAGENTA;               //BOLD MAGENTA
        Imgta = IMAGENTA;               //ITALIC MAGENTA
        Umgta = UMAGENTA;               //UNDERLINE MAGENTA
        Bcyn = BCYAN;                //BOLD CYAN
        Icyn = ICYAN;                //ITALIC CYAN
        Ucyn = UCYAN;                //UNDERLINE CYAN
        Bwht = BWHITE;                //BOLD WHITE
        Iwht = IWHITE;                //ITALIC WHITE
        Uwht = UWHITE;                //UNDERLINE WHITE

        //FORMATTING WITH BACKGROUND VALUE
        Bbgrn = BBGGREEN;       //BOLD TEXT-GREEN BACKGROUND
        Ibgrn = IBGGREEN;       //ITALIC TEXT-GREEN BACKGROUND
        Ubgrn = UBGGREEN;       //UNDERLINE TEXT-GREEN BACKGROUND

        Bbred = BBGRED;	    //BOLD TEXT-RED BACKGROUND
        Ibred = IBGRED;       //ITALIC TEXT-RED BACKGROUND
        Ubred = UBGRED;       //UNDERLINE TEXT-RED BACKGROUND

        Bblgrn = BBGLGREEN;      //BOLD TEXT-LIGHT GREEN BACKGROUND
        Iblgrn = IBGLGREEN;      //ITALIC TEXT-LIGHT GREEN BACKGROUND
        Ublgrn = UBGLGREEN;      //UNDERLINE TEXT-LIGHT GREEN BACKGROUND
        
        Bborng = BBGORANGE;      //BOLD TEXT-ORANGE BACKGROUND
        Iborng = IBGORANGE;      //ITALIC TEXT-ORANGE BACKGROUND
        Uborng = UBGORANGE;      //UNDERLINE TEXT-ORANGE BACKGROUND

        Bbblu = BBGLBLUE;       //BOLD TEXT-LIGHT BLUE BACKGROUND
        Ibblu = IBGLBLUE;       //ITALIC TEXT-LIGHT BLUE BACKGROUND
        Ubblu = UBGLBLUE;       //UNDERLINE TEXT-LIGHT BLUE BACKGROUND

        Bbpnk = BBGPINK;       //BOLD TEXT-PINK BACKGROUND
        Ibpnk = IBGPINK;       //ITALIC TEXT-PINK BACKGROUND
        Ubpnk = UBGPINK;       //UNDERLINE TEXT-PINK BACKGROUND

        Bbdgrn = BBGDGREEN;      //BOLD TEXT-DARK GREEN BACKGROUND
        Ibdgrn = IBGDGREEN;      //ITALIC TEXT-DARK GREEN BACKGROUND
        Ubdgrn = UBGDGREEN;      //UNDERLINE TEXT-DARK GREEN BACKGROUND

        Bbwht = BBGWHITE;       //BOLD TEXT WHITE-GREEN BACKGROUND
        Ibwht = IBGWHITE;       //ITALIC TEXT WHITE-GREEN BACKGROUND
        Ubwht = UBGWHITE;       //UNDERLINEWHITE-GREEN BACKGROUND
    }
    //METHODS FOR USING THIS CLASS
    /****************************************************************/
    /*=======================> FORMATTING TEXT <===================*/
    string getRESET()
    {
        return Rst;
    }
    string getBOLD(string str)
    {
        return Bld+str+Rst;
    }
    string getITALIC(string str)
    {
        return Itlc+str+Rst;
    }
    string getUNDERLINE(string str)
    {
        return Undrlne+str+Rst;
    }

    /*********************************************/
    /*=========> GET TEXT COLORS <===============*/
    string getDGREEN(string str)
    {
        return dgrn+str+Rst;
    }
    string getBLACK(string str)
    {
        return blk+str+Rst;
    }
    string getRED(string str)
    {
        return red+str+Rst;
    }
    string getLGREEN(string str)
    {
        return lgrn+str+Rst;
    }
    string getYELLOW(string str)
    {
        return ylw+str+Rst;
    }
    string getBLUE(string str)
    {
        return blu+str+Rst;
    }
    string getMAGENTA(string str)
    {
        return mgta+str+Rst;
    }
    string getCYAN(string str)
    {
        return cyn+str+Rst;
    }
    string getWHITE(string str)
    {
        return wht+str+Rst;
    }

    /*********************************************/
    /*=======> BACKGROUND COLORS <===============*/
    string getBGGREEN(string str)
    {
        return bgrn+str;
    }
    string getBGRED(string str)
    {
        return bred+str;
    }
    string getBGLGREEN(string str)
    {
        return blgrn+str;
    }
    string getBGORANGE(string str)
    {
        return borng+str;
    }
    string getBGLBLUE(string str)
    {
        return bblu+str;
    }
    string getBGPINK(string str)
    {
        return bpnk+str;
    }
    string getBGDGREEN(string str)
    {
        return bdgrn+str;
    }
    string getBGWHITE(string str)
    {
        return bwht+str;
    }

    /*********************************************/
    /*=======> FORMATTING WITH COLORS <==========*/
    string getBDGREEN(string str)
    {
        return Bdgrn+str+Rst;
    }
    string getIDGREEN(string str)
    {
        return Idgrn+str+Rst;
    }
    string getUDGREEN(string str)
    {
        return Udgrn+str+Rst;
    }
    string getBRED(string str)
    {
        return Bred+str+Rst;
    }
    string getIRED(string str)
    {
        return Ired+str+Rst;
    }
    string getURED(string str)
    {
        return Ured+str+Rst;
    }
    string getBLGREEN(string str)
    {
        return Blgrn+str+Rst;
    }
    string getILGREEN(string str)
    {
        return Ilgrn+str+Rst;
    }
    string getULGREEN(string str)
    {
        return Ulgrn+str+Rst;
    }
    string getBYELLOW(string str)
    {
        return Bylw+str+Rst;
    }
    string getIYELLOW(string str)
    {
        return Iylw+str+Rst;
    }
    string getUYELLOW(string str)
    {
        return Uylw+str+Rst;
    }
    string getBBLUE(string str)
    {
        return Bblu+str+Rst;
    }
    string getIBLUE(string str)
    {
        return Iblu+str+Rst;
    }
    string getUBLUE(string str)
    {
        return Ublu+str+Rst;
    }
    string getBMAGENTA(string str)
    {
        return Bmgta+str+Rst;
    }
    string getIMAGENTA(string str)
    {
        return Imgta+str+Rst;
    }
    string getUMAGENTA(string str)
    {
        return Umgta+str+Rst;
    }
    string getBCYAN(string str)
    {
        return Bcyn+str+Rst;
    }
    string getICYAN(string str)
    {
        return Icyn+str+Rst;
    }
    string getUCYAN(string str)
    {
        return Ucyn+str+Rst;
    }
    string getBWHITE(string str)
    {
        return Bwht+str+Rst;
    }
    string getIWHITE(string str)
    {
        return Iwht+str+Rst;
    }
    string getUWHITE(string str)
    {
        return Uwht+str+Rst;
    }

    /*********************************************/
    /*=======> FORMATTING WITH BACKGROUND <======*/
    string getBBGREEN(string str)
    {
        return (Bbgrn+str);
    }
    string getIBGGREEN(string str)
    {
        return (Ibgrn+str);
    }
    string getUBGGREEN(string str)
    {
        return (Ubgrn+str);
    }
    string getBBGRED(string str)
    {
        return (Bbred+str);
    }
    string getIBGRED(string str)
    {
        return (Ibred+str);
    }
    string getUBGRED(string str)
    {
        return (Ubred+str);
    }
    string getBBGLGREEN(string str)
    {
        return (Bblgrn+str);
    }
    string getIBGLGREEN(string str)
    {
        return (Iblgrn+str);
    }
    string getUBGLGREEN(string str)
    {
        return (Ublgrn+str);
    }
    string getBBGORANGE(string str)
    {
        return (Bborng+str);
    }
    string getIBGORANGE(string str)
    {
        return (Iborng+str);
    }
    string getUBGORANGE(string str)
    {
        return (Uborng+str);
    }
    string getBBGLBLUE(string str)
    {
        return (Bbblu+str);
    }
    string getIBGLBLUE(string str)
    {
        return (Ibblu+str);
    }
    string getUBGLBLUE(string str)
    {
        return (Ubblu+str);
    }
    string getBBGPINK(string str)
    {
        return (Bbpnk+str);
    }
    string getIBGPINK(string str)
    {
        return (Ibpnk+str);
    }
    string getUBGPINK(string str)
    {
        return (Ubpnk+str);
    }
    string getBBGDGREEN(string str)
    {
        return (Bbdgrn+str);
    }
    string getIBGDGREEN(string str)
    {
        return (Ibdgrn+str);
    }
    string getUBGDGREEN(string str)
    {
        return (Ubdgrn+str);
    }
    string getBBGWHITE(string str)
    {
        return (Bbwht+str);
    }
    string getIBGWHITE(string str)
    {
        return (Ibwht+str);
    }
    string getUBGWHITE(string str)
    {
        return (Ubwht+str);
    }
};