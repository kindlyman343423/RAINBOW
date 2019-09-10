#include "manual.hpp"

void formattingText()
{
	//testing formatting text
	cout << "-----------------------------> FORMATTING TEXT <-----------------------------\n" << endl;
	cout << "BOLD:\t\t"     << BOLD         << "Hello World in bold text"           << RESET << endl;
	cout << "ITALIC:\t\t"   << ITALIC       << "Hello World in italic text"         << RESET << endl;
	cout << "UNDERLINE:\t"  << UNDERLINE    << "Hello World in underline text"      << RESET << endl;
	cout << "BLINK:\t\t"    << BLINK        << "Hello World in blink text"          << RESET << endl;
	cout << "HIDDEN:\t\t"   << HIDDEN       << "Hello World in hidden text"         << RESET << endl;
	cout << "CUT:\t\t"      << CUT          << "Hello World in strikethrough text"  << RESET << endl;
	cout << "DOUBLELINE:\t" << DOUBLELINE   << "Hello World in double line text\n"<< RESET << endl;
	cout << "OVERLINE:\t"   << OVERLINE     << "Hello World in over line text\n"  << RESET << endl;

	//testing highlights
	cout << "---------------------------> FORMATTING HIGHLIGHTS <---------------------------\n" << endl;
	cout << "HIGHLIGHT:\t\t"        << HIGHLIGHT        << "Hello World in highlight color"             << RESET << endl;
	cout << "DEFAULTHIGHLIGHT:\t"   << DEFAULTHIGHLIGHT << "Hello World in default highlight color\n"   << RESET << endl;
}

void rainColors()
{
	//testing rain colors
	cout << "-----------------------------> RAIN TEXT COLORS <-----------------------------\n" << endl;
    cout << "DEFAULT:\t"    << DEFAULT  << "Hello World in default text color"      << RESET << endl;
	cout << "LGREEN:\t\t"   << LGREEN   << "Hello World in light green text color"  << RESET << endl;
	cout << "MGREEN:\t\t"   << MGREEN   << "Hello World in medium green text color" << RESET << endl;
	cout << "DGREEN:\t\t"   << DGREEN   << "Hello World in dark green text color"   << RESET << endl;
	cout << "LRED:\t\t"     << LRED     << "Hello World in light red text color"    << RESET << endl;
	cout << "DRED:\t\t"     << DRED     << "Hello World in dark red text color"     << RESET << endl;
	cout << "LWHITE:\t\t"   << LWHITE   << "Hello World in light white text color"  << RESET << endl;
	cout << "DWHITE:\t\t"   << DWHITE   << "Hello World in dark white text color"   << RESET << endl;
	cout << "LBLUE:\t\t"    << LBLUE    << "Hello World in light blue text color"   << RESET << endl;
	cout << "DBLUE:\t\t"    << DBLUE    << "Hello World in dark blue text color"    << RESET << endl;
	cout << "LCYAN:\t\t"    << LCYAN    << "Hello World in light cyan text color"   << RESET << endl;
	cout << "DCYAN:\t\t"    << DCYAN    << "Hello World in dark cyan text color"    << RESET << endl;
	cout << "ORANGE:\t\t"   << ORANGE   << "Hello World in orange text color"       << RESET << endl;
	cout << "BLACK:\t\t"    << BLACK    << "Hello World in black text color"        << RESET << endl;
	cout << "MAGENTA:\t"    << MAGENTA  << "Hello World in magenta text color"      << RESET << endl;
	cout << "YELLOW:\t\t"   << YELLOW   << "Hello World in yellow text color"       << RESET << endl;
	cout << "LEMON:\t\t"    << LEMON    << "Hello World in lemon text color"        << RESET << endl;
	cout << "PINK:\t\t"     << PINK     << "Hello World in pink text color\n"       << RESET << endl;
}


void rainBackgrounds()
{
	//testing rainbackground colors
	cout << "---------------------------> RAIN BACKGROUND COLORS <---------------------------\n" << endl;
	cout << "BGDGREEN:\t" 	<< BGDGREEN	<< "Hello World with dark green background"		<< RESET << endl;
	cout << "BGLGREEN:\t" 	<< BGLGREEN << "Hello World with light green background" 	<< RESET << endl;
	cout << "BGMGREEN:\t" 	<< BGMGREEN << "Hello World with medium green background" 	<< RESET << endl;
	cout << "BGDRED:\t\t" 	<< BGDRED  	<< "Hello World with dark red background" 		<< RESET << endl;
	cout << "BGLRED:\t\t" 	<< BGLRED 	<< "Hello World with light red background"		<< RESET << endl;
	cout << "BGDORANGE:\t"	<< BGDORANGE<< "Hello World with dark orange background" 	<< RESET << endl;
	cout << "BGLORANGE:\t" 	<< BGLORANGE<< "Hello World with light orange background" 	<< RESET << endl;
	cout << "BGLBLUE:\t" 	<< BGLBLUE 	<< "Hello World with light blue background" 	<< RESET << endl;
	cout << "BGLWHITE:\t" 	<< BGLWHITE << "Hello World with light white background" 	<< RESET << endl;
	cout << "BGDWHITE:\t" 	<< BGDWHITE << "Hello World with dark white background" 	<< RESET << endl;
	cout << "BGLEMON:\t" 	<< BGLEMON 	<< "Hello World with lemon background" 			<< RESET << endl;
	cout << "BGMPINK:\t" 	<< BGMPINK 	<< "Hello World with medium pink background" 	<< RESET << endl;
	cout << "BGDPINK:\t" 	<< BGDPINK 	<< "Hello World with dark pink background"	 	<< RESET << endl;
	cout << "BGLPINK:\t" 	<< BGLPINK 	<< "Hello World with light pink background\n" 	<< RESET << endl;
}

void formattingColors()
{
	// printf("---------------------------> FORMATTING WITH COLORS <---------------------------\n\n");

	cout << "Which color manual you want ?" << endl;
	cout << "1. LGREEN" 	<< endl;
	cout << "2. DGREEN" 	<< endl;
	cout << "3. MGREEN" 	<< endl;
	cout << "4. LRED" 		<< endl;
	cout << "5. DRED" 		<< endl;
	cout << "6. LWHITE" 	<< endl;
	cout << "7. DWHITE" 	<< endl;
	cout << "8. LBLUE" 		<< endl;
	cout << "9. DBLUE" 		<< endl;
	cout << "10. LCYAN" 	<< endl;
	cout << "11. DCYAN" 	<< endl;
	cout << "12. ORANGE"	<< endl;
	cout << "13. BLACK" 	<< endl;
	cout << "14. MAGENTA" 	<< endl;
	cout << "15. YELLOW" 	<< endl;
	cout << "16. LEMON" 	<< endl;
	cout << "17. PINK" 		<< endl;
	cout << "# " 			<< endl;
	int formatColorType = 0;
	cin >> formatColorType;

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
			cout << BDRED << "No color type available" << RESET << endl;
			break;
	}
}

void formattingColorsLGREEN()
{
	cout << "BLGREEN:" 	<< BLGREEN 	<< "\tHello World with bold light green color" 			<< RESET << endl;
	cout << "ILGREEN:" 	<< ILGREEN 	<< "\tHello World with italic light green color"		<< RESET << endl;
	cout << "ULLGREEN:" << ULLGREEN << "\tHello World with underline light green color" 	<< RESET << endl;
	cout << "BKLGREEN:" << BKLGREEN << "\tHello World with blinking light green color" 		<< RESET << endl;
	cout << "CLGREEN:" 	<< CLGREEN 	<< "\tHello World with strikethrough light green color" << RESET << endl;
	cout << "DLLGREEN:" << DLLGREEN << "\tHello World with double line light green color\n" << RESET << endl;
	cout << "OLLGREEN:" << OLLGREEN << "\tHello World with overline light green color\n" 	<< RESET << endl;
}

void formattingColorsDGREEN()
{
	cout << "BDGREEN:" 	<< BDGREEN 	<< "\tHello World with bold dark green color" 			<< RESET << endl;
	cout << "IDGREEN:" 	<< IDGREEN 	<< "\tHello World with italic dark green color" 		<< RESET << endl;
	cout << "ULDGREEN:"	<< ULDGREEN << "\tHello World with underline dark green color" 		<< RESET << endl;
	cout << "BKDGREEN:" << BKDGREEN << "\tHello World with blinking dark green color" 		<< RESET << endl;
	cout << "CDGREEN:" 	<< CDGREEN 	<< "\tHello World with strikethrough dark green color" 	<< RESET << endl;
	cout << "DLDGREEN:" << DLDGREEN << "\tHello World with doubleline dark green color\n" 	<< RESET << endl;
	cout << "OLDGREEN:" << OLDGREEN << "\tHello World with over line dark green color\n" 	<< RESET << endl;
}

void formattingColorsMGREEN()
{
	cout << "BMGREEN:" 	<< BMGREEN 	<< "\tHello World with bold medium green color" 		<< RESET << endl;
	cout << "IMGREEN:" 	<< IMGREEN 	<< "\tHello World with italic medium green color" 		<< RESET << endl;
	cout << "ULMGREEN:"	<< ULMGREEN << "\tHello World with underlined medium green color" 	<< RESET << endl;
	cout << "BKMGREEN:" << BKMGREEN << "\tHello World with blinking medium green color" 	<< RESET << endl;
	cout << "CMGREEN:" 	<< CMGREEN 	<< "\tHello World with strikethrough medium green color"<< RESET << endl;
	cout << "DLMGREEN:" << DLMGREEN << "\tHello World with doubleline medium green color\n" << RESET << endl;
	cout << "OLMGREEN:" << OLMGREEN << "\tHello World with overline medium green color\n" 	<< RESET << endl;
}

