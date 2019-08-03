#include "manual.h"

void formattingText()
{
	//testing formatting text
	printf("-----------------------------> FORMATTING TEXT <-----------------------------\n\n");
	printf("BOLD:\t\t%sHello World in bold text%s\n",BOLD,RESET);
	printf("ITALIC:\t\t%sHello World in italic text%s\n",ITALIC,RESET);
	printf("UNDERLINE:\t%sHello World in underline text%s\n",UNDERLINE,RESET);
	printf("BLINK:\t\t%sHello World in blink text%s\n",BLINK,RESET);
	printf("HIDDEN:\t\t%sHello World in hidden text%s\n",HIDDEN,RESET);
	printf("CUT:\t\t%sHello World in strikethrough text%s\n",CUT,RESET);
	printf("DOUBLELINE:\t%sHello World in double line text%s\n\n",DOUBLELINE,RESET);
	printf("OVERLINE:\t%sHello World in over line text%s\n\n",OVERLINE,RESET);

	//testing highlights
	printf("---------------------------> FORMATTING HIGHLIGHTS <---------------------------\n\n");
	printf("HIGHLIGHT:\t\t%sHello World in highlight color%s\n",HIGHLIGHT,RESET);
	printf("DEFAULTHIGHLIGHT:\t%sHello World in default highlight color%s\n\n",DEFAULTHIGHLIGHT,RESET);
}

void rainColors()
{
	//testing rain colors
	printf("-----------------------------> RAIN TEXT COLORS <-----------------------------\n\n");
	printf("DEFAULT:\t%sHello World in default text color%s\n",DEFAULT,RESET);
	printf("LGREEN:\t\t%sHello World in light green text color%s\n",LGREEN,RESET);
	printf("MGREEN:\t\t%sHello World in medium green text color%s\n",MGREEN,RESET);
	printf("DGREEN:\t\t%sHello World in dark green text color%s\n",DGREEN,RESET);
	printf("LRED:\t\t%sHello World in light red text color%s\n",LRED,RESET);
	printf("DRED:\t\t%sHello World in dark red text color%s\n",DRED,RESET);
	printf("LWHITE:\t\t%sHello World in light white text color%s\n",LWHITE,RESET);
	printf("DWHITE:\t\t%sHello World in dark white text color%s\n",DWHITE,RESET);
	printf("LBLUE:\t\t%sHello World in light blue text color%s\n",LBLUE,RESET);
	printf("DBLUE:\t\t%sHello World in dark blue text color%s\n",DBLUE,RESET);
	printf("LCYAN:\t\t%sHello World in light cyan text color%s\n",LCYAN,RESET);
	printf("DCYAN:\t\t%sHello World in dark cyan text color%s\n",DCYAN,RESET);
	printf("ORANGE:\t\t%sHello World in orange text color%s\n",ORANGE,RESET);
	printf("BLACK:\t\t%sHello World in black text color%s\n",BLACK,RESET);
	printf("MAGENTA:\t%sHello World in magenta text color%s\n",MAGENTA,RESET);
	printf("YELLOW:\t\t%sHello World in yellow text color%s\n",YELLOW,RESET);
	printf("LEMON:\t\t%sHello World in lemon text color%s\n",LEMON,RESET);
	printf("PINK:\t\t%sHello World in pink text color%s\n\n",PINK,RESET);
}


void rainBackgrounds()
{
	//testing rainbackground colors
	printf("---------------------------> RAIN BACKGROUND COLORS <---------------------------\n\n");
	printf("BGDGREEN:\t%sHello World with dark green background%s\n",BGDGREEN,RESET);
	printf("BGLGREEN:\t%sHello World with light green background%s\n",BGLGREEN,RESET);
	printf("BGMGREEN:\t%sHello World with medium green background%s\n",BGMGREEN,RESET);
	printf("BGDRED:\t\t%sHello World with dark red background%s\n",BGDRED,RESET);
	printf("BGLRED:\t\t%sHello World with light red background%s\n",BGLRED,RESET);
	printf("BGDORANGE:\t%sHello World with dark orange background%s\n",BGDORANGE,RESET);
	printf("BGLORANGE:\t%sHello World with light orange background%s\n",BGLORANGE,RESET);
	printf("BGLBLUE:\t%sHello World with light blue background%s\n",BGLBLUE,RESET);
	printf("BGLWHITE:\t%sHello World with light white background%s\n",BGLWHITE,RESET);
	printf("BGDWHITE:\t%sHello World with dark white background%s\n",BGDWHITE,RESET);
	printf("BGLEMON:\t%sHello World with lemon background%s\n",BGLEMON,RESET);
	printf("BGMPINK:\t%sHello World with medium pink background%s\n",BGMPINK,RESET);
	printf("BGDPINK:\t%sHello World with dark pink background%s\n",BGDPINK,RESET);
	printf("BGLPINK:\t%sHello World with light pink background%s\n\n",BGLPINK,RESET);
}

