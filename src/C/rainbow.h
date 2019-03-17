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
#define ULLRED "\x1B[4;91m"                 // UNDER LINE

// Display the **blink light red** color on screen
#define BKLRED "\x1B[5;91m"                 // BLINK

// Display the **strikethrough light red** color on screen
#define CLRED "\x1B[9;91m"                 // CUT

// Display the **double line light red** color on screen
#define DLLRED "\x1B[21;91m"                 // DOUBLE LINE

// Display the **overline light red** color on screen
#define OLLRED "\x1B[53;91m"                 // OVER LINE


/**************************
 *      DARK RED          *
 **************************/

#define BDRED "\x1B[1;31m"   //BOLD RED COLOR
#define IDRED "\x1B[3;31m"		//ITALIC RED COLOR
#define UDRED "\x1B[4;31m"	//UNDERLINE RED COLOR
/**************************
 *      LIGHT WHITE       *
 **************************/
/**************************
 *      DARK WHITE        *
 **************************/
/**************************
 *      LIGHT BLUE        *
 **************************/
/**************************
 *      DARK BLUE         *
 **************************/
/**************************
 *      LIGHT CYAN        *
 **************************/
/**************************
 *      DARK CYAN         *
 **************************/
/**************************
 *          ORANGE        *
 **************************/
/**************************
 *          BLACK         *
 **************************/
/**************************
 *          MAGENTA       *
 **************************/
/**************************
 *          YELLOW        *
 **************************/
/**************************
 *          LEMON         *
 **************************/
/**************************
 *          PINK          *
 **************************/


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