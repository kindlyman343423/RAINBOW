/*
B       1; - bold
I       3; - italic
UL      4; - underline
BK      5; - blink
H       8; - hidden
C        9; - cut
DL       21; - double line
OL       53; - overline

FOR TESTING
#define TEST "\x1B[107m"
* unknown colors
* "\x1B[46m"
* "\x1B[45m"
*/
#define TEST "\x1B[106m"
/*****************************************************************************
 *                              FORMATTING TEXT                              *
 *****************************************************************************/
// Reset the **color to normal**
#define RESET "\x1B[0m"			        // RESET NORMAL COLOR

// Make the **text bold**
#define BOLD "\x1B[1m" 			        // BOLD TEXT

// Make the **text italic** 
#define ITALIC "\x1B[3m"  		        // ITALIC TEXT

// Make the **text with underline** 
#define UNDERLINE "\x1B[4m"  	        // UNDERLINE TEXT

// **Blink the text** displayed
#define BLINK "\x1B[5m"                 // BLINK TEXT

// **Hides the text** from the screen 
#define HIDDEN "\x1B[8m"                // HIDDEN TEXT

// **Strikethrough the text**
#define CUT "\x1B[9m"                   // STRIKE THROUGH TEXT

// **Underline the text** with double lines
#define DOUBLELINE "\x1B[21m"           // DOUBLE UNDERLINE TEXT

// **Overline the text** when displayed
#define OVERLINE "\x1B[53m"             // OVERLINE TEXT


/******************************************************************************
 *                                  HIGHLIGHTS                                *
 ******************************************************************************/
// Change **normal highlight** to black when selected
#define HIGHLIGHT "\x1B[7m"            

// **Default color** display 
#define DEFAULTHIGHLIGHT "\x1B[98m"     


/******************************************************************************
 *                                  TEXT COLORS                               *
 ******************************************************************************/ 
// **Default text** color
#define DEFAULT "\x1B[99m"              // DEFAULT TEXT COLOR

// Display the **light green** color text on screen
#define LGREEN "\x1B[32m" 		        // LIGHT GREEN COLOR

// Display the **Medium green** color text on screen
#define MGREEN "\x1B[2m" 		        // MID GREEN COLOR

// Display the **Dark green** color text on screen
#define DGREEN "\x1B[90m"               // DARK GREEN COLOR

// Display the **Light Red** color text on screen
#define LRED "\x1B[91m"                 // LIGHT RED COLOR

// Display the **Dark red** color text on screen
#define DRED "\x1B[31m"  		        // DARK RED COLOR

// Display the **light white** color text on screen
#define LWHITE "\x1B[37m" 		        // LIGHT WHITE COLOR

// Display the **Dark white** color text on screen
#define DWHITE "\x1B[97m"               // DARK WHITE COLOR

// Dispay the **light blue** color text on screen
#define LBLUE "\x1B[94m"                // LIGHT BLUE COLOR

// Display the **dark blue** color text on screen
#define DBLUE "\x1B[34m" 		        // DARK BLUE COLOR

// Display the **light cyan** color text on screen
#define LCYAN "\x1B[96m"                // LIGHT CYAN COLOR

// Display the **dark cyan** color text on screen
#define DCYAN "\x1B[36m" 		        // DARK CYAN COLOR

// Display **orange color** text on screen
#define ORANGE "\x1B[33m" 		        // ORANGE COLOR

// Display the **black color** text on screen
#define BLACK "\x1B[30m" 		        // BLACK COLOR

// Display **magenta color** text on screen
#define MAGENTA "\x1B[35m" 	            // MAGENTA COLOR

// Display **yellow color** text on screen
#define YELLOW "\x1B[92m"               // YELLOW COLOR

// Display the **lemon color** text on screen
#define LEMON "\x1B[93m"                // LEMON COLOR

// Display the **pink color** text on screen
#define PINK "\x1B[95m"                 // PINK COLOR


/*********************************************************************************
 *                              BACKGROUND COLORS                                *
 *********************************************************************************/