void formattingColorsLRED()
{
	cout << "BLRED:" 	<< BLRED 	<< "\t\tHello World with bold light red color" 			<< RESET << endl;
	cout << "ILRED:" 	<< ILRED 	<< "\t\tHello World with italic light red color"	 	<< RESET << endl;
	cout << "ULLRED:" 	<< ULLRED 	<< "\t\tHello World with underlined light red color" 	<< RESET << endl;
	cout << "BKLRED:" 	<< BKLRED 	<< "\t\tHello World with blinking light red color" 		<< RESET << endl;
	cout << "CLRED:"	<< CLRED 	<< "\t\tHello World with strikethrough light red color" << RESET << endl;
	cout << "DLLRED:" 	<< DLLRED 	<< "\t\tHello World with double line light red color\n" << RESET << endl;
	cout << "OLLRED:" 	<< OLLRED 	<< "\t\tHello World with over line light red color\n" 	<< RESET << endl;
}

void formattingColorsDRED()
{
	cout << "BDRED:" 	<< BDRED 	<< "\t\tHello World with bold dark red color" 			<< RESET << endl;
	cout << "IDRED:" 	<< IDRED 	<< "\t\tHello World with italic dark red color" 		<< RESET << endl;
	cout << "ULDRED:" 	<< ULDRED 	<< "\t\tHello World with underlined dark red color" 	<< RESET << endl;
	cout << "BKDRED:" 	<< BKDRED 	<< "\t\tHello World with blinking dark red color" 		<< RESET << endl;
	cout << "CDRED:" 	<< CDRED 	<< "\t\tHello World with strikethrough dark red color" 	<< RESET << endl;
	cout << "DLDRED:" 	<< DLDRED 	<< "\t\tHello World with doubleline dark red color\n" 	<< RESET << endl;
	cout << "OLDRED:" 	<< OLDRED 	<< "\t\tHello World with over line dark red color\n" 	<< RESET << endl;
}

void formattingColorsLWHITE()
{
	cout << "BLWHITE:" 	<< BLWHITE 	<< "\tHello World with bold light white color" 			<< RESET << endl;
	cout << "ILWHITE:" 	<< ILWHITE 	<< "\tHello World with italic light white color" 		<< RESET << endl;
	cout << "ULLWHITE:" << ULLWHITE << "\tHello World with underlined light white color"	<< RESET << endl;
	cout << "BKLWHITE:" << BKLWHITE << "\tHello World with blinking light white color" 		<< RESET << endl;
	cout << "CLWHITE:" 	<< CLWHITE 	<< "\tHello World with strikethrough light white color" << RESET << endl;
	cout << "DLLWHITE:" << DLLWHITE << "\tHello World with double line light white color\n" << RESET << endl;
	cout << "OLLWHITE:" << OLLWHITE << "\tHello World with over line light white color\n" 	<< RESET << endl;
}

void formattingColorsDWHITE()
{
	cout << "BDWHITE:" 	<< BDWHITE 	<< "\tHello World with bold dark white color" 			<< RESET << endl;
	cout << "IDWHITE:" 	<< IDWHITE 	<< "\tHello World with italic dark white color" 		<< RESET << endl;
	cout << "ULDWHITE:" << ULDWHITE << "\tHello World with underlined dark white color" 	<< RESET << endl;
	cout << "BKDWHITE:" << BKDWHITE << "\tHello World with blinking dark white color" 		<< RESET << endl;
	cout << "CDWHITE:" 	<< CDWHITE 	<< "\tHello World with strikethrough dark white color" 	<< RESET << endl;
	cout << "DLDWHITE:" << DLDWHITE << "\tHello World with doubleline dark white color\n" 	<< RESET << endl;
	cout << "OLDWHITE:" << OLDWHITE << "\tHello World with overline dark white color\n" 	<< RESET << endl;
}

void formattingColorsLBLUE()
{
	cout << "BLBLUE:" 	<< BLBLUE 	<< "\t\tHello World with bold light blue color" 		<< RESET << endl;
	cout << "ILBLUE:" 	<< ILBLUE 	<< "\t\tHello World with italic light blue color" 		<< RESET << endl;
	cout << "ULLBLUE:" 	<< ULLBLUE 	<< "\tHello World with underline light blue color" 		<< RESET << endl;
	cout << "BKLBLUE:" 	<< BKLBLUE	<< "\tHello World with blinking light blue color" 		<< RESET << endl;
	cout << "CLBLUE:" 	<< CLBLUE 	<< "\t\tHello World with strikethrough light blue color"<< RESET << endl;
	cout << "DLLBLUE:" 	<< DLLBLUE 	<< "\tHello World with double line light blue color\n" 	<< RESET << endl;
	cout << "OLLBLUE:" 	<< OLLBLUE 	<< "\tHello World with over line light blue color\n" 	<< RESET << endl;
}

void formattingColorsDBLUE()
{
	cout << "BDBLUE:" 	<< BDBLUE 	<< "\t\tHello World with bold dark blue color" 			<< RESET << endl;
	cout << "IDBLUE:" 	<< IDBLUE 	<< "\t\tHello World with italic dark blue color"	 	<< RESET << endl;
	cout << "ULDBLUE:" 	<< ULDBLUE 	<< "\tHello World with underline dark blue color" 		<< RESET << endl;
	cout << "BKDBLUE:" 	<< BKDBLUE 	<< "\tHello World with blinking dark blue color" 		<< RESET << endl;
	cout << "CDBLUE:" 	<< CDBLUE 	<< "\t\tHello World with strikethrough dark blue color" << RESET << endl;
	cout << "DLDBLUE:" 	<< DLDBLUE 	<< "\tHello World with doubleline dark blue color\n" 	<< RESET << endl;
	cout << "OLDBLUE:" 	<< OLDBLUE 	<< "\tHello World with overline dark blue color\n" 		<< RESET << endl;
}

void formattingColorsLCYAN()
{
	cout << "BLCYAN:"	<< BLCYAN 	<< "\t\tHello World with bold light cyan color" 		<< RESET << endl;
	cout << "ILCYAN:" 	<< ILCYAN 	<< "\t\tHello World with italic light cyan color" 		<< RESET << endl;
	cout << "ULLCYAN:" 	<< ULLCYAN 	<< "\tHello World with underline light cyan color" 		<< RESET << endl;
	cout << "BKLCYAN:" 	<< BKLCYAN 	<< "\tHello World with blinking light cyan color" 		<< RESET << endl;
	cout << "CLCYAN:" 	<< CLCYAN 	<< "\t\tHello World with strikethrough light cyan color"<< RESET << endl;
	cout << "DLLCYAN:" 	<< DLLCYAN 	<< "\tHello World with doubleline light cyan color\n" 	<< RESET << endl;
	cout << "OLLCYAN:" 	<< OLLCYAN 	<< "\tHello World with overline light cyan color\n" 	<< RESET << endl;
}

void formattingColorsDCYAN()
{
	cout << "BDCYAN:" 	<< BDCYAN 	<< "\t\tHello World with bold dark cyan color"	 	<< RESET << endl;
	cout << "IDCYAN:" 	<< IDCYAN 	<< "\t\tHello World with italic dark cyan color" 	<< RESET << endl;
	cout << "ULDCYAN:" 	<< ULDCYAN 	<< "\tHello World with underline dark cyan color" 	<< RESET << endl;
	cout << "BKDCYAN:" 	<< BKDCYAN 	<< "\tHello World with blinking dark cyan color" 	<< RESET << endl;
	cout << "CDCYAN:" 	<< CDCYAN 	<< "\t\tHello World with cut dark cyan color" 		<< RESET << endl;
	cout << "DLDCYAN:" 	<< DLDCYAN 	<< "\tHello World with doubleline dark cyan color\n"<< RESET << endl;
	cout << "OLDCYAN:"	<< OLDCYAN 	<< "\tHello World with overline dark cyan color\n" 	<< RESET << endl;
}

void formattingColorsORANGE()
{
	cout << "BORANGE:" 	<< BORANGE 	<< "\tHello World with bold orange color" 		<< RESET << endl;
	cout << "IORANGE:" 	<< IORANGE 	<< "\tHello World with italic orange color" 	<< RESET << endl;
	cout << "ULORANGE:" << ULORANGE << "\tHello World with underline orange color" 	<< RESET << endl;
	cout << "BKORANGE:" << BKORANGE << "\tHello World with blinking orange color" 	<< RESET << endl;
	cout << "CORANGE:" 	<< CORANGE 	<< "\tHello World with cut orange color" 		<< RESET << endl;
	cout << "DLORANGE:" << DLORANGE << "\tHello World with doubleline orange color\n"<< RESET << endl;
	cout << "OLORANGE:" << OLORANGE << "\tHello World with overline orange color\n" << RESET << endl;
}