void formattingColors()
{
	printf("---------------------------> FORMATTING WITH COLORS <---------------------------\n\n");

	printf("Which color manual you want ?\n");
	printf("1. LGREEN\n");
	printf("2. DGREEN\n");
	printf("3. MGREEN\n");
	printf("4. LRED\n");
	printf("5. DRED\n");
	printf("6. LWHITE\n");
	printf("7. DWHITE\n");
	printf("8. LBLUE\n");
	printf("9. DBLUE\n");
	printf("10. LCYAN\n");
	printf("11. DCYAN\n");
	printf("12. ORANGE\n");
	printf("13. BLACK\n");
	printf("14. MAGENTA\n");
	printf("15. YELLOW\n");
	printf("16. LEMON\n");
	printf("17. PINK\n");
	printf("# ");
	int formatColorType = 0;
	scanf("%d",&formatColorType);

	switch(formatColorType)
	{
		case 1:
			formattingColorsLGREEN();
			break;
		case 2:
			formattingColorsDGREEN();
			break;
		case 3:
			formattingColorsMGREEN();
			break;
		case 4:
			formattingColorsLRED();
			break;
		case 5:
			formattingColorsDRED();
			break;
		case 6:
			formattingColorsLWHITE();
			break;
		case 7:
			formattingColorsDWHITE();
			break;
		case 8:
			formattingColorsLBLUE();
			break;
		case 9:
			formattingColorsDBLUE();
			break;
		case 10:
			formattingColorsLCYAN();
			break;
		case 11:
			formattingColorsDCYAN();
			break;
		case 12:
			formattingColorsORANGE();
			break;
		case 13:
			formattingColorsBLACK();
			break;
		case 14:
			formattingColorsMAGENTA();
			break;
		case 15:
			formattingColorsYELLOW();
			break;
		case 16:
			formattingColorsLEMON();
			break;
		case 17:
			formattingColorsPINK();
			break;
		default:
			printf("%sNo color type available%s",BDRED,RESET);
			break;
	}
}

void formattingColorsLGREEN()
{
	printf("BLGREEN:\t%sHello World with bold light green color%s\n",BLGREEN,RESET);
	printf("ILGREEN:\t%sHello World with italic light green color%s\n",ILGREEN,RESET);
	printf("ULLGREEN:\t%sHello World with underline light green color%s\n",ULLGREEN,RESET);
	printf("BKLGREEN:\t%sHello World with blinking light green color%s\n",BKLGREEN,RESET);
	printf("CLGREEN:\t%sHello World with strikethrough light green color%s\n",CLGREEN,RESET);
	printf("DLLGREEN:\t%sHello World with double line light green color%s\n\n",DLLGREEN,RESET);
	printf("OLLGREEN:\t%sHello World with overline light green color%s\n\n",OLLGREEN,RESET);
}

void formattingColorsDGREEN()
{
	printf("BDGREEN:\t%sHello World with bold dark green color%s\n",BDGREEN,RESET);
	printf("IDGREEN:\t%sHello World with italic dark green color%s\n",IDGREEN,RESET);
	printf("ULDGREEN:\t%sHello World with underline dark green color%s\n",ULDGREEN,RESET);
	printf("BKDGREEN:\t%sHello World with blinking dark green color%s\n",BKDGREEN,RESET);
	printf("CDGREEN:\t%sHello World with strikethrough dark green color%s\n",CDGREEN,RESET);
	printf("DLDGREEN:\t%sHello World with doubleline dark green color%s\n\n",DLDGREEN,RESET);
	printf("OLDGREEN:\t%sHello World with over line dark green color%s\n\n",OLDGREEN,RESET);
}

void formattingColorsMGREEN()
{
	printf("BMGREEN:\t%sHello World with bold medium green color%s\n",BMGREEN,RESET);
	printf("IMGREEN:\t%sHello World with italic medium green color%s\n",IMGREEN,RESET);
	printf("ULMGREEN:\t%sHello World with underlined medium green color%s\n",ULMGREEN,RESET);
	printf("BKMGREEN:\t%sHello World with blinking medium green color%s\n",BKMGREEN,RESET);
	printf("CMGREEN:\t%sHello World with strikethrough medium green color%s\n",CMGREEN,RESET);
	printf("DLMGREEN:\t%sHello World with doubleline medium green color%s\n\n",DLMGREEN,RESET);
	printf("OLMGREEN:\t%sHello World with overline medium green color%s\n\n",OLMGREEN,RESET);
}