// Display the **dark green** background color on screen
#define BGDGREEN "\x1B[40m"             // DARK GREEN BACKGROUND

// Display the **light green** background color on screen
#define BGLGREEN "\x1B[42m"	            // LIGHT GREEN BACKGROUND

// Display the **medium green** background color on screen
#define BGMGREEN "\x1B[100m"            // MID GREEN BACKGROUND

// Display the **dark red** background color on screen
#define BGDRED "\x1B[41m"		        // DARK RED BACKGROUND

// Display the **light red** background color on screen
#define BGLRED "\x1B[101m"              // LIGHT RED BACKGROUND

// Display the **dark orange** background color on screen
#define BGDORANGE "\x1B[43m"	        // DARK ORANGE BACKGROUND

// Display the **light orange** background color on screen
#define BGLORANGE "\x1B[102m"           // LIGHT ORANGE BACKGROUND

// Display the **light blue** background color on screen
#define BGLBLUE "\x1B[44m"		        // LIGHT BLUE BACKGROUND

// Display the **light white** background color on screen
#define BGLWHITE "\x1B[47m"		        // LIGHT WHITE BACKGROUND

// Display the **dark white** background color on screen
#define BGDWHITE "\x1B[107m"            // DARK WHITE BACKGROUND

// Display the **lemon** background color on screen
#define BGLEMON "\x1B[103m"             // LEMON BACKGROUND

// Display the **medium pink** background color on screen
#define BGMPINK "\x1B[104m"             // mid pink

// Display the **dark pink** background color on screen
#define BGDPINK "\x1B[105m"             // dark pink

// Display the **light pink** background color on screen
#define BGLPINK "\x1B[106m"             // light pink


/************************************************************************************
 *                              FORMATTING WITH COLORS                              *
 ************************************************************************************/
/**************************
 *      LIGHT GREEN       *
 **************************/
// Display the **bold light green** color on screen
#define BLGREEN "\x1B[1;32m"            // BOLD

// Display the **italic light green** color on screen
#define ILGREEN "\x1B[3;32m"	        // ITALIC

// Display the **underlined light green** color on screen
#define ULLGREEN "\x1B[4;32m"           // UNDER LINE

// Display the **blinking light green** color on screen
#define BKLGREEN "\x1B[5;32m"           // BLINK

// Display the **strikethrough light green** color on screen
#define CLGREEN "\x1B[9;32m"            // CUT

// Display the **double line light green** color on screen
#define DLLGREEN "\x1B[21;32m"          // DOUBLE LINE

// Display the **over line light green** color on screen
#define OLLGREEN "\x1B[53;32m"          // OVER LINE


/**************************
 *      DARK GREEN        *
 **************************/
// Display the **bold dark green** color on screen
#define BDGREEN "\x1B[1;90m"            // BOLD

// Display the **italic dark green** color on screen
#define IDGREEN "\x1B[3;90m"            // ITALIC

// Display the **underline dark green** color on screen
#define ULDGREEN "\x1B[4;90m"           // UNDER LINE

// Display the **blink dark green** color on screen
#define BKDGREEN "\x1B[5;90m"           // BLINK

// Display the **strikethrough dark green** color on screen
#define CDGREEN "\x1B[9;90m"            // CUT

// Display the **double line dark green** color on screen
#define DLDGREEN "\x1B[21;90m"          // DOUBLE LINE

// Display the **over line dark green** color on screen
#define OLDGREEN "\x1B[53;90m"          // OVER LINE


/**************************
 *      MEDIUM GREEN      *
 **************************/
// Display the **bold medium green** color on screen
#define BMGREEN "\x1B[1;2m" 	        // BOLD 

// Display the **italic medium green** color on screen
#define IMGREEN "\x1B[3;2m"             // ITALIC 

// Display the **underline medium green** color on screen
#define ULMGREEN "\x1B[4;2m"            // UNDERLINE

// Display the **blinking medium green** color on screen
#define BKMGREEN "\x1B[5;2m"            // BLINK

// Display the **strikethrough medium green** color on screen
#define CMGREEN "\x1B[9;2m"             // CUT