void formattingColorsBLACK()
{
	cout << "BBLACK:" 	<< BBLACK 	<< "\t\tHello World with bold black color" 		<< RESET << endl;
	cout << "IBLACK:" 	<< IBLACK 	<< "\t\tHello World with italic black color" 	<< RESET << endl;
	cout << "ULBLACK:" 	<< ULBLACK 	<< "\tHello World with underline black color" 	<< RESET << endl;
	cout << "BKBLACK:" 	<< BKBLACK 	<< "\tHello World with blinking black color" 	<< RESET << endl;
	cout << "CBLACK:" 	<< CBLACK 	<< "\t\tHello World with cut black color" 		<< RESET << endl;
	cout << "DLBLACK:" 	<< DLBLACK	<< "\tHello World with double line black color\n"<< RESET << endl;
	cout << "OLBLACK:" 	<< OLBLACK 	<< "\tHello World with over line black color\n" << RESET << endl;
}

void formattingColorsMAGENTA()
{
	cout << "BMAGENTA:"		<< BMAGENTA	<< "\tHello World with bold magenta color" 			<< RESET << endl;
	cout << "IMAGENTA:"		<< IMAGENTA << "\tHello World with italic magenta color" 		<< RESET << endl;
	cout << "ULMAGENTA:"	<< ULMAGENTA<< "\tHello World with underline magenta color" 	<< RESET << endl;
	cout << "BKMAGENTA:"	<< BKMAGENTA<< "\tHello World with blinking magenta color" 		<< RESET << endl;
	cout << "CMAGENTA:"		<< CMAGENTA << "\tHello World with cut magenta color" 			<< RESET << endl;
	cout << "DLMAGENTA:"	<< DLMAGENTA<< "\tHello World with doubleline magenta color\n" 	<< RESET << endl;
	cout << "OLMAGENTA:"	<< OLMAGENTA<< "\tHello World with overline magenta color\n" 	<< RESET << endl;
}

void formattingColorsYELLOW()
{
	cout << "BYELLOW:" 	<< BYELLOW 	<< "\tHello World with bold yellow color" 			<< RESET << endl;
	cout << "IYELLOW:" 	<< IYELLOW 	<< "\tHello World with italic yellow color" 		<< RESET << endl;
	cout << "ULYELLOW:" << ULYELLOW << "\tHello World with underline yellow color"		<< RESET << endl;
	cout << "BKYELLOW:" << BKYELLOW << "\tHello World with blinking yellow color" 		<< RESET << endl;
	cout << "CYELLOW:" 	<< CYELLOW 	<< "\tHello World with strikethrough yellow color"	<< RESET << endl;
	cout << "DLYELLOW:" << DLYELLOW << "\tHello World with doubleline yellow color\n" 	<< RESET << endl;
	cout << "OLYELLOW:" << OLYELLOW << "\tHello World with overline yellow color\n" 	<< RESET << endl;
}

void formattingColorsLEMON()
{
	cout << "BLEMON:" 	<< BLEMON 	<< "\t\tHello World with bold lemon color" 		<< RESET << endl;
	cout << "ILEMON:" 	<< ILEMON 	<< "\t\tHello World with italic lemon color" 	<< RESET << endl;
	cout << "ULLEMON:" 	<< ULLEMON 	<< "\tHello World with underline lemon color" 	<< RESET << endl;
	cout << "BKLEMON:" 	<< BKLEMON 	<< "\tHello World with blinking lemon color" 	<< RESET << endl;
	cout << "CLEMON:" 	<< CLEMON 	<< "\t\tHello World with cut lemon color" 		<< RESET << endl;
	cout << "DLLEMON:" 	<< DLLEMON 	<< "\tHello World with doubleline lemon color\n"<< RESET << endl;
	cout << "OLLEMON:" 	<< OLLEMON 	<< "\tHello World with overline lemon color\n" 	<< RESET << endl;
}
void formattingColorsPINK()
{
	cout << "BPINK:"  << BPINK 	<< "\t\tHello World with bold pink color" 			<< RESET << endl;
	cout << "IPINK:"  << IPINK 	<< "\t\tHello World with italic pink color" 		<< RESET << endl;
	cout << "ULPINK:" << ULPINK << "\t\tHello World with underline pink color" 		<< RESET << endl;
	cout << "BKPINK:" << BKPINK	<< "\t\tHello World with blinking pink color" 		<< RESET << endl;
	cout << "CPINK:"  << CPINK 	<< "\t\tHello World with cut pink color" 			<< RESET << endl;
	cout << "DLPINK:" << DLPINK << "\t\tHello World with double line pink color\n" 	<< RESET << endl;
	cout << "OLPINK:" << OLPINK << "\t\tHello World with over line pink color\n" 	<< RESET << endl;
}

void formattingBackgrounds()
{
	//testing formatting with background
	cout << "---------------------------> FORMATTING WITH BACKGROUND <---------------------------\n" << endl;

	cout << "Which background color manual you want ?" << endl;
	cout << "1. DGREEN" << endl;
	cout << "2. LGREEN" << endl;
	cout << "3. MGREEN" << endl;
	cout << "4. DRED" 	<< endl;
	cout << "5. LRED" 	<< endl;
	cout << "6. DORANGE"<< endl;
	cout << "7. LORANGE"<< endl;
	cout << "8. LBLUE" 	<< endl;
	cout << "9. LWHITE" << endl;
	cout << "10. DWHITE"<< endl;
	cout << "11. LEMON" << endl;
	cout << "12. DPINK" << endl;
	cout << "13. LPINK" << endl;
	cout << "14. MPINK" << endl;
	cout << "# ";
	int formatBackgroundType = 0;
	cin >> formatBackgroundType; 

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
			cout << BDRED << "No background color type available" << RESET << endl;
			break;
	}
}

void formattingBackgroundsDGREEN()
{
	cout << "BBGDGREEN:"	<< BBGDGREEN 	<< "\tHello World with bold text dark green background" 		<< RESET << endl;
	cout << "IBGDGREEN:" 	<< IBGDGREEN 	<< "\tHello World with italic text dark green background" 		<< RESET << endl;
	cout << "ULBGDGREEN:" 	<< ULBGDGREEN 	<< "\tHello World with underline text dark green background" 	<< RESET << endl;
	cout << "BKBGDGREEN:" 	<< BKBGDGREEN 	<< "\tHello World with blinking text dark green background" 	<< RESET << endl;
	cout << "CBGDGREEN:" 	<< CBGDGREEN 	<< "\tHello World with cut text dark green background" 			<< RESET << endl;
	cout << "DLBGDGREEN:" 	<< DLBGDGREEN 	<< "\tHello World with double line text dark green background\n"<< RESET << endl;
	cout << "OLBGDGREEN:" 	<< OLBGDGREEN 	<< "\tHello World with over line text dark green background\n" 	<< RESET << endl;
}

void formattingBackgroundsLGREEN()
{
	cout << "BBGLGREEN:" 	<< BBGLGREEN 	<< "\tHello World with bold text light green background" 			<< RESET << endl;
	cout << "IBGLGREEN:" 	<< IBGLGREEN 	<< "\tHello World with italic text light green background" 			<< RESET << endl;
	cout << "ULBGLGREEN:" 	<< ULBGLGREEN 	<< "\tHello World with underline text light green background" 		<< RESET << endl;
	cout << "BKBGLGREEN:" 	<< BKBGLGREEN 	<< "\tHello World with blinking text light green background" 		<< RESET << endl;
	cout << "CBGLGREEN:" 	<< CBGLGREEN 	<< "\tHello World with cut text light green background" 			<< RESET << endl;
	cout << "DLBGLGREEN:" 	<< DLBGLGREEN 	<< "\tHello World with double line text light green background\n" 	<< RESET << endl;
	cout << "OLBGLGREEN:" 	<< OLBGLGREEN 	<< "\tHello World with over line text light green background\n" 	<< RESET << endl;
}

void formattingBackgroundsMGREEN()
{
	cout << "BBGMGREEN:" 	<< BBGMGREEN  << "\tHello World with bold text medium green background" 		<< RESET << endl;
	cout << "IBGMGREEN:" 	<< IBGMGREEN  << "\tHello World with italic text medium green background" 		<< RESET << endl;
	cout << "ULBGMGREEN:" 	<< ULBGMGREEN << "\tHello World with underline text medium green background" 	<< RESET << endl;
	cout << "BKBGMGREEN:" 	<< BKBGMGREEN << "\tHello World with blinking text medium green background"		<< RESET << endl;
	cout << "CBGMGREEN:" 	<< CBGMGREEN  << "\tHello World with cut text medium green background" 			<< RESET << endl;
	cout << "DLBGMGREEN:" 	<< DLBGMGREEN << "\tHello World with double line text medium green background\n"<< RESET << endl;
	cout << "OLBGMGREEN:" 	<< OLBGMGREEN << "\tHello World with over line text medium green background\n" 	<< RESET << endl;
}

void formattingBackgroundsDRED()
{
	cout << "BBGDRED:"	<< BBGDRED << "\tHello World with bold text dark red background" 		<< RESET << endl;
	cout << "IBGDRED:" 	<< IBGDRED << "\tHello World with italic text dark red background" 		<< RESET << endl;
	cout << "ULBGDRED:" << ULBGDRED << "\tHello World with underline text dark red background" 	<< RESET << endl;
	cout << "BKBGDRED:"	<< BKBGDRED << "\tHello World with blinking text dark red background" 	<< RESET << endl;
	cout << "CBGDRED:" 	<< CBGDRED << "\tHello World with cut text dark red background" 		<< RESET << endl;
	cout << "DLBGDRED:" << DLBGDRED << "\tHello World with doubleline text dark red background\n"<< RESET << endl;
	cout << "OLBGDRED:" << OLBGDRED << "\tHello World with overline text dark red background\n" << RESET << endl;
}