void formattingColorsLRED()
{
	printf("BLRED:\t\t%sHello World with bold light red color%s\n",BLRED,RESET);
	printf("ILRED:\t\t%sHello World with italic light red color%s\n",ILRED,RESET);
	printf("ULLRED:\t\t%sHello World with underlined light red color%s\n",ULLRED,RESET);
	printf("BKLRED:\t\t%sHello World with blinking light red color%s\n",BKLRED,RESET);
	printf("CLRED:\t\t%sHello World with strikethrough light red color%s\n",CLRED,RESET);
	printf("DLLRED:\t\t%sHello World with double line light red color%s\n\n",DLLRED,RESET);
	printf("OLLRED:\t\t%sHello World with over line light red color%s\n\n",OLLRED,RESET);
}

void formattingColorsDRED()
{
	printf("BDRED:\t\t%sHello World with bold dark red color%s\n",BDRED,RESET);
	printf("IDRED:\t\t%sHello World with italic dark red color%s\n",IDRED,RESET);
	printf("ULDRED:\t\t%sHello World with underlined dark red color%s\n",ULDRED,RESET);
	printf("BKDRED:\t\t%sHello World with blinking dark red color%s\n",BKDRED,RESET);
	printf("CDRED:\t\t%sHello World with strikethrough dark red color%s\n",CDRED,RESET);
	printf("DLDRED:\t\t%sHello World with doubleline dark red color%s\n\n",DLDRED,RESET);
	printf("OLDRED:\t\t%sHello World with over line dark red color%s\n\n",OLDRED,RESET);
}

void formattingColorsLWHITE()
{
	printf("BLWHITE:\t%sHello World with bold light white color%s\n",BLWHITE,RESET);
	printf("ILWHITE:\t%sHello World with italic light white color%s\n",ILWHITE,RESET);
	printf("ULLWHITE:\t%sHello World with underlined light white color%s\n",ULLWHITE,RESET);
	printf("BKLWHITE:\t%sHello World with blinking light white color%s\n",BKLWHITE,RESET);
	printf("CLWHITE:\t%sHello World with strikethrough light white color%s\n",CLWHITE,RESET);
	printf("DLLWHITE:\t%sHello World with double line light white color%s\n\n",DLLWHITE,RESET);
	printf("OLLWHITE:\t%sHello World with over line light white color%s\n\n",OLLWHITE,RESET);
}

void formattingColorsDWHITE()
{
	printf("BDWHITE:\t%sHello World with bold dark white color%s\n",BDWHITE,RESET);
	printf("IDWHITE:\t%sHello World with italic dark white color%s\n",IDWHITE,RESET);
	printf("ULDWHITE:\t%sHello World with underlined dark white color%s\n",ULDWHITE,RESET);
	printf("BKDWHITE:\t%sHello World with blinking dark white color%s\n",BKDWHITE,RESET);
	printf("CDWHITE:\t%sHello World with strikethrough dark white color%s\n",CDWHITE,RESET);
	printf("DLDWHITE:\t%sHello World with doubleline dark white color%s\n\n",DLDWHITE,RESET);
	printf("OLDWHITE:\t%sHello World with overline dark white color%s\n\n",OLDWHITE,RESET);
}

void formattingColorsLBLUE()
{
	printf("BLBLUE:\t\t%sHello World with bold light blue color%s\n",BLBLUE,RESET);
	printf("ILBLUE:\t\t%sHello World with italic light blue color%s\n",ILBLUE,RESET);
	printf("ULLBLUE:\t%sHello World with underline light blue color%s\n",ULLBLUE,RESET);
	printf("BKLBLUE:\t%sHello World with blinking light blue color%s\n",BKLBLUE,RESET);
	printf("CLBLUE:\t\t%sHello World with strikethrough light blue color%s\n",CLBLUE,RESET);
	printf("DLLBLUE:\t%sHello World with double line light blue color%s\n\n",DLLBLUE,RESET);
	printf("OLLBLUE:\t%sHello World with over line light blue color%s\n\n",OLLBLUE,RESET);
}