// Display the **double line medium green** color on screen
#define DLMGREEN "\x1B[21;2m"           // DOUBLE LINE

// Display the **overline medium green** color on screen
#define OLMGREEN "\x1B[53;2m"           // OVER LINE


/**************************
 *      LIGHT RED         *
 **************************/
// Display the **bold light red** color on screen
#define BLRED "\x1B[1;91m"                 // BOLD

// Display the **italic light red** color on screen
#define ILRED "\x1B[3;91m"                 // ITALIC

// Display the **underline light red** color on screen
#define ULLRED "\x1B[4;91m"                // UNDER LINE

// Display the **blink light red** color on screen
#define BKLRED "\x1B[5;91m"                // BLINK

// Display the **strikethrough light red** color on screen
#define CLRED "\x1B[9;91m"                 // CUT

// Display the **double line light red** color on screen
#define DLLRED "\x1B[21;91m"               // DOUBLE LINE

// Display the **overline light red** color on screen
#define OLLRED "\x1B[53;91m"               // OVER LINE


/**************************
 *      DARK RED          *
 **************************/
// Display the **bold dark red** color on screen
#define BDRED "\x1B[1;31m"                  // BOLD

// Display the **italic dark red** color on screen
#define IDRED "\x1B[3;31m"		            // ITALIC

// Display the **underline dark red** color on screen
#define ULDRED "\x1B[4;31m"	                // UNDERLINE

// Display the **blinking dark red** color on screen
#define BKDRED "\x1B[5;31m"                 // BLINK

// Display the **strike through dark red** color on screen
#define CDRED "\x1B[9;31m"                  // CUT

// Display the **double line dark red** color on screen
#define DLDRED "\x1B[21;31m"                // DOUBLE LINE

// Display the **over line dark red** color on screen
#define OLDRED "\x1B[53;31m"                // OVER LINE


/**************************
 *      LIGHT WHITE       *
 **************************/
// Display the **bold light white** color on screen
#define BLWHITE "\x1B[1;37m" 		        // BOLD

// Display the **italic light white** color on screen
#define ILWHITE "\x1B[3;37m" 		        // ITALIC

// Display the **under line light white** color on screen
#define ULLWHITE "\x1B[4;37m" 		        // UNDER LINE

// Display the **blinked light white** color on screen
#define BKLWHITE "\x1B[5;37m" 		        // BLINK

// Display the **strikethrough light white** color on screen
#define CLWHITE "\x1B[9;37m" 		        // CUT

// Display the **double line light white** color on screen
#define DLLWHITE "\x1B[21;37m" 		        // DOUBLE LINE

// Display the **over line light white** color on screen
#define OLLWHITE "\x1B[53;37m" 		        // OVER LINE


/**************************
 *      DARK WHITE        *
 **************************/
// Display the **bold dark white** color on screen
#define BDWHITE "\x1B[1;97m" 		        // BOLD

// Display the **italic dark white** color on screen
#define IDWHITE "\x1B[3;97m" 		        // ITALIC

// Display the **under line dark white** color on screen
#define ULDWHITE "\x1B[4;97m" 		        // UNDER LINE

// Display the **blinked dark white** color on screen
#define BKDWHITE "\x1B[5;97m" 		        // BLINK

// Display the **strikethrough dark white** color on screen
#define CDWHITE "\x1B[9;97m" 		        // CUT

// Display the **double line dark white** color on screen
#define DLDWHITE "\x1B[21;97m" 		        // DOUBLE LINE

// Display the **over line dark white** color on screen
#define OLDWHITE "\x1B[53;97m" 		        // OVER LINE


/**************************
 *      LIGHT BLUE        *
 **************************/
// Display the **bold light blue** color on screen
#define BLBLUE "\x1B[1;94m"                // BOLD

// Display the **italic light blue** color on screen
#define ILBLUE "\x1B[3;94m"                // ITALIC

// Display the **underline light blue** color on screen
#define ULLBLUE "\x1B[4;94m"               // UNDER LINE

// Display the **blink light blue** color on screen
#define BKLBLUE "\x1B[5;94m"               // BLINK