void formattingBackgroundsLRED()
{
	cout << "BBGLRED:" 	<< BBGLRED 	<< "\tHello World with bold text light red background" 			<< RESET << endl;
	cout << "IBGLRED:" 	<< IBGLRED 	<< "\tHello World with italic text light red background" 		<< RESET << endl;
	cout << "ULBGLRED:" << ULBGLRED << "\tHello World with underline text light red background" 	<< RESET << endl;
	cout << "BKBGLRED:" << BKBGLRED << "\tHello World with blinking text light red background"	 	<< RESET << endl;
	cout << "CBBGLRED:" << CBGLRED 	<< "\tHello World with cut text light red background" 			<< RESET << endl;
	cout << "DLBGLRED:" << DLBGLRED << "\tHello World with double line text light red background\n" << RESET << endl;
	cout << "OLBGLRED:" << OLBGLRED << "\tHello World with overline text light red background\n" 	<< RESET << endl;
}

void formattingBackgroundsDORANGE()
{
	cout << "BBGDORANGE:" 	<< BBGDORANGE 	<< "\tHello World with bold text dark orange background" 		<< RESET << endl;
	cout << "IBGDORANGE:" 	<< IBGDORANGE 	<< "\tHello World with italic text dark orange background" 		<< RESET << endl;
	cout << "ULBGDORANGE:" 	<< ULBGDORANGE 	<< "\tHello World with underline text dark orange background" 	<< RESET << endl;
	cout << "BKBGDORANGE:" 	<< BKBGDORANGE 	<< "\tHello World with blinking text dark orange background" 	<< RESET << endl;
	cout << "CBGDORANGE:" 	<< CBGDORANGE 	<< "\tHello World with cut text dark orange background" 		<< RESET << endl;
	cout << "DLBGDORANGE:" 	<< DLBGDORANGE 	<< "\tHello World with doubleline text dark orange background\n"<< RESET << endl;
	cout << "OLBGDORANGE:" 	<< OLBGDORANGE 	<< "\tHello World with overline text dark orange background\n" 	<< RESET << endl;
}

void formattingBackgroundsLORANGE()
{
	cout << "BBGLORANGE:" 	<< BBGLORANGE 	<< "\tHello World with bold text light orange background" 		<< RESET << endl;
	cout << "IBGLORANGE:" 	<< IBGLORANGE 	<< "\tHello World with italic text light orange background" 	<< RESET << endl;
	cout << "ULBGLORANGE:"	<< ULBGLORANGE 	<< "\tHello World with underline text light orange background" 	<< RESET << endl;
	cout << "BKBGLORANGE:" 	<< BKBGLORANGE 	<< "\tHello World with blinking text light orange background" 	<< RESET << endl;
	cout << "CBGLORANGE:" 	<< CBGLORANGE 	<< "\tHello World with cut text light orange background" 		<< RESET << endl;
	cout << "DLBGLORANGE:" 	<< DLBGLORANGE 	<< "\tHello World with doubleline text light orange background\n"<< RESET << endl;
	cout << "OLBGLORANGE:" 	<< OLBGLORANGE 	<< "\tHello World with overline text light orange background\n" << RESET << endl;
}

void formattingBackgroundsLBLUE()
{
	cout << "BBGLBLUE:" 	<< BBGLBLUE	<< "\tHello World with bold text light blue background" 		<< RESET << endl;
	cout << "IBGLBLUE:" 	<< IBGLBLUE	<< "\tHello World with italic text light blue background" 		<< RESET << endl;
	cout << "ULBGLBLUE:" 	<< ULBGLBLUE<< "\tHello World with underline text light blue background"	<< RESET << endl;
	cout << "BKBGLBLUE:" 	<< BKBGLBLUE<< "\tHello World with blinking text light blue background" 	<< RESET << endl;
	cout << "CBGLBLUE:"		<< CBGLBLUE	<< "\tHello World with cut text light blue background" 			<< RESET << endl;
	cout << "DLBGLBLUE:"	<< DLBGLBLUE<< "\tHello World with double line text light blue background\n"<< RESET << endl;
	cout << "OLBGLBLUE:" 	<< OLBGLBLUE<< "\tHello World with overline text light blue background\n" 	<< RESET << endl;
}

void formattingBackgroundsLWHITE()
{
	cout << "BBGLWHITE:"	<< BBGLWHITE 	<< "\tHello World with bold text light white background" 		<< RESET << endl;
	cout << "IBGLWHITE:" 	<< IBGLWHITE 	<< "\tHello World with italic text light white background" 		<< RESET << endl;
	cout << "ULBGLWHITE:" 	<< ULBGLWHITE 	<< "\tHello World with underline text light white background"	<< RESET << endl;
	cout << "BKBGLWHITE:" 	<< BKBGLWHITE 	<< "\tHello World with blinking text light white background" 	<< RESET << endl;
	cout << "CBGLWHITE:" 	<< CBGLWHITE	<< "\tHello World with cut text light white background" 		<< RESET << endl;
	cout << "DLBGLWHITE:" 	<< DLBGLWHITE	<< "\tHello World with double line text light white background\n"<< RESET << endl;
	cout << "OLBGLWHITE:" 	<< OLBGLWHITE 	<< "\tHello World with overline text light white background\n" 	<< RESET << endl;
}

void formattingBackgroundsDWHITE()
{
	cout << "BBGDWHITE:" 	<< BBGDWHITE 	<< "\tHello World with bold text dark white background" 		<< RESET << endl;
	cout << "IBGDWHITE:" 	<< IBGDWHITE 	<< "\tHello World with italic text dark white background" 		<< RESET << endl;
	cout << "ULBGDWHITE:" 	<< ULBGDWHITE 	<< "\tHello World with underline text dark white background" 	<< RESET << endl;
	cout << "BKBGDWHITE:" 	<< BKBGDWHITE 	<< "\tHello World with blinking text dark white background" 	<< RESET << endl;
	cout << "CBGDWHITE:" 	<< CBGDWHITE 	<< "\tHello World with cut text dark white background" 			<< RESET << endl;
	cout << "DLBGDWHITE:" 	<< DLBGDWHITE 	<< "\tHello World with double line text dark white background\n"<< RESET << endl;
	cout << "OLBGDWHITE:" 	<< OLBGDWHITE 	<< "\tHello World with overline text dark white background\n" 	<< RESET << endl;
}

void formattingBackgroundsLEMON()
{
	cout << "BBGLEMON:" 	<< BBGLEMON << "\tHello World with bold text lemon background" 			<< RESET << endl;
	cout << "IBGLEMON:" 	<< IBGLEMON << "\tHello World with italic text lemon background" 		<< RESET << endl;
	cout << "ULBGLEMON:" 	<< ULBGLEMON<< "\tHello World with underline text lemon background" 	<< RESET << endl;
	cout << "BKBGLEMON:" 	<< BKBGLEMON<< "\tHello World with blinking text lemon background" 		<< RESET << endl;
	cout << "CBGLEMON:" 	<< CBGLEMON	<< "\tHello World with cut text lemon background" 			<< RESET << endl;
	cout << "DLBGLEMON:" 	<< DLBGLEMON<< "\tHello World with double line text lemon background\n" << RESET << endl;
	cout << "OLBGLEMON:" 	<< OLBGLEMON<< "\tHello World with over line text lemon background\n" 	<< RESET << endl;
}

void formattingBackgroundsDPINK()
{
	cout << "BBGDPINK:" << BBGDPINK << "\tHello World with bold text dark pink background" 			<< RESET << endl;
	cout << "IBGDPINK:" << IBGDPINK << "\tHello World with italic text dark pink background" 		<< RESET << endl;
	cout << "ULBGDPINK:"<< ULBGDPINK<< "\tHello World with underline text dark pink background" 	<< RESET << endl;
	cout << "BKBGDPINK:"<< BKBGDPINK<< "\tHello World with blinking text dark pink background" 		<< RESET << endl;
	cout << "CBGDPINK:" << CBGDPINK	<< "\tHello World with cut text dark pink background" 			<< RESET << endl;
	cout << "DLBGDPINK:"<< DLBGDPINK<< "\tHello World with double line text dark pink background\n" << RESET << endl;
	cout << "OLBGDPINK:"<< OLBGDPINK<< "\tHello World with over line text dark pink background\n" 	<< RESET << endl;
}

void formattingBackgroundsLPINK()
{
	// cout << "BBGLPINK:\tHello World with bold text light pink background\n",BBGLPINK,RESET << endl;
	// cout << "IBGLPINK:\tHello World with italic text light pink background\n",IBGLPINK,RESET << endl;
	// cout << "ULBGLPINK:\tHello World with underline text light pink background\n",ULBGLPINK,RESET << endl;
	// cout << "BKBGLPINK:\tHello World with blinking text light pink background\n",BKBGLPINK,RESET << endl;
	// cout << "CBGLPINK:\tHello World with cut text light pink background\n",CBGLPINK,RESET << endl;
	// cout << "DLBGLPINK:\tHello World with double line text light pink background\n\n",DLBGLPINK,RESET << endl;
	// cout << "OLBGLPINK:\tHello World with over line text light pink background\n\n",OLBGLPINK,RESET << endl;
}