void formattingColorsDBLUE()
{
	printf("BDBLUE:\t\t%sHello World with bold dark blue color%s\n",BDBLUE,RESET);
	printf("IDBLUE:\t\t%sHello World with italic dark blue color%s\n",IDBLUE,RESET);
	printf("ULDBLUE:\t%sHello World with underline dark blue color%s\n",ULDBLUE,RESET);
	printf("BKDBLUE:\t%sHello World with blinking dark blue color%s\n",BKDBLUE,RESET);
	printf("CDBLUE:\t\t%sHello World with strikethrough dark blue color%s\n",CDBLUE,RESET);
	printf("DLDBLUE:\t%sHello World with doubleline dark blue color%s\n\n",DLDBLUE,RESET);
	printf("OLDBLUE:\t%sHello World with overline dark blue color%s\n\n",OLDBLUE,RESET);
}

void formattingColorsLCYAN()
{
	printf("BLCYAN:\t\t%sHello World with bold light cyan color%s\n",BLCYAN,RESET);
	printf("ILCYAN:\t\t%sHello World with italic light cyan color%s\n",ILCYAN,RESET);
	printf("ULLCYAN:\t%sHello World with underline light cyan color%s\n",ULLCYAN,RESET);
	printf("BKLCYAN:\t%sHello World with blinking light cyan color%s\n",BKLCYAN,RESET);
	printf("CLCYAN:\t\t%sHello World with strikethrough light cyan color%s\n",CLCYAN,RESET);
	printf("DLLCYAN:\t%sHello World with doubleline light cyan color%s\n\n",DLLCYAN,RESET);
	printf("OLLCYAN:\t%sHello World with overline light cyan color%s\n\n",OLLCYAN,RESET);
}

void formattingColorsDCYAN()
{
	printf("BDCYAN:\t\t%sHello World with bold dark cyan color%s\n",BDCYAN,RESET);
	printf("IDCYAN:\t\t%sHello World with italic dark cyan color%s\n",IDCYAN,RESET);
	printf("ULDCYAN:\t%sHello World with underline dark cyan color%s\n",ULDCYAN,RESET);
	printf("BKDCYAN:\t%sHello World with blinking dark cyan color%s\n",BKDCYAN,RESET);
	printf("CDCYAN:\t\t%sHello World with cut dark cyan color%s\n",CDCYAN,RESET);
	printf("DLDCYAN:\t%sHello World with doubleline dark cyan color%s\n\n",DLDCYAN,RESET);
	printf("OLDCYAN:\t%sHello World with overline dark cyan color%s\n\n",OLDCYAN,RESET);
}

void formattingColorsORANGE()
{
	printf("BORANGE:\t%sHello World with bold orange color%s\n",BORANGE,RESET);
	printf("IORANGE:\t%sHello World with italic orange color%s\n",IORANGE,RESET);
	printf("ULORANGE:\t%sHello World with underline orange color%s\n",ULORANGE,RESET);
	printf("BKORANGE:\t%sHello World with blinking orange color%s\n",BKORANGE,RESET);
	printf("CORANGE:\t%sHello World with cut orange color%s\n",CORANGE,RESET);
	printf("DLORANGE:\t%sHello World with doubleline orange color%s\n\n",DLORANGE,RESET);
	printf("OLORANGE:\t%sHello World with overline orange color%s\n\n",OLORANGE,RESET);
}

void formattingColorsBLACK()
{
	printf("BBLACK:\t\t%sHello World with bold black color%s\n",BBLACK,RESET);
	printf("IBLACK:\t\t%sHello World with bold black color%s\n",IBLACK,RESET);
	printf("ULBLACK:\t%sHello World with bold black color%s\n",ULBLACK,RESET);
	printf("BKBLACK:\t%sHello World with bold black color%s\n",BKBLACK,RESET);
	printf("CBLACK:\t\t%sHello World with bold black color%s\n",CBLACK,RESET);
	printf("DLBLACK:\t%sHello World with bold black color%s\n\n",DLBLACK,RESET);
	printf("OLBLACK:\t%sHello World with bold black color%s\n\n",OLBLACK,RESET);
}

void formattingColorsMAGENTA()
{
	printf("BMAGENTA:\t%sHello World with bold magenta color%s\n",BMAGENTA,RESET);
	printf("IMAGENTA:\t%sHello World with italic magenta color%s\n",IMAGENTA,RESET);
	printf("ULMAGENTA:\t%sHello World with underline magenta color%s\n",ULMAGENTA,RESET);
	printf("BKMAGENTA:\t%sHello World with blinking magenta color%s\n",BKMAGENTA,RESET);
	printf("CMAGENTA:\t%sHello World with cut magenta color%s\n",CMAGENTA,RESET);
	printf("DLMAGENTA:\t%sHello World with doubleline magenta color%s\n\n",DLMAGENTA,RESET);
	printf("OLMAGENTA:\t%sHello World with overline magenta color%s\n\n",OLMAGENTA,RESET);
}