// Display the **strikethrough light blue** color on screen
#define CLBLUE "\x1B[9;94m"                // CUT

// Display the **double line light blue** color on screen
#define DLLBLUE "\x1B[21;94m"              // DOUBLE LINE

// Display the **over line light blue** color on screen
#define OLLBLUE "\x1B[53;94m"              // OVER LINE


/**************************
 *      DARK BLUE         *
 **************************/
// Display the **bold dark blue** color on screen
#define BDBLUE "\x1B[1;34m" 		        // BOLD

// Display the **italic dark blue** color on screen
#define IDBLUE "\x1B[3;34m" 		        // ITALIC

// Display the **under line dark blue** color on screen
#define ULDBLUE "\x1B[4;34m" 		        // UNDERLINE

// Display the **blink dark blue** color on screen
#define BKDBLUE "\x1B[5;34m" 		        // BLINK

// Display the **strikethrough dark blue** color on screen
#define CDBLUE "\x1B[9;34m" 		        // CUT

// Display the **double line dark blue** color on screen
#define DLDBLUE "\x1B[21;34m" 		        // DOUBLE LINE

// Display the **over line dark blue** color on screen
#define OLDBLUE "\x1B[53;34m" 		        // OVER LINE


/**************************
 *      LIGHT CYAN        *
 **************************/
// Display the **bold light cyan** color on screen
#define BLCYAN "\x1B[1;96m"                 // BOLD

// Display the **italic light cyan** color on screen
#define ILCYAN "\x1B[3;96m"                 // ITALIC

// Display the **underline light cyan** color on screen
#define ULLCYAN "\x1B[4;96m"                // UNDERLINE

// Display the **blink light cyan** color on screen
#define BKLCYAN "\x1B[5;96m"                // BLINK

// Display the **cut light cyan** color on screen
#define CLCYAN "\x1B[9;96m"                 // CUT

// Display the **double line light cyan** color on screen
#define DLLCYAN "\x1B[21;96m"               // DOUBLE LINE

// Display the **over line light cyan** color on screen
#define OLLCYAN "\x1B[53;96m"               // OVER LINE


/**************************
 *      DARK CYAN         *
 **************************/
// Display the **bold dark cyan** color text on screen
#define BDCYAN "\x1B[1;36m" 		        // BOLD

// Display the **italic dark cyan** color text on screen
#define IDCYAN "\x1B[3;36m" 		        // ITALIC

// Display the **under line dark cyan** color text on screen
#define ULDCYAN "\x1B[4;36m" 		        // UNDER LINE

// Display the **blink dark cyan** color text on screen
#define BKDCYAN "\x1B[5;36m" 		        // BLINK

// Display the **cut dark cyan** color text on screen
#define CDCYAN "\x1B[9;36m" 		        // CUT

// Display the **double line dark cyan** color text on screen
#define DLDCYAN "\x1B[21;36m" 		        // DOUBLE LINE

// Display the **over line dark cyan** color text on screen
#define OLDCYAN "\x1B[53;36m" 		        // OVER LINE


/**************************
 *          ORANGE        *
 **************************/
// Display **bold orange color** text on screen
#define BORANGE "\x1B[1;33m" 		        // BOLD

// Display **italic orange color** text on screen
#define IORANGE "\x1B[3;33m" 		        // ITALIC

// Display **under line orange color** text on screen
#define ULORANGE "\x1B[4;33m" 		        // UNDER LINE

// Display **blink orange color** text on screen
#define BKORANGE "\x1B[5;33m" 		        // BLINK

// Display **strikethrough orange color** text on screen
#define CORANGE "\x1B[9;33m" 		        // CUT

// Display **double line orange color** text on screen
#define DLORANGE "\x1B[21;33m" 		        // DOUBLE LINE

// Display **over line orange color** text on screen
#define OLORANGE "\x1B[53;33m" 		        // OVER LINE


/**************************
 *          BLACK         *
 **************************/
// Display the **bold black color** text on screen
#define BBLACK "\x1B[1;30m" 		        // BOLD

