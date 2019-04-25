#include "rainbow.h"
#include <stdio.h>
int main()
{
	//USE THIS PROGRAM IN LINUX/UNIX TERMINAL ONLY
	
	printf("===============================> RAINBOW MANUAL <===============================\n\n");
	
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

	//testing formatting with colors
	printf("---------------------------> FORMATTING WITH COLORS <---------------------------\n\n");
	printf("BLGREEN:\t%sHello World with bold light green color%s\n",BLGREEN,RESET);
	printf("ILGREEN:\t%sHello World with italic light green color%s\n",ILGREEN,RESET);
	printf("ULLGREEN:\t%sHello World with underline light green color%s\n",ULLGREEN,RESET);
	printf("BKLGREEN:\t%sHello World with blinking light green color%s\n",BKLGREEN,RESET);
	printf("CLGREEN:\t%sHello World with strikethrough light green color%s\n",CLGREEN,RESET);
	printf("DLLGREEN:\t%sHello World with double line light green color%s\n\n",DLLGREEN,RESET);
	printf("OLLGREEN:\t%sHello World with overline light green color%s\n\n",OLLGREEN,RESET);

	printf("BDGREEN:\t%sHello World with bold dark green color%s\n",BDGREEN,RESET);
	printf("IDGREEN:\t%sHello World with italic dark green color%s\n",IDGREEN,RESET);
	printf("ULDGREEN:\t%sHello World with underline dark green color%s\n",ULDGREEN,RESET);
	printf("BKDGREEN:\t%sHello World with blinking dark green color%s\n",BKDGREEN,RESET);
	printf("CDGREEN:\t%sHello World with strikethrough dark green color%s\n",CDGREEN,RESET);
	printf("DLDGREEN:\t%sHello World with doubleline dark green color%s\n\n",DLDGREEN,RESET);
	printf("OLDGREEN:\t%sHello World with over line dark green color%s\n\n",OLDGREEN,RESET);

	printf("BMGREEN:\t%sHello World with bold medium green color%s\n",BMGREEN,RESET);
	printf("IMGREEN:\t%sHello World with italic medium green color%s\n",IMGREEN,RESET);
	printf("ULMGREEN:\t%sHello World with underlined medium green color%s\n",ULMGREEN,RESET);
	printf("BKMGREEN:\t%sHello World with blinking medium green color%s\n",BKMGREEN,RESET);
	printf("CMGREEN:\t%sHello World with strikethrough medium green color%s\n",CMGREEN,RESET);
	printf("DLMGREEN:\t%sHello World with doubleline medium green color%s\n\n",DLMGREEN,RESET);
	printf("OLMGREEN:\t%sHello World with overline medium green color%s\n\n",OLMGREEN,RESET);

	printf("BLRED:\t\t%sHello World with bold light red color%s\n",BLRED,RESET);
	printf("ILRED:\t\t%sHello World with italic light red color%s\n",ILRED,RESET);
	printf("ULLRED:\t\t%sHello World with underlined light red color%s\n",ULLRED,RESET);
	printf("BKLRED:\t\t%sHello World with blinking light red color%s\n",BKLRED,RESET);
	printf("CLRED:\t\t%sHello World with strikethrough light red color%s\n",CLRED,RESET);
	printf("DLLRED:\t\t%sHello World with double line light red color%s\n\n",DLLRED,RESET);
	printf("OLLRED:\t\t%sHello World with over line light red color%s\n\n",OLLRED,RESET);

	printf("BDRED:\t\t%sHello World with bold dark red color%s\n",BDRED,RESET);
	printf("IDRED:\t\t%sHello World with italic dark red color%s\n",IDRED,RESET);
	printf("ULDRED:\t\t%sHello World with underlined dark red color%s\n",ULDRED,RESET);
	printf("BKDRED:\t\t%sHello World with blinking dark red color%s\n",BKDRED,RESET);
	printf("CDRED:\t\t%sHello World with strikethrough dark red color%s\n",CDRED,RESET);
	printf("DLDRED:\t\t%sHello World with doubleline dark red color%s\n\n",DLDRED,RESET);
	printf("OLDRED:\t\t%sHello World with over line dark red color%s\n\n",OLDRED,RESET);

	printf("BLWHITE:\t%sHello World with bold light white color%s\n",BLWHITE,RESET);
	printf("ILWHITE:\t%sHello World with italic light white color%s\n",ILWHITE,RESET);
	printf("ULLWHITE:\t%sHello World with underlined light white color%s\n",ULLWHITE,RESET);
	printf("BKLWHITE:\t%sHello World with blinking light white color%s\n",BKLWHITE,RESET);
	printf("CLWHITE:\t%sHello World with strikethrough light white color%s\n",CLWHITE,RESET);
	printf("DLLWHITE:\t%sHello World with double line light white color%s\n\n",DLLWHITE,RESET);
	printf("OLLWHITE:\t%sHello World with over line light white color%s\n\n",OLLWHITE,RESET);

	printf("BDWHITE:\t%sHello World with bold dark white color%s\n",BDWHITE,RESET);
	printf("IDWHITE:\t%sHello World with italic dark white color%s\n",IDWHITE,RESET);
	printf("ULDWHITE:\t%sHello World with underlined dark white color%s\n",ULDWHITE,RESET);
	printf("BKDWHITE:\t%sHello World with blinking dark white color%s\n",BKDWHITE,RESET);
	printf("CDWHITE:\t%sHello World with strikethrough dark white color%s\n",CDWHITE,RESET);
	printf("DLDWHITE:\t%sHello World with doubleline dark white color%s\n\n",DLDWHITE,RESET);
	printf("OLDWHITE:\t%sHello World with overline dark white color%s\n\n",OLDWHITE,RESET);

	printf("BLBLUE:\t\t%sHello World with bold light blue color%s\n",BLBLUE,RESET);
	printf("ILBLUE:\t\t%sHello World with italic light blue color%s\n",ILBLUE,RESET);
	printf("ULLBLUE:\t%sHello World with underline light blue color%s\n",ULLBLUE,RESET);
	printf("BKLBLUE:\t%sHello World with blinking light blue color%s\n",BKLBLUE,RESET);
	printf("CLBLUE:\t\t%sHello World with strikethrough light blue color%s\n",CLBLUE,RESET);
	printf("DLLBLUE:\t%sHello World with double line light blue color%s\n\n",DLLBLUE,RESET);
	printf("OLLBLUE:\t%sHello World with over line light blue color%s\n\n",OLLBLUE,RESET);

	printf("BDBLUE:\t\t%sHello World with bold dark blue color%s\n",BDBLUE,RESET);
	printf("IDBLUE:\t\t%sHello World with italic dark blue color%s\n",IDBLUE,RESET);
	printf("ULDBLUE:\t%sHello World with underline dark blue color%s\n",ULDBLUE,RESET);
	printf("BKDBLUE:\t%sHello World with blinking dark blue color%s\n",BKDBLUE,RESET);
	printf("CDBLUE:\t\t%sHello World with strikethrough dark blue color%s\n",CDBLUE,RESET);
	printf("DLDBLUE:\t%sHello World with doubleline dark blue color%s\n\n",DLDBLUE,RESET);
	printf("OLDBLUE:\t%sHello World with overline dark blue color%s\n\n",OLDBLUE,RESET);

	printf("BLCYAN:\t\t%sHello World with bold light cyan color%s\n",BLCYAN,RESET);
	printf("ILCYAN:\t\t%sHello World with italic light cyan color%s\n",ILCYAN,RESET);
	printf("ULLCYAN:\t%sHello World with underline light cyan color%s\n",ULLCYAN,RESET);
	printf("BKLCYAN:\t%sHello World with blinking light cyan color%s\n",BKLCYAN,RESET);
	printf("CLCYAN:\t\t%sHello World with strikethrough light cyan color%s\n",CLCYAN,RESET);
	printf("DLLCYAN:\t%sHello World with doubleline light cyan color%s\n\n",DLLCYAN,RESET);
	printf("OLLCYAN:\t%sHello World with overline light cyan color%s\n\n",OLLCYAN,RESET);

	printf("BDCYAN:\t\t%sHello World with bold dark cyan color%s\n",BDCYAN,RESET);
	printf("IDCYAN:\t\t%sHello World with italic dark cyan color%s\n",IDCYAN,RESET);
	printf("ULDCYAN:\t%sHello World with underline dark cyan color%s\n",ULDCYAN,RESET);
	printf("BKDCYAN:\t%sHello World with blinking dark cyan color%s\n",BKDCYAN,RESET);
	printf("CDCYAN:\t\t%sHello World with cut dark cyan color%s\n",CDCYAN,RESET);
	printf("DLDCYAN:\t%sHello World with doubleline dark cyan color%s\n\n",DLDCYAN,RESET);
	printf("OLDCYAN:\t%sHello World with overline dark cyan color%s\n\n",OLDCYAN,RESET);

	printf("BORANGE:\t%sHello World with bold orange color%s\n",BORANGE,RESET);
	printf("IORANGE:\t%sHello World with italic orange color%s\n",IORANGE,RESET);
	printf("ULORANGE:\t%sHello World with underline orange color%s\n",ULORANGE,RESET);
	printf("BKORANGE:\t%sHello World with blinking orange color%s\n",BKORANGE,RESET);
	printf("CORANGE:\t%sHello World with cut orange color%s\n",CORANGE,RESET);
	printf("DLORANGE:\t%sHello World with doubleline orange color%s\n\n",DLORANGE,RESET);
	printf("OLORANGE:\t%sHello World with overline orange color%s\n\n",OLORANGE,RESET);

	printf("BBLACK:\t\t%sHello World with bold black color%s\n",BBLACK,RESET);
	printf("IBLACK:\t\t%sHello World with bold black color%s\n",IBLACK,RESET);
	printf("ULBLACK:\t%sHello World with bold black color%s\n",ULBLACK,RESET);
	printf("BKBLACK:\t%sHello World with bold black color%s\n",BKBLACK,RESET);
	printf("CBLACK:\t\t%sHello World with bold black color%s\n",CBLACK,RESET);
	printf("DLBLACK:\t%sHello World with bold black color%s\n\n",DLBLACK,RESET);
	printf("OLBLACK:\t%sHello World with bold black color%s\n\n",OLBLACK,RESET);

	printf("BMAGENTA:\t%sHello World with bold magenta color%s\n",BMAGENTA,RESET);
	printf("IMAGENTA:\t%sHello World with italic magenta color%s\n",IMAGENTA,RESET);
	printf("ULMAGENTA:\t%sHello World with underline magenta color%s\n",ULMAGENTA,RESET);
	printf("BKMAGENTA:\t%sHello World with blinking magenta color%s\n",BKMAGENTA,RESET);
	printf("CMAGENTA:\t%sHello World with cut magenta color%s\n",CMAGENTA,RESET);
	printf("DLMAGENTA:\t%sHello World with doubleline magenta color%s\n\n",DLMAGENTA,RESET);
	printf("OLMAGENTA:\t%sHello World with overline magenta color%s\n\n",OLMAGENTA,RESET);

	printf("BYELLOW:\t%sHello World with bold yellow color%s\n",BYELLOW,RESET);
	printf("IYELLOW:\t%sHello World with italic yellow color%s\n",IYELLOW,RESET);
	printf("ULYELLOW:\t%sHello World with underline yellow color%s\n",ULYELLOW,RESET);
	printf("BKYELLOW:\t%sHello World with blinking yellow color%s\n",BKYELLOW,RESET);
	printf("CYELLOW:\t%sHello World with strikethrough yellow color%s\n",CYELLOW,RESET);
	printf("DLYELLOW:\t%sHello World with doubleline yellow color%s\n\n",DLYELLOW,RESET);
	printf("OLYELLOW:\t%sHello World with overline yellow color%s\n\n",OLYELLOW,RESET);

	printf("BLEMON:\t\t%sHello World with bold lemon color%s\n",BLEMON,RESET);
	printf("ILEMON:\t\t%sHello World with italic lemon color%s\n",ILEMON,RESET);
	printf("ULLEMON:\t%sHello World with underline lemon color%s\n",ULLEMON,RESET);
	printf("BKLEMON:\t%sHello World with blinking lemon color%s\n",BKLEMON,RESET);
	printf("CLEMON:\t\t%sHello World with cut lemon color%s\n",CLEMON,RESET);
	printf("DLLEMON:\t%sHello World with doubleline lemon color%s\n\n",DLLEMON,RESET);
	printf("OLLEMON:\t%sHello World with overline lemon color%s\n\n",OLLEMON,RESET);

	printf("BPINK:\t\t%sHello World with bold pink color%s\n",BPINK,RESET);
	printf("IPINK:\t\t%sHello World with italic pink color%s\n",IPINK,RESET);
	printf("ULPINK:\t\t%sHello World with underline pink color%s\n",ULPINK,RESET);
	printf("BKPINK:\t\t%sHello World with blinking pink color%s\n",BKPINK,RESET);
	printf("CPINK:\t\t%sHello World with cut pink color%s\n",CPINK,RESET);
	printf("DLPINK:\t\t%sHello World with double line pink color%s\n\n",DLPINK,RESET);
	printf("OLPINK:\t\t%sHello World with over line pink color%s\n\n",OLPINK,RESET);

	// printf("LGREEN_BGDGREEN:\t\t%s%sHello World with color%s\n\n",LGREEN_BGDGREEN,RESET);
}