void formattingColorsYELLOW()
{
	printf("BYELLOW:\t%sHello World with bold yellow color%s\n",BYELLOW,RESET);
	printf("IYELLOW:\t%sHello World with italic yellow color%s\n",IYELLOW,RESET);
	printf("ULYELLOW:\t%sHello World with underline yellow color%s\n",ULYELLOW,RESET);
	printf("BKYELLOW:\t%sHello World with blinking yellow color%s\n",BKYELLOW,RESET);
	printf("CYELLOW:\t%sHello World with strikethrough yellow color%s\n",CYELLOW,RESET);
	printf("DLYELLOW:\t%sHello World with doubleline yellow color%s\n\n",DLYELLOW,RESET);
	printf("OLYELLOW:\t%sHello World with overline yellow color%s\n\n",OLYELLOW,RESET);
}

void formattingColorsLEMON()
{
	printf("BLEMON:\t\t%sHello World with bold lemon color%s\n",BLEMON,RESET);
	printf("ILEMON:\t\t%sHello World with italic lemon color%s\n",ILEMON,RESET);
	printf("ULLEMON:\t%sHello World with underline lemon color%s\n",ULLEMON,RESET);
	printf("BKLEMON:\t%sHello World with blinking lemon color%s\n",BKLEMON,RESET);
	printf("CLEMON:\t\t%sHello World with cut lemon color%s\n",CLEMON,RESET);
	printf("DLLEMON:\t%sHello World with doubleline lemon color%s\n\n",DLLEMON,RESET);
	printf("OLLEMON:\t%sHello World with overline lemon color%s\n\n",OLLEMON,RESET);
}
void formattingColorsPINK()
{
	printf("BPINK:\t\t%sHello World with bold pink color%s\n",BPINK,RESET);
	printf("IPINK:\t\t%sHello World with italic pink color%s\n",IPINK,RESET);
	printf("ULPINK:\t\t%sHello World with underline pink color%s\n",ULPINK,RESET);
	printf("BKPINK:\t\t%sHello World with blinking pink color%s\n",BKPINK,RESET);
	printf("CPINK:\t\t%sHello World with cut pink color%s\n",CPINK,RESET);
	printf("DLPINK:\t\t%sHello World with double line pink color%s\n\n",DLPINK,RESET);
	printf("OLPINK:\t\t%sHello World with over line pink color%s\n\n",OLPINK,RESET);
}

void formattingBackgrounds()
{
	//testing formatting with background
	printf("---------------------------> FORMATTING WITH BACKGROUND <---------------------------\n\n");

	printf("Which background color manual you want ?\n");
	printf("1. DGREEN\n");
	printf("2. LGREEN\n");
	printf("3. MGREEN\n");
	printf("4. DRED\n");
	printf("5. LRED\n");
	printf("6. DORANGE\n");
	printf("7. LORANGE\n");
	printf("8. LBLUE\n");
	printf("9. LWHITE\n");
	printf("10. DWHITE\n");
	printf("11. LEMON\n");
	printf("12. DPINK\n");
	printf("13. LPINK\n");
	printf("14. MPINK\n");
	printf("# ");
	int formatBackgroundType = 0;
	scanf("%d",&formatBackgroundType);

	switch(formatBackgroundType)
	{
		case 1:
			formattingBackgroundsDGREEN();
			break;
		case 2:
			formattingBackgroundsLGREEN();
			break;
		case 3:
			formattingBackgroundsMGREEN();
			break;
		case 4:
			formattingBackgroundsDRED();
			break;
		case 5:
			formattingBackgroundsLRED();
			break;
		case 6:
			formattingBackgroundsDORANGE();
			break;
		case 7:
			formattingBackgroundsLORANGE();
			break;
		case 8:
			formattingBackgroundsLBLUE();
			break;
		case 9:
			formattingBackgroundsLWHITE();
			break;
		case 10:
			formattingBackgroundsDWHITE();
			break;
		case 11:
			formattingBackgroundsLEMON();
			break;
		case 12:
			formattingBackgroundsDPINK();
			break;
		case 13:
			formattingBackgroundsLPINK();
			break;
		case 14:
			formattingBackgroundsMPINK();
			break;
		default:
			printf("%sNo background color type available%s",BDRED,RESET);
			break;
	}
}