// Display the **italic black color** text on screen
#define IBLACK "\x1B[3;30m" 		        // ITALIC

// Display the **under line black color** text on screen
#define ULBLACK "\x1B[4;30m" 		        // UNDER LINE

// Display the **blinking black color** text on screen
#define BKBLACK "\x1B[5;30m" 		        // BLINK

// Display the **strikethrough black color** text on screen
#define CBLACK "\x1B[9;30m" 		        // CUT

// Display the **double line black color** text on screen
#define DLBLACK "\x1B[21;30m" 		        // DOUBLE LINE

// Display the **over line black color** text on screen
#define OLBLACK "\x1B[53;30m" 		        // OVER LINE


/**************************
 *          MAGENTA       *
 **************************/
// Display **bold magenta color** text on screen
#define BMAGENTA "\x1B[1;35m" 	            // BOLD

// Display **italic magenta color** text on screen
#define IMAGENTA "\x1B[3;35m" 	            // ITALIC

// Display **under line magenta color** text on screen
#define ULMAGENTA "\x1B[4;35m" 	            // UNDER LINE

// Display **blink magenta color** text on screen
#define BKMAGENTA "\x1B[5;35m" 	            // BLINK

// Display **cut magenta color** text on screen
#define CMAGENTA "\x1B[9;35m" 	            // CUT

// Display **double line magenta color** text on screen
#define DLMAGENTA "\x1B[21;35m" 	        // DOUBLE LINE

// Display **over line magenta color** text on screen
#define OLMAGENTA "\x1B[53;35m" 	        // OVER LINE


/**************************
 *          YELLOW        *
 **************************/
// Display **bold yellow color** text on screen
#define BYELLOW "\x1B[1;92m"               // BOLD

// Display **italic yellow color** text on screen
#define IYELLOW "\x1B[3;92m"               // ITALIC

// Display **under line yellow color** text on screen
#define ULYELLOW "\x1B[4;92m"               // UNDER LINE

// Display **blink yellow color** text on screen
#define BKYELLOW "\x1B[5;92m"               // BLINK

// Display **cut yellow color** text on screen
#define CYELLOW "\x1B[9;92m"               // CUT

// Display **double line yellow color** text on screen
#define DLYELLOW "\x1B[21;92m"             // DOUBLE LINE

// Display **over line yellow color** text on screen
#define OLYELLOW "\x1B[53;92m"             // OVER LINE


/**************************
 *          LEMON         *
 **************************/
// Display the **bold lemon color** text on screen
#define BLEMON "\x1B[1;93m"                // BOLD

// Display the **italic lemon color** text on screen
#define ILEMON "\x1B[3;93m"                // ITALIC

// Display the **under line lemon color** text on screen
#define ULLEMON "\x1B[4;93m"                // UNDER LINE

// Display the **blink lemon color** text on screen
#define BKLEMON "\x1B[5;93m"                // BLINK

// Display the **cut lemon color** text on screen
#define CLEMON "\x1B[9;93m"                // CUT

// Display the **double line lemon color** text on screen
#define DLLEMON "\x1B[21;93m"                // DOUBLE LINE

// Display the **over line lemon color** text on screen
#define OLLEMON "\x1B[53;93m"                // OVER LINE


/**************************
 *          PINK          *
 **************************/
// Display the **bold pink color** text on screen
#define BPINK "\x1B[1;95m"                 // BOLD

// Display the **italic pink color** text on screen
#define IPINK "\x1B[3;95m"                 // ITALIC

// Display the **under line pink color** text on screen
#define ULPINK "\x1B[4;95m"                 // UNDER LINE

// Display the **blink pink color** text on screen
#define BKPINK "\x1B[5;95m"                 // BLINK

// Display the **cut pink color** text on screen
#define CPINK "\x1B[9;95m"                 // CUT

// Display the **double line pink color** text on screen
#define DLPINK "\x1B[21;95m"                 // DOUBLE LINE

// Display the **over line pink color** text on screen
#define OLPINK "\x1B[53;95m"                 // OVER LINE


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