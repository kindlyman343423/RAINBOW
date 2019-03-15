/*
1; - bold
3; - italic
4; - underline
5; - blink
8; - hidden
9; - cut
21; - double line
53; - overline

FOR TESTING
#define TEST "\x1B[107m"
* unknown colors
* "\x1B[46m"
*/

/*****************************************************************************
 *                              FORMATTING TEXT                              *
 *****************************************************************************/

// Reset the color to normal
#define RESET "\x1B[0m"			        // RESET NORMAL COLOR

// Make the text bold
#define BOLD "\x1B[1m" 			        // BOLD TEXT

// Make the text italic 
#define ITALIC "\x1B[3m"  		        // ITALIC TEXT

// Make the text with underline 
#define UNDERLINE "\x1B[4m"  	        // UNDERLINE TEXT

// Blink the text displayed
#define BLINK "\x1B[5m"                 // BLINK TEXT

// Hides the text from the screen 
#define HIDDEN "\x1B[8m"                // HIDDEN TEXT

// Strikethrough the text
#define CUT "\x1B[9m"                   // STRIKE THROUGH TEXT

// Underline the text with double lines
#define DOUBLELINE "\x1B[21m"           // DOUBLE UNDERLINE TEXT

// Overline the text when displayed
#define OVERLINE "\x1B[53m"             // OVERLINE TEXT


/******************************************************************************
 *                                  HIGHLIGHTS                                *
 ******************************************************************************/

// Change normal highlight to black when selected
#define HIGHLIGHT "\x1B[7m"            

// Default color display 
#define DEFAULTHIGHLIGHT "\x1B[98m"     


/******************************************************************************
 *                                  TEXT COLORS                               *
 ******************************************************************************/ 

// Default text color
#define DEFAULT "\x1B[99m"              // DEFAULT TEXT COLOR

// Display the **light green** color text on screen
#define LGREEN "\x1B[32m" 		        // LIGHT GREEN COLOR

// Display the Medium green color text on screen
#define MGREEN "\x1B[2m" 		        // MID GREEN COLOR

// Display the Dark green color text on screen
#define DGREEN "\x1B[90m"               // DARK GREEN COLOR

#define LRED "\x1B[91m"                 // LIGHT RED COLOR
#define DRED "\x1B[31m"  		        // RED COLOR

#define LWHITE "\x1B[37m" 		        // LIGHT WHITE COLOR
#define DWHITE "\x1B[97m"               // DARK WHITE COLOR

#define LBLUE "\x1B[94m"                // LIGHT BLUE COLOR
#define DBLUE "\x1B[34m" 		        // DARK BLUE COLOR

#define LCYAN "\x1B[96m"                // LIGHT CYAN COLOR
#define DCYAN "\x1B[36m" 		        // DARK CYAN COLOR

#define ORANGE "\x1B[33m" 		        // ORANGE COLOR
#define BLACK "\x1B[30m" 		        // BLACK COLOR

#define MAGENTA "\x1B[35m" 	            // MAGENTA COLOR
#define YELLOW "\x1B[92m"               // YELLOW COLOR
#define LEMON "\x1B[93m"                // LEMON COLOR
#define PINK "\x1B[95m"                 // PINK COLOR

//BACKGROUND COLORS
#define BGLGREEN "\x1B[42m"	    //LIGHT GREEN BACKGROUND
#define BGMGREEN "\x1B[100m"     // MID GREEN BACKGROUND
#define BGDGREEN "\x1B[40m"      //DARK GREEN BACKGROUND

#define BGLRED "\x1B[101m"      //LIGHT RED BACKGROUND
#define BGDRED "\x1B[41m"		//DARK RED BACKGROUND

#define BGLORANGE "\x1B[102m"    // LIGHT ORANGE BACKGROUND
#define BGDORANGE "\x1B[43m"	    //DARK ORANGE BACKGROUND

#define BGLBLUE "\x1B[44m"		//LIGHT BLUE BACKGROUND
#define BGPINK "\x1B[45m"		//PINK BACKGROUND
#define BGLWHITE "\x1B[47m"		//LIGHT WHITE BACKGROUND
#define BGDWHITE "\x1B[107m"    //DARK WHITE BACKGROUND
#define BGLEMON "\x1B[103m"     //LEMON BACKGROUND

#define BGLPINK "\x1B[106m" //light pink
#define BGMPINK "\x1B[104m" //mid pink
#define BGDPINK "\x1B[105m" //dark pink

//FORMATTING WITH COLORS
#define BDGREEN "\x1B[1;2m" 	//BOLD DARK GREEN COLOR
#define IDGREEN "\x1B[3;2m" //ITALIC DARK GREEN COLOR
#define UDGREEN "\x1B[4;2m" //UNDERLINE GREEN COLOR
#define BRED "\x1B[1;31m"   //BOLD RED COLOR
#define IRED "\x1B[3;31m"		//ITALIC RED COLOR
#define URED "\x1B[4;31m"	//UNDERLINE RED COLOR
#define BLGREEN "\x1B[1;32m"//BOLD LIGHT GREEN COLOR
#define ILGREEN "\x1B[3;32m"	//ITALIC LIGHT GREEN COLOR
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