void formattingBackgroundsDGREEN()
{
	printf("BBGDGREEN:\t%sHello World with bold text dark green background%s\n",BBGDGREEN,RESET);
	printf("IBGDGREEN:\t%sHello World with italic text dark green background%s\n",IBGDGREEN,RESET);
	printf("ULBGDGREEN:\t%sHello World with underline text dark green background%s\n",ULBGDGREEN,RESET);
	printf("BKBGDGREEN:\t%sHello World with blinking text dark green background%s\n",BKBGDGREEN,RESET);
	printf("CBGDGREEN:\t%sHello World with cut text dark green background%s\n",CBGDGREEN,RESET);
	printf("DLBGDGREEN:\t%sHello World with double line text dark green background%s\n\n",DLBGDGREEN,RESET);
	printf("OLBGDGREEN:\t%sHello World with over line text dark green background%s\n\n",OLBGDGREEN,RESET);
}

void formattingBackgroundsLGREEN()
{
	printf("BBGLGREEN:\t%sHello World with bold text light green background%s\n",BBGLGREEN,RESET);
	printf("IBGLGREEN:\t%sHello World with italic text light green background%s\n",IBGLGREEN,RESET);
	printf("ULBGLGREEN:\t%sHello World with underline text light green background%s\n",ULBGLGREEN,RESET);
	printf("BKBGLGREEN:\t%sHello World with blinking text light green background%s\n",BKBGLGREEN,RESET);
	printf("CBGLGREEN:\t%sHello World with cut text light green background%s\n",CBGLGREEN,RESET);
	printf("DLBGLGREEN:\t%sHello World with double line text light green background%s\n\n",DLBGLGREEN,RESET);
	printf("OLBGLGREEN:\t%sHello World with over line text light green background%s\n\n",OLBGLGREEN,RESET);
}

void formattingBackgroundsMGREEN()
{
	printf("BBGMGREEN:\t%sHello World with bold text medium green background%s\n",BBGMGREEN,RESET);
	printf("IBGMGREEN:\t%sHello World with italic text medium green background%s\n",IBGMGREEN,RESET);
	printf("ULBGMGREEN:\t%sHello World with underline text medium green background%s\n",ULBGMGREEN,RESET);
	printf("BKBGMGREEN:\t%sHello World with blinking text medium green background%s\n",BKBGMGREEN,RESET);
	printf("CBGMGREEN:\t%sHello World with cut text medium green background%s\n",CBGMGREEN,RESET);
	printf("DLBGMGREEN:\t%sHello World with double line text medium green background%s\n\n",DLBGMGREEN,RESET);
	printf("OLBGMGREEN:\t%sHello World with over line text medium green background%s\n\n",OLBGMGREEN,RESET);
}

void formattingBackgroundsDRED()
{
	printf("BBGDRED:\t%sHello World with bold text dark red background%s\n",BBGDRED,RESET);
	printf("IBGDRED:\t%sHello World with italic text dark red background%s\n",IBGDRED,RESET);
	printf("ULBGDRED:\t%sHello World with underline text dark red background%s\n",ULBGDRED,RESET);
	printf("BKBGDRED:\t%sHello World with blinking text dark red background%s\n",BKBGDRED,RESET);
	printf("CBBGDRED:\t%sHello World with cut text dark red background%s\n",CBGDRED,RESET);
	printf("DLBGDRED:\t%sHello World with doubleline text dark red background%s\n\n",DLBGDRED,RESET);
	printf("OLBGDRED:\t%sHello World with overline text dark red background%s\n\n",OLBGDRED,RESET);
}

void formattingBackgroundsLRED()
{
	printf("BBGLRED:\t%sHello World with bold text light red background%s\n",BBGLRED,RESET);
	printf("IBGLRED:\t%sHello World with italic text light red background%s\n",IBGLRED,RESET);
	printf("ULBGLRED:\t%sHello World with underline text light red background%s\n",ULBGLRED,RESET);
	printf("BKBGLRED:\t%sHello World with blinking text light red background%s\n",BKBGLRED,RESET);
	printf("CBBGLRED:\t%sHello World with cut text light red background%s\n",CBGLRED,RESET);
	printf("DLBGLRED:\t%sHello World with double line text light red background%s\n\n",DLBGLRED,RESET);
	printf("OLBGLRED:\t%sHello World with overline text light red background%s\n\n",OLBGLRED,RESET);
}