void formattingBackgroundsMPINK()
{
	// cout << "BBGMPINK:\tHello World with bold text medium pink background\n",BBGMPINK,RESET << endl;
	// cout << "IBGMPINK:\tHello World with italic text medium pink background\n",IBGMPINK,RESET << endl;
	// cout << "ULBGMPINK:\tHello World with underline text medium pink background\n",ULBGMPINK,RESET << endl;
	// cout << "BKBGMPINK:\tHello World with blinking text medium pink background\n",BKBGMPINK,RESET << endl;
	// cout << "CBGMPINK:\tHello World with cut text medium pink background\n",CBGMPINK,RESET << endl;
	// cout << "DLBGMPINK:\tHello World with double line text medium pink background\n\n",DLBGMPINK,RESET << endl;
	// cout << "OLBGMPINK:\tHello World with over line text medium pink background\n\n",OLBGMPINK,RESET << endl;
}

void colorBackgrounds()
{
	cout << "---------------------------> DIFFERENT COLORS WITH DIFFERENT BACKGROUNDS <---------------------------\n" << endl;
	cout << "Enter any option for below manuals" << endl;
	cout << "1. LGREEN" << endl;
	cout << "2. MGREEN" << endl;
	cout << "3. DGREEN" << endl;
	cout << "4. LRED" 	<< endl;
	cout << "5. DRED" 	<< endl;
	cout << "6. LWHITE" << endl;
	cout << "7. DWHITE" << endl;
	cout << "8. LBLUE" 	<< endl;
	cout << "9. DBLUE" 	<< endl;
	cout << "10. LCYAN" << endl;
	cout << "11. DCYAN" << endl;
	cout << "12. ORANGE"<< endl;
	cout << "13. BLACK" << endl;
	cout << "14. MAGENTA"<< endl;
	cout << "15. YELLOW" << endl;
	cout << "16. LEMON"  << endl;
	cout << "17. PINK" 	 << endl;
	cout << "# ";
	int colorBackgroundOption = 0;
	cin >> colorBackgroundOption;
	switch(colorBackgroundOption)
	{
		case 1:
			colorBackgroundsLGREEN();
			break;
		case 2:
			colorBackgroundsMGREEN();
			break;
		case 3:
			colorBackgroundsDGREEN();
			break;
		case 4:
			colorBackgroundsLRED();
			break;
		case 5:
			colorBackgroundsDRED();
			break;
		case 6:
			colorBackgroundsLWHITE();
			break;
		case 7:
			colorBackgroundsDWHITE();
			break;
		case 8:
			colorBackgroundsLBLUE();
			break;
		case 9:
			colorBackgroundsDBLUE();
			break;
		case 10:
			colorBackgroundsLCYAN();
			break;
		case 11:
			colorBackgroundsDCYAN();
			break;
		case 12:
			colorBackgroundsORANGE();
			break;
		case 13:
			colorBackgroundsBLACK();
			break;
		case 14:
			colorBackgroundsMAGENTA();
			break;
		case 15:
			colorBackgroundsYELLOW();
			break;
		case 16:
			colorBackgroundsLEMON();
			break;
		case 17:
			colorBackgroundsPINK();
			break;
		default:
			cout << BDRED << "No colored background type available" << RESET << endl;
			break;
	}
}

void colorBackgroundsLGREEN()
{
	// LGREEN
	// printf("LGREEN_BGDGREEN:\tHello World with light green color text & dark green background\n",	LGREEN_BGDGREEN,RESET);
	// printf("LGREEN_BGLGREEN:\tHello World with light green color text & light green background\n",	LGREEN_BGLGREEN,RESET);
	// printf("LGREEN_BGMGREEN:\tHello World with light green color text & medium green background\n",	LGREEN_BGMGREEN,RESET);
	// printf("LGREEN_BGDRED:\t\tHello World with light green color text & dark red background\n",		LGREEN_BGDRED,RESET);	
	// printf("LGREEN_BGLRED:\t\tHello World with light green color text & light red background\n",	LGREEN_BGLRED,RESET);
	// printf("LGREEN_BGDORANGE:\tHello World with light green color text & dark orange background\n",	LGREEN_BGDORANGE,RESET);
	// printf("LGREEN_BGLORANGE:\tHello World with light green color text & light orange background\n",LGREEN_BGLORANGE,RESET);
	// printf("LGREEN_BGLBLUE:\t\tHello World with light green color text & light blue background\n",	LGREEN_BGLBLUE,RESET);
	// printf("LGREEN_BGLWHITE:\tHello World with light green color text & light white background\n",	LGREEN_BGLWHITE,RESET);
	// printf("LGREEN_BGDWHITE:\tHello World with light green color text & dark white background\n",	LGREEN_BGDWHITE,RESET);
	// printf("LGREEN_BGLEMON:\t\tHello World with light green color text & lemon background\n",		LGREEN_BGLEMON,RESET);
	// printf("LGREEN_BGMPINK:\t\tHello World with light green color text & medium pink background\n",	LGREEN_BGMPINK,RESET);
	// printf("LGREEN_BGDPINK:\t\tHello World with light green color text & dark pink background\n",	LGREEN_BGDPINK,RESET);
	// printf("LGREEN_BGLPINK:\t\tHello World with light green color text & light pink background\n",	LGREEN_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsMGREEN()
{
	// MGREEN
	// printf("MGREEN_BGDGREEN:\tHello World with medium green color text & dark green background\n",	MGREEN_BGDGREEN,RESET);
	// printf("MGREEN_BGLGREEN:\tHello World with medium green color text & light green background\n",	MGREEN_BGLGREEN,RESET);
	// printf("MGREEN_BGMGREEN:\tHello World with medium green color text & medium green background\n",MGREEN_BGMGREEN,RESET);
	// printf("MGREEN_BGDRED:\t\tHello World with medium green color text & dark red background\n",	MGREEN_BGDRED,RESET);	
	// printf("MGREEN_BGLRED:\t\tHello World with medium green color text & light red background\n",	MGREEN_BGLRED,RESET);
	// printf("MGREEN_BGDORANGE:\tHello World with medium green color text & dark orange background\n",MGREEN_BGDORANGE,RESET);
	// printf("MGREEN_BGLORANGE:\tHello World with medium green color text & light orange background\n",MGREEN_BGLORANGE,RESET);
	// printf("MGREEN_BGLBLUE:\t\tHello World with medium green color text & light blue background\n",	MGREEN_BGLBLUE,RESET);
	// printf("MGREEN_BGLWHITE:\tHello World with medium green color text & light white background\n",	MGREEN_BGLWHITE,RESET);
	// printf("MGREEN_BGDWHITE:\tHello World with medium green color text & dark white background\n",	MGREEN_BGDWHITE,RESET);
	// printf("MGREEN_BGLEMON:\t\tHello World with medium green color text & lemon background\n",		MGREEN_BGLEMON,RESET);
	// printf("MGREEN_BGMPINK:\t\tHello World with medium green color text & medium pink background\n",MGREEN_BGMPINK,RESET);
	// printf("MGREEN_BGDPINK:\t\tHello World with medium green color text & dark pink background\n",	MGREEN_BGDPINK,RESET);
	// printf("MGREEN_BGLPINK:\t\tHello World with medium green color text & light pink background\n",	MGREEN_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsDGREEN()
{
	// DGREEN
	// printf("DGREEN_BGDGREEN:\tHello World with dark green color text & dark green background\n",	DGREEN_BGDGREEN,RESET);
	// printf("DGREEN_BGLGREEN:\tHello World with dark green color text & light green background\n",	DGREEN_BGLGREEN,RESET);
	// printf("DGREEN_BGMGREEN:\tHello World with dark green color text & medium green background\n",	DGREEN_BGMGREEN,RESET);
	// printf("DGREEN_BGDRED:\t\tHello World with dark green color text & dark red background\n",		DGREEN_BGDRED,RESET);	
	// printf("DGREEN_BGLRED:\t\tHello World with dark green color text & light red background\n",		DGREEN_BGLRED,RESET);
	// printf("DGREEN_BGDORANGE:\tHello World with dark green color text & dark orange background\n",	DGREEN_BGDORANGE,RESET);
	// printf("DGREEN_BGLORANGE:\tHello World with dark green color text & light orange background\n",	DGREEN_BGLORANGE,RESET);
	// printf("DGREEN_BGLBLUE:\t\tHello World with dark green color text & light blue background\n",	DGREEN_BGLBLUE,RESET);
	// printf("DGREEN_BGLWHITE:\tHello World with dark green color text & light white background\n",	DGREEN_BGLWHITE,RESET);
	// printf("DGREEN_BGDWHITE:\tHello World with dark green color text & dark white background\n",	DGREEN_BGDWHITE,RESET);
	// printf("DGREEN_BGLEMON:\t\tHello World with dark green color text & lemon background\n",		DGREEN_BGLEMON,RESET);
	// printf("DGREEN_BGMPINK:\t\tHello World with dark green color text & medium pink background\n",	DGREEN_BGMPINK,RESET);
	// printf("DGREEN_BGDPINK:\t\tHello World with dark green color text & dark pink background\n",	DGREEN_BGDPINK,RESET);
	// printf("DGREEN_BGLPINK:\t\tHello World with dark green color text & light pink background\n",	DGREEN_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsLRED()
{
	// LRED
	// printf("LRED_BGDGREEN:\t\tHello World with light red color text & dark green background\n",		LRED_BGDGREEN,RESET);
	// printf("LRED_BGLGREEN:\t\tHello World with light red color text & light green background\n",	LRED_BGLGREEN,RESET);
	// printf("LRED_BGMGREEN:\t\tHello World with light red color text & medium green background\n",	LRED_BGMGREEN,RESET);
	// printf("LRED_BGDRED:\t\tHello World with light red color text & dark red background\n",			LRED_BGDRED,RESET);	
	// printf("LRED_BGLRED:\t\tHello World with light red color text & light red background\n",		LRED_BGLRED,RESET);
	// printf("LRED_BGDORANGE:\t\tHello World with light red color text & dark orange background\n",	LRED_BGDORANGE,RESET);
	// printf("LRED_BGLORANGE:\t\tHello World with light red color text & light orange background\n",	LRED_BGLORANGE,RESET);
	// printf("LRED_BGLBLUE:\t\tHello World with light red color text & light blue background\n",		LRED_BGLBLUE,RESET);
	// printf("LRED_BGLWHITE:\t\tHello World with light red color text & light white background\n",	LRED_BGLWHITE,RESET);
	// printf("LRED_BGDWHITE:\t\tHello World with light red color text & dark white background\n",		LRED_BGDWHITE,RESET);
	// printf("LRED_BGLEMON:\t\tHello World with light red color text & lemon background\n",			LRED_BGLEMON,RESET);
	// printf("LRED_BGMPINK:\t\tHello World with light red color text & medium pink background\n",		LRED_BGMPINK,RESET);
	// printf("LRED_BGDPINK:\t\tHello World with light red color text & dark pink background\n",		LRED_BGDPINK,RESET);
	// printf("LRED_BGLPINK:\t\tHello World with light red color text & light pink background\n",		LRED_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsDRED()
{
	// DRED
	// printf("DRED_BGDGREEN:\t\tHello World with dark red color text & dark green background\n",		DRED_BGDGREEN,RESET);
	// printf("DRED_BGLGREEN:\t\tHello World with dark red color text & light green background\n",		DRED_BGLGREEN,RESET);
	// printf("DRED_BGMGREEN:\t\tHello World with dark red color text & medium green background\n",	DRED_BGMGREEN,RESET);
	// printf("DRED_BGDRED:\t\tHello World with dark red color text & dark red background\n",			DRED_BGDRED,RESET);	
	// printf("DRED_BGLRED:\t\tHello World with dark red color text & light red background\n",			DRED_BGLRED,RESET);
	// printf("DRED_BGDORANGE:\t\tHello World with dark red color text & dark orange background\n",	DRED_BGDORANGE,RESET);
	// printf("DRED_BGLORANGE:\t\tHello World with dark red color text & light orange background\n",	DRED_BGLORANGE,RESET);
	// printf("DRED_BGLBLUE:\t\tHello World with dark red color text & light blue background\n",		DRED_BGLBLUE,RESET);
	// printf("DRED_BGLWHITE:\t\tHello World with dark red color text & light white background\n",		DRED_BGLWHITE,RESET);
	// printf("DRED_BGDWHITE:\t\tHello World with dark red color text & dark white background\n",		DRED_BGDWHITE,RESET);
	// printf("DRED_BGLEMON:\t\tHello World with dark red color text & lemon background\n",			DRED_BGLEMON,RESET);
	// printf("DRED_BGMPINK:\t\tHello World with dark red color text & medium pink background\n",		DRED_BGMPINK,RESET);
	// printf("DRED_BGDPINK:\t\tHello World with dark red color text & dark pink background\n",		DRED_BGDPINK,RESET);
	// printf("DRED_BGLPINK:\t\tHello World with dark red color text & light pink background\n",		DRED_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsLWHITE()
{
	// LWHITE
	// printf("LWHITE_BGDGREEN:\tHello World with light white color text & dark green background\n",		LWHITE_BGDGREEN,RESET);
	// printf("LWHITE_BGLGREEN:\tHello World with light white color text & light green background\n",	LWHITE_BGLGREEN,RESET);
	// printf("LWHITE_BGMGREEN:\tHello World with light white color text & medium green background\n",	LWHITE_BGMGREEN,RESET);
	// printf("LWHITE_BGDRED:\t\tHello World with light white color text & dark red background\n",			LWHITE_BGDRED,RESET);	
	// printf("LWHITE_BGLRED:\t\tHello World with light white color text & light red background\n",		LWHITE_BGLRED,RESET);
	// printf("LWHITE_BGDORANGE:\tHello World with light white color text & dark orange background\n",	LWHITE_BGDORANGE,RESET);
	// printf("LWHITE_BGLORANGE:\tHello World with light white color text & light orange background\n",	LWHITE_BGLORANGE,RESET);
	// printf("LWHITE_BGLBLUE:\t\tHello World with light white color text & light blue background\n",		LWHITE_BGLBLUE,RESET);
	// printf("LWHITE_BGLWHITE:\tHello World with light white color text & light white background\n",	LWHITE_BGLWHITE,RESET);
	// printf("LWHITE_BGDWHITE:\tHello World with light white color text & dark white background\n",		LWHITE_BGDWHITE,RESET);
	// printf("LWHITE_BGLEMON:\t\tHello World with light white color text & lemon background\n",			LWHITE_BGLEMON,RESET);
	// printf("LWHITE_BGMPINK:\t\tHello World with light white color text & medium pink background\n",		LWHITE_BGMPINK,RESET);
	// printf("LWHITE_BGDPINK:\t\tHello World with light white color text & dark pink background\n",		LWHITE_BGDPINK,RESET);
	// printf("LWHITE_BGLPINK:\t\tHello World with light white color text & light pink background\n",		LWHITE_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsDWHITE()
{
	// DWHITE
	// printf("DWHITE_BGDGREEN:\tHello World with dark white color text & dark green background\n",	DWHITE_BGDGREEN,RESET);
	// printf("DWHITE_BGLGREEN:\tHello World with dark white color text & light green background\n",	DWHITE_BGLGREEN,RESET);
	// printf("DWHITE_BGMGREEN:\tHello World with dark white color text & medium green background\n",	DWHITE_BGMGREEN,RESET);
	// printf("DWHITE_BGDRED:\t\tHello World with dark white color text & dark red background\n",		DWHITE_BGDRED,RESET);	
	// printf("DWHITE_BGLRED:\t\tHello World with dark white color text & light red background\n",		DWHITE_BGLRED,RESET);
	// printf("DWHITE_BGDORANGE:\tHello World with dark white color text & dark orange background\n",	DWHITE_BGDORANGE,RESET);
	// printf("DWHITE_BGLORANGE:\tHello World with dark white color text & light orange background\n",	DWHITE_BGLORANGE,RESET);
	// printf("DWHITE_BGLBLUE:\t\tHello World with dark white color text & light blue background\n",	DWHITE_BGLBLUE,RESET);
	// printf("DWHITE_BGLWHITE:\tHello World with dark white color text & light white background\n",	DWHITE_BGLWHITE,RESET);
	// printf("DWHITE_BGDWHITE:\tHello World with dark white color text & dark white background\n",	DWHITE_BGDWHITE,RESET);
	// printf("DWHITE_BGLEMON:\t\tHello World with dark white color text & lemon background\n",		DWHITE_BGLEMON,RESET);
	// printf("DWHITE_BGMPINK:\t\tHello World with dark white color text & medium pink background\n",	DWHITE_BGMPINK,RESET);
	// printf("DWHITE_BGDPINK:\t\tHello World with dark white color text & dark pink background\n",	DWHITE_BGDPINK,RESET);
	// printf("DWHITE_BGLPINK:\t\tHello World with dark white color text & light pink background\n",	DWHITE_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsLBLUE()
{
	// LBLUE
	// printf("LBLUE_BGDGREEN:\t\tHello World with light blue color text & dark green background\n",	LBLUE_BGDGREEN,RESET);
	// printf("LBLUE_BGLGREEN:\t\tHello World with light blue color text & light green background\n",	LBLUE_BGLGREEN,RESET);
	// printf("LBLUE_BGMGREEN:\t\tHello World with light blue color text & medium green background\n",	LBLUE_BGMGREEN,RESET);
	// printf("LBLUE_BGDRED:\t\tHello World with light blue color text & dark red background\n",		LBLUE_BGDRED,RESET);	
	// printf("LBLUE_BGLRED:\t\tHello World with light blue color text & light red background\n",		LBLUE_BGLRED,RESET);
	// printf("LBLUE_BGDORANGE:\tHello World with light blue color text & dark orange background\n",	LBLUE_BGDORANGE,RESET);
	// printf("LBLUE_BGLORANGE:\tHello World with light blue color text & light orange background\n",	LBLUE_BGLORANGE,RESET);
	// printf("LBLUE_BGLBLUE:\t\tHello World with light blue color text & light blue background\n",	LBLUE_BGLBLUE,RESET);
	// printf("LBLUE_BGLWHITE:\t\tHello World with light blue color text & light white background\n",	LBLUE_BGLWHITE,RESET);
	// printf("LBLUE_BGDWHITE:\t\tHello World with light blue color text & dark white background\n",	LBLUE_BGDWHITE,RESET);
	// printf("LBLUE_BGLEMON:\t\tHello World with light blue color text & lemon background\n",			LBLUE_BGLEMON,RESET);
	// printf("LBLUE_BGMPINK:\t\tHello World with light blue color text & medium pink background\n",	LBLUE_BGMPINK,RESET);
	// printf("LBLUE_BGDPINK:\t\tHello World with light blue color text & dark pink background\n",		LBLUE_BGDPINK,RESET);
	// printf("LBLUE_BGLPINK:\t\tHello World with light blue color text & light pink background\n",	LBLUE_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsDBLUE()
{
	// DBLUE
	// printf("DBLUE_BGDGREEN:\t\tHello World with dark blue color text & dark green background\n",	DBLUE_BGDGREEN,RESET);
	// printf("DBLUE_BGLGREEN:\t\tHello World with dark blue color text & light green background\n",	DBLUE_BGLGREEN,RESET);
	// printf("DBLUE_BGMGREEN:\t\tHello World with dark blue color text & medium green background\n",	DBLUE_BGMGREEN,RESET);
	// printf("DBLUE_BGDRED:\t\tHello World with dark blue color text & dark red background\n",		DBLUE_BGDRED,RESET);	
	// printf("DBLUE_BGLRED:\t\tHello World with dark blue color text & light red background\n",		DBLUE_BGLRED,RESET);
	// printf("DBLUE_BGDORANGE:\tHello World with dark blue color text & dark orange background\n",	DBLUE_BGDORANGE,RESET);
	// printf("DBLUE_BGLORANGE:\tHello World with dark blue color text & light orange background\n",	DBLUE_BGLORANGE,RESET);
	// printf("DBLUE_BGLBLUE:\t\tHello World with dark blue color text & light blue background\n",		DBLUE_BGLBLUE,RESET);
	// printf("DBLUE_BGLWHITE:\t\tHello World with dark blue color text & light white background\n",	DBLUE_BGLWHITE,RESET);
	// printf("DBLUE_BGDWHITE:\t\tHello World with dark blue color text & dark white background\n",	DBLUE_BGDWHITE,RESET);
	// printf("DBLUE_BGLEMON:\t\tHello World with dark blue color text & lemon background\n",			DBLUE_BGLEMON,RESET);
	// printf("DBLUE_BGMPINK:\t\tHello World with dark blue color text & medium pink background\n",	DBLUE_BGMPINK,RESET);
	// printf("DBLUE_BGDPINK:\t\tHello World with dark blue color text & dark pink background\n",		DBLUE_BGDPINK,RESET);
	// printf("DBLUE_BGLPINK:\t\tHello World with dark blue color text & light pink background\n",		DBLUE_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsLCYAN()
{
	// LCYAN
	// printf("LCYAN_BGDGREEN:\t\tHello World with light cyan color text & dark green background\n",	LCYAN_BGDGREEN,RESET);
	// printf("LCYAN_BGLGREEN:\t\tHello World with light cyan color text & light green background\n",	LCYAN_BGLGREEN,RESET);
	// printf("LCYAN_BGMGREEN:\t\tHello World with light cyan color text & medium green background\n",	LCYAN_BGMGREEN,RESET);
	// printf("LCYAN_BGDRED:\t\tHello World with light cyan color text & dark red background\n",		LCYAN_BGDRED,RESET);	
	// printf("LCYAN_BGLRED:\t\tHello World with light cyan color text & light red background\n",		LCYAN_BGLRED,RESET);
	// printf("LCYAN_BGDORANGE:\tHello World with light cyan color text & dark orange background\n",	LCYAN_BGDORANGE,RESET);
	// printf("LCYAN_BGLORANGE:\tHello World with light cyan color text & light orange background\n",	LCYAN_BGLORANGE,RESET);
	// printf("LCYAN_BGLBLUE:\t\tHello World with light cyan color text & light blue background\n",	LCYAN_BGLBLUE,RESET);
	// printf("LCYAN_BGLWHITE:\t\tHello World with light cyan color text & light white background\n",	LCYAN_BGLWHITE,RESET);
	// printf("LCYAN_BGDWHITE:\t\tHello World with light cyan color text & dark white background\n",	LCYAN_BGDWHITE,RESET);
	// printf("LCYAN_BGLEMON:\t\tHello World with light cyan color text & lemon background\n",			LCYAN_BGLEMON,RESET);
	// printf("LCYAN_BGMPINK:\t\tHello World with light cyan color text & medium pink background\n",	LCYAN_BGMPINK,RESET);
	// printf("LCYAN_BGDPINK:\t\tHello World with light cyan color text & dark pink background\n",		LCYAN_BGDPINK,RESET);
	// printf("LCYAN_BGLPINK:\t\tHello World with light cyan color text & light pink background\n",	LCYAN_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsDCYAN()
{
	// DCYAN
	// printf("DCYAN_BGDGREEN:\t\tHello World with dark cyan color text & dark green background\n",	DCYAN_BGDGREEN,RESET);
	// printf("DCYAN_BGLGREEN:\t\tHello World with dark cyan color text & light green background\n",	DCYAN_BGLGREEN,RESET);
	// printf("DCYAN_BGMGREEN:\t\tHello World with dark cyan color text & medium green background\n",	DCYAN_BGMGREEN,RESET);
	// printf("DCYAN_BGDRED:\t\tHello World with dark cyan color text & dark red background\n",		DCYAN_BGDRED,RESET);	
	// printf("DCYAN_BGLRED:\t\tHello World with dark cyan color text & light red background\n",		DCYAN_BGLRED,RESET);
	// printf("DCYAN_BGDORANGE:\tHello World with dark cyan color text & dark orange background\n",	DCYAN_BGDORANGE,RESET);
	// printf("DCYAN_BGLORANGE:\tHello World with dark cyan color text & light orange background\n",	DCYAN_BGLORANGE,RESET);
	// printf("DCYAN_BGLBLUE:\t\tHello World with dark cyan color text & light blue background\n",		DCYAN_BGLBLUE,RESET);
	// printf("DCYAN_BGLWHITE:\t\tHello World with dark cyan color text & light white background\n",	DCYAN_BGLWHITE,RESET);
	// printf("DCYAN_BGDWHITE:\t\tHello World with dark cyan color text & dark white background\n",	DCYAN_BGDWHITE,RESET);
	// printf("DCYAN_BGLEMON:\t\tHello World with dark cyan color text & lemon background\n",			DCYAN_BGLEMON,RESET);
	// printf("DCYAN_BGMPINK:\t\tHello World with dark cyan color text & medium pink background\n",	DCYAN_BGMPINK,RESET);
	// printf("DCYAN_BGDPINK:\t\tHello World with dark cyan color text & dark pink background\n",		DCYAN_BGDPINK,RESET);
	// printf("DCYAN_BGLPINK:\t\tHello World with dark cyan color text & light pink background\n",		DCYAN_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsORANGE()
{
	// ORANGE
	// printf("ORANGE_BGDGREEN:\tHello World with orange color text & dark green background\n",	ORANGE_BGDGREEN,RESET);
	// printf("ORANGE_BGLGREEN:\tHello World with orange color text & light green background\n",	ORANGE_BGLGREEN,RESET);
	// printf("ORANGE_BGMGREEN:\tHello World with orange color text & medium green background\n",ORANGE_BGMGREEN,RESET);
	// printf("ORANGE_BGDRED:\t\tHello World with orange color text & dark red background\n",		ORANGE_BGDRED,RESET);	
	// printf("ORANGE_BGLRED:\t\tHello World with orange color text & light red background\n",		ORANGE_BGLRED,RESET);
	// printf("ORANGE_BGDORANGE:\tHello World with orange color text & dark orange background\n",	ORANGE_BGDORANGE,RESET);
	// printf("ORANGE_BGLORANGE:\tHello World with orange color text & light orange background\n",	ORANGE_BGLORANGE,RESET);
	// printf("ORANGE_BGLBLUE:\t\tHello World with orange color text & light blue background\n",	ORANGE_BGLBLUE,RESET);
	// printf("ORANGE_BGLWHITE:\tHello World with orange color text & light white background\n",	ORANGE_BGLWHITE,RESET);
	// printf("ORANGE_BGDWHITE:\tHello World with orange color text & dark white background\n",	ORANGE_BGDWHITE,RESET);
	// printf("ORANGE_BGLEMON:\t\tHello World with orange color text & lemon background\n",		ORANGE_BGLEMON,RESET);
	// printf("ORANGE_BGMPINK:\t\tHello World with orange color text & medium pink background\n",	ORANGE_BGMPINK,RESET);
	// printf("ORANGE_BGDPINK:\t\tHello World with orange color text & dark pink background\n",	ORANGE_BGDPINK,RESET);
	// printf("ORANGE_BGLPINK:\t\tHello World with orange color text & light pink background\n",	ORANGE_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsBLACK()
{
	// BLACK
	// printf("BLACK_BGDGREEN:\t\tHello World with black color text & dark green background\n",	BLACK_BGDGREEN,RESET);
	// printf("BLACK_BGLGREEN:\t\tHello World with black color text & light green background\n",	BLACK_BGLGREEN,RESET);
	// printf("BLACK_BGMGREEN:\t\tHello World with black color text & medium green background\n",	BLACK_BGMGREEN,RESET);
	// printf("BLACK_BGDRED:\t\tHello World with black color text & dark red background\n",		BLACK_BGDRED,RESET);	
	// printf("BLACK_BGLRED:\t\tHello World with black color text & light red background\n",		BLACK_BGLRED,RESET);
	// printf("BLACK_BGDORANGE:\tHello World with black color text & dark orange background\n",	BLACK_BGDORANGE,RESET);
	// printf("BLACK_BGLORANGE:\tHello World with black color text & light orange background\n",	BLACK_BGLORANGE,RESET);
	// printf("BLACK_BGLBLUE:\t\tHello World with black color text & light blue background\n",		BLACK_BGLBLUE,RESET);
	// printf("BLACK_BGLWHITE:\t\tHello World with black color text & light white background\n",	BLACK_BGLWHITE,RESET);
	// printf("BLACK_BGDWHITE:\t\tHello World with black color text & dark white background\n",	BLACK_BGDWHITE,RESET);
	// printf("BLACK_BGLEMON:\t\tHello World with black color text & lemon background\n",			BLACK_BGLEMON,RESET);
	// printf("BLACK_BGMPINK:\t\tHello World with black color text & medium pink background\n",	BLACK_BGMPINK,RESET);
	// printf("BLACK_BGDPINK:\t\tHello World with black color text & dark pink background\n",		BLACK_BGDPINK,RESET);
	// printf("BLACK_BGLPINK:\t\tHello World with black color text & light pink background\n",		BLACK_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsMAGENTA()
{
	// MAGENTA
	// printf("MAGENTA_BGDGREEN:\tHello World with magenta color text & dark green background\n",		MAGENTA_BGDGREEN,RESET);
	// printf("MAGENTA_BGLGREEN:\tHello World with magenta color text & light green background\n",		MAGENTA_BGLGREEN,RESET);
	// printf("MAGENTA_BGMGREEN:\tHello World with magenta color text & medium green background\n",	MAGENTA_BGMGREEN,RESET);
	// printf("MAGENTA_BGDRED:\t\tHello World with magenta color text & dark red background\n",		MAGENTA_BGDRED,RESET);	
	// printf("MAGENTA_BGLRED:\t\tHello World with magenta color text & light red background\n",		MAGENTA_BGLRED,RESET);
	// printf("MAGENTA_BGDORANGE:\tHello World with magenta color text & dark orange background\n",	MAGENTA_BGDORANGE,RESET);
	// printf("MAGENTA_BGLORANGE:\tHello World with magenta color text & light orange background\n",	MAGENTA_BGLORANGE,RESET);
	// printf("MAGENTA_BGLBLUE:\tHello World with magenta color text & light blue background\n",		MAGENTA_BGLBLUE,RESET);
	// printf("MAGENTA_BGLWHITE:\tHello World with magenta color text & light white background\n",		MAGENTA_BGLWHITE,RESET);
	// printf("MAGENTA_BGDWHITE:\tHello World with magenta color text & dark white background\n",		MAGENTA_BGDWHITE,RESET);
	// printf("MAGENTA_BGLEMON:\tHello World with magenta color text & lemon background\n",			MAGENTA_BGLEMON,RESET);
	// printf("MAGENTA_BGMPINK:\tHello World with magenta color text & medium pink background\n",		MAGENTA_BGMPINK,RESET);
	// printf("MAGENTA_BGDPINK:\tHello World with magenta color text & dark pink background\n",		MAGENTA_BGDPINK,RESET);
	// printf("MAGENTA_BGLPINK:\tHello World with magenta color text & light pink background\n",		MAGENTA_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsYELLOW()
{
	// YELLOW
	// printf("YELLOW_BGDGREEN:\tHello World with yellow color text & dark green background\n",	YELLOW_BGDGREEN,RESET);
	// printf("YELLOW_BGLGREEN:\tHello World with yellow color text & light green background\n",	YELLOW_BGLGREEN,RESET);
	// printf("YELLOW_BGMGREEN:\tHello World with yellow color text & medium green background\n",	YELLOW_BGMGREEN,RESET);
	// printf("YELLOW_BGDRED:\t\tHello World with yellow color text & dark red background\n",		YELLOW_BGDRED,RESET);	
	// printf("YELLOW_BGLRED:\t\tHello World with yellow color text & light red background\n",		YELLOW_BGLRED,RESET);
	// printf("YELLOW_BGDORANGE:\tHello World with yellow color text & dark orange background\n",	YELLOW_BGDORANGE,RESET);
	// printf("YELLOW_BGLORANGE:\tHello World with yellow color text & light orange background\n",	YELLOW_BGLORANGE,RESET);
	// printf("YELLOW_BGLBLUE:\t\tHello World with yellow color text & light blue background\n",	YELLOW_BGLBLUE,RESET);
	// printf("YELLOW_BGLWHITE:\tHello World with yellow color text & light white background\n",	YELLOW_BGLWHITE,RESET);
	// printf("YELLOW_BGDWHITE:\tHello World with yellow color text & dark white background\n",	YELLOW_BGDWHITE,RESET);
	// printf("YELLOW_BGLEMON:\t\tHello World with yellow color text & lemon background\n",		YELLOW_BGLEMON,RESET);
	// printf("YELLOW_BGMPINK:\t\tHello World with yellow color text & medium pink background\n",	YELLOW_BGMPINK,RESET);
	// printf("YELLOW_BGDPINK:\t\tHello World with yellow color text & dark pink background\n",	YELLOW_BGDPINK,RESET);
	// printf("YELLOW_BGLPINK:\t\tHello World with yellow color text & light pink background\n",	YELLOW_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsLEMON()
{
	// LEMON
	// printf("LEMON_BGDGREEN:\t\tHello World with lemon color text & dark green background\n",	LEMON_BGDGREEN,RESET);
	// printf("LEMON_BGLGREEN:\t\tHello World with lemon color text & light green background\n",	LEMON_BGLGREEN,RESET);
	// printf("LEMON_BGMGREEN:\t\tHello World with lemon color text & medium green background\n",	LEMON_BGMGREEN,RESET);
	// printf("LEMON_BGDRED:\t\tHello World with lemon color text & dark red background\n",		LEMON_BGDRED,RESET);	
	// printf("LEMON_BGLRED:\t\tHello World with lemon color text & light red background\n",		LEMON_BGLRED,RESET);
	// printf("LEMON_BGDORANGE:\tHello World with lemon color text & dark orange background\n",	LEMON_BGDORANGE,RESET);
	// printf("LEMON_BGLORANGE:\tHello World with lemon color text & light orange background\n",	LEMON_BGLORANGE,RESET);
	// printf("LEMON_BGLBLUE:\t\tHello World with lemon color text & light blue background\n",		LEMON_BGLBLUE,RESET);
	// printf("LEMON_BGLWHITE:\t\tHello World with lemon color text & light white background\n",	LEMON_BGLWHITE,RESET);
	// printf("LEMON_BGDWHITE:\t\tHello World with lemon color text & dark white background\n",	LEMON_BGDWHITE,RESET);
	// printf("LEMON_BGLEMON:\t\tHello World with lemon color text & lemon background\n",			LEMON_BGLEMON,RESET);
	// printf("LEMON_BGMPINK:\t\tHello World with lemon color text & medium pink background\n",	LEMON_BGMPINK,RESET);
	// printf("LEMON_BGDPINK:\t\tHello World with lemon color text & dark pink background\n",		LEMON_BGDPINK,RESET);
	// printf("LEMON_BGLPINK:\t\tHello World with lemon color text & light pink background\n",		LEMON_BGLPINK,RESET);
	// printf("\n");
}

void colorBackgroundsPINK()
{
	// PINK
	// printf("PINK_BGDGREEN:\t\tHello World with pink color text & dark green background\n",	PINK_BGDGREEN,RESET);
	// printf("PINK_BGLGREEN:\t\tHello World with pink color text & light green background\n",	PINK_BGLGREEN,RESET);
	// printf("PINK_BGMGREEN:\t\tHello World with pink color text & medium green background\n",PINK_BGMGREEN,RESET);
	// printf("PINK_BGDRED:\t\tHello World with pink color text & dark red background\n",		PINK_BGDRED,RESET);	
	// printf("PINK_BGLRED:\t\tHello World with pink color text & light red background\n",		PINK_BGLRED,RESET);
	// printf("PINK_BGDORANGE:\t\tHello World with pink color text & dark orange background\n",	PINK_BGDORANGE,RESET);
	// printf("PINK_BGLORANGE:\t\tHello World with pink color text & light orange background\n",	PINK_BGLORANGE,RESET);
	// printf("PINK_BGLBLUE:\t\tHello World with pink color text & light blue background\n",	PINK_BGLBLUE,RESET);
	// printf("PINK_BGLWHITE:\t\tHello World with pink color text & light white background\n",	PINK_BGLWHITE,RESET);
	// printf("PINK_BGDWHITE:\t\tHello World with pink color text & dark white background\n",	PINK_BGDWHITE,RESET);
	// printf("PINK_BGLEMON:\t\tHello World with pink color text & lemon background\n",		PINK_BGLEMON,RESET);
	// printf("PINK_BGMPINK:\t\tHello World with pink color text & medium pink background\n",	PINK_BGMPINK,RESET);
	// printf("PINK_BGDPINK:\t\tHello World with pink color text & dark pink background\n",	PINK_BGDPINK,RESET);
	// printf("PINK_BGLPINK:\t\tHello World with pink color text & light pink background\n",	PINK_BGLPINK,RESET);
	// printf("\n");
}


// MAIN CODE
int main()
{	
	cout << "===============================> RAINBOW MANUAL <===============================\n" << endl;
	cout << "Which manual you are looking for ?"    << endl;
	cout << "1. Formatting Texts"                   << endl;
	cout << "2. Rain Colors"                        << endl;
	cout << "3. Background Colors"                  << endl;
	cout << "4. Formatting with Colors"             << endl;
	cout << "5. Formatting with Backgrounds"        << endl;
	cout << "6. Colors with different backgrounds"  << endl;
	cout << "# ";
	int answer = 0;
    cin >> answer;

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
		case 6:
			colorBackgrounds();
			break;
		default:
			cout << BDRED << "Invalid Manual Option !!!\n" << RESET << endl;
			break;
	}
}