void formattingBackgroundsDORANGE()
{
	printf("BBGDORANGE:\t%sHello World with bold text dark orange background%s\n",BBGDORANGE,RESET);
	printf("IBGDORANGE:\t%sHello World with italic text dark orange background%s\n",IBGDORANGE,RESET);
	printf("ULBGDORANGE:\t%sHello World with underline text dark orange background%s\n",ULBGDORANGE,RESET);
	printf("BKBGDORANGE:\t%sHello World with blinking text dark orange background%s\n",BKBGDORANGE,RESET);
	printf("CBGDORANGE:\t%sHello World with cut text dark orange background%s\n",CBGDORANGE,RESET);
	printf("DLBGDORANGE:\t%sHello World with doubleline text dark orange background%s\n\n",DLBGDORANGE,RESET);
	printf("OLBGDORANGE:\t%sHello World with overline text dark orange background%s\n\n",OLBGDORANGE,RESET);
}

void formattingBackgroundsLORANGE()
{
	printf("BBGLORANGE:\t%sHello World with bold text light orange background%s\n",BBGLORANGE,RESET);
	printf("IBGLORANGE:\t%sHello World with italic text light orange background%s\n",IBGLORANGE,RESET);
	printf("ULBGLORANGE:\t%sHello World with underline text light orange background%s\n",ULBGLORANGE,RESET);
	printf("BKBGLORANGE:\t%sHello World with blinking text light orange background%s\n",BKBGLORANGE,RESET);
	printf("CBGLORANGE:\t%sHello World with cut text light orange background%s\n",CBGLORANGE,RESET);
	printf("DLBGLORANGE:\t%sHello World with doubleline text light orange background%s\n\n",DLBGLORANGE,RESET);
	printf("OLBGLORANGE:\t%sHello World with overline text light orange background%s\n\n",OLBGLORANGE,RESET);
}

void formattingBackgroundsLBLUE()
{
	printf("BBGLBLUE:\t%sHello World with bold text light blue background%s\n",BBGLBLUE,RESET);
	printf("IBGLBLUE:\t%sHello World with italic text light blue background%s\n",IBGLBLUE,RESET);
	printf("ULBGLBLUE:\t%sHello World with underline text light blue background%s\n",ULBGLBLUE,RESET);
	printf("BKBGLBLUE:\t%sHello World with blinking text light blue background%s\n",BKBGLBLUE,RESET);
	printf("CBGLBLUE:\t%sHello World with cut text light blue background%s\n",CBGLBLUE,RESET);
	printf("DLBGLBLUE:\t%sHello World with double line text light blue background%s\n\n",DLBGLBLUE,RESET);
	printf("OLBGLBLUE:\t%sHello World with overline text light blue background%s\n\n",OLBGLBLUE,RESET);
}

void formattingBackgroundsLWHITE()
{
	printf("BBGLWHITE:\t%sHello World with bold text light white background%s\n",BBGLWHITE,RESET);
	printf("IBGLWHITE:\t%sHello World with italic text light white background%s\n",IBGLWHITE,RESET);
	printf("ULBGLWHITE:\t%sHello World with underline text light white background%s\n",ULBGLWHITE,RESET);
	printf("BKBGLWHITE:\t%sHello World with blinking text light white background%s\n",BKBGLWHITE,RESET);
	printf("CBGLWHITE:\t%sHello World with cut text light white background%s\n",CBGLWHITE,RESET);
	printf("DLBGLWHITE:\t%sHello World with double line text light white background%s\n\n",DLBGLWHITE,RESET);
	printf("OLBGLWHITE:\t%sHello World with overline text light white background%s\n\n",OLBGLWHITE,RESET);
}

void formattingBackgroundsDWHITE()
{
	printf("BBGDWHITE:\t%sHello World with bold text dark white background%s\n",BBGDWHITE,RESET);
	printf("IBGDWHITE:\t%sHello World with italic text dark white background%s\n",IBGDWHITE,RESET);
	printf("ULBGDWHITE:\t%sHello World with underline text dark white background%s\n",ULBGDWHITE,RESET);
	printf("BKBGDWHITE:\t%sHello World with blinking text dark white background%s\n",BKBGDWHITE,RESET);
	printf("CBGDWHITE:\t%sHello World with cut text dark white background%s\n",CBGDWHITE,RESET);
	printf("DLBGDWHITE:\t%sHello World with double line text dark white background%s\n\n",DLBGDWHITE,RESET);
	printf("OLBGDWHITE:\t%sHello World with overline text dark white background%s\n\n",OLBGDWHITE,RESET);
}

void formattingBackgroundsLEMON()
{
	printf("BBGLEMON:\t%sHello World with bold text lemon background%s\n",BBGLEMON,RESET);
	printf("IBGLEMON:\t%sHello World with italic text lemon background%s\n",IBGLEMON,RESET);
	printf("ULBGLEMON:\t%sHello World with underline text lemon background%s\n",ULBGLEMON,RESET);
	printf("BKBGLEMON:\t%sHello World with blinking text lemon background%s\n",BKBGLEMON,RESET);
	printf("CBGLEMON:\t%sHello World with cut text lemon background%s\n",CBGLEMON,RESET);
	printf("DLBGLEMON:\t%sHello World with double line text lemon background%s\n\n",DLBGLEMON,RESET);
	printf("OLBGLEMON:\t%sHello World with over line text lemon background%s\n\n",OLBGLEMON,RESET);
}

void formattingBackgroundsDPINK()
{
	printf("BBGDPINK:\t%sHello World with bold text dark pink background%s\n",BBGDPINK,RESET);
	printf("IBGDPINK:\t%sHello World with italic text dark pink background%s\n",IBGDPINK,RESET);
	printf("ULBGDPINK:\t%sHello World with underline text dark pink background%s\n",ULBGDPINK,RESET);
	printf("BKBGDPINK:\t%sHello World with blinking text dark pink background%s\n",BKBGDPINK,RESET);
	printf("CBGDPINK:\t%sHello World with cut text dark pink background%s\n",CBGDPINK,RESET);
	printf("DLBGDPINK:\t%sHello World with double line text dark pink background%s\n\n",DLBGDPINK,RESET);
	printf("OLBGDPINK:\t%sHello World with over line text dark pink background%s\n\n",OLBGDPINK,RESET);
}

void formattingBackgroundsLPINK()
{
	printf("BBGLPINK:\t%sHello World with bold text light pink background%s\n",BBGLPINK,RESET);
	printf("IBGLPINK:\t%sHello World with italic text light pink background%s\n",IBGLPINK,RESET);
	printf("ULBGLPINK:\t%sHello World with underline text light pink background%s\n",ULBGLPINK,RESET);
	printf("BKBGLPINK:\t%sHello World with blinking text light pink background%s\n",BKBGLPINK,RESET);
	printf("CBGLPINK:\t%sHello World with cut text light pink background%s\n",CBGLPINK,RESET);
	printf("DLBGLPINK:\t%sHello World with double line text light pink background%s\n\n",DLBGLPINK,RESET);
	printf("OLBGLPINK:\t%sHello World with over line text light pink background%s\n\n",OLBGLPINK,RESET);
}

void formattingBackgroundsMPINK()
{
	printf("BBGMPINK:\t%sHello World with bold text medium pink background%s\n",BBGMPINK,RESET);
	printf("IBGMPINK:\t%sHello World with italic text medium pink background%s\n",IBGMPINK,RESET);
	printf("ULBGMPINK:\t%sHello World with underline text medium pink background%s\n",ULBGMPINK,RESET);
	printf("BKBGMPINK:\t%sHello World with blinking text medium pink background%s\n",BKBGMPINK,RESET);
	printf("CBGMPINK:\t%sHello World with cut text medium pink background%s\n",CBGMPINK,RESET);
	printf("DLBGMPINK:\t%sHello World with double line text medium pink background%s\n\n",DLBGMPINK,RESET);
	printf("OLBGMPINK:\t%sHello World with over line text medium pink background%s\n\n",OLBGMPINK,RESET);
}


int main()
{	
	printf("===============================> RAINBOW MANUAL <===============================\n\n");
	printf("Which manual you are looking for ?\n");
	printf("1. Formatting Texts\n");
	printf("2. Rain Colors\n");
	printf("3. Background Colors\n");
	printf("4. Formatting with Colors\n");
	printf("5. Formatting with Backgrounds\n");
	printf("# ");
	int answer = 0;
	scanf("%d",&answer);

	switch(answer)
	{
		case 1:
			formattingText();
			break;
		case 2:
			rainColors();
			break;
		case 3:
			rainBackgrounds();
			break;
		case 4:
			formattingColors();
			break;
		case 5:
			formattingBackgrounds();
		 	break;
		default:
			printf("%sInvalid Manual Option !!!%s\n\n",BDRED,RESET);
			break;
	}
}
