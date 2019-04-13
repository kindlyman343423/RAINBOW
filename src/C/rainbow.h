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
// #define TEST "\x1B[106m"

#include "rainformat.h"         // contains formatting text and highlight types
#include "raincolor.h"          // contains all text colors
#include "rainbackground.h"     // contains all background colors
#include "rainformatcolor.h"    // contains formatting with colors

/************************************************************************************
 *                              FORMATTING WITH BACKGROUND                          *
 ************************************************************************************/

/********************************
 *      DARK GREEN BACKGROUND   *
 ********************************/
// Display the **bold text dark green background** color on screen
#define BBGDGREEN "\x1B[1;40m"             // DARK GREEN BACKGROUND WITH BOLD TEXT

// Display the **italic text dark green background** color on screen
#define IBGDGREEN "\x1B[3;40m"             // DARK GREEN BACKGROUND WITH ITALIC TEXT

// Display the **underline text dark green background** color on screen
#define ULBGDGREEN "\x1B[4;40m"             // DARK GREEN BACKGROUND WITH UNDERLINE TEXT

// Display the **blink text dark green background** color on screen
#define BKBGDGREEN "\x1B[5;40m"             // DARK GREEN BACKGROUND WITH BLINK TEXT

// Display the **strikethrough text dark green background** color on screen
#define CBGDGREEN "\x1B[9;40m"             // DARK GREEN BACKGROUND WITH STRIKETHROUGH TEXT

// Display the **double line text dark green background** color on screen
#define DLBGDGREEN "\x1B[21;40m"             // DOUBLE LINE DARK GREEN BACKGROUND

// Display the **over line text dark green background** color on screen
#define OLBGDGREEN "\x1B[53;40m"             // OVER LINE DARK GREEN BACKGROUND


/********************************
 *     LIGHT GREEN BACKGROUND   *
 ********************************/
// Display the **bold light green background** color on screen
#define BBGLGREEN "\x1B[1;42m"	            // BOLD LIGHT GREEN BACKGROUND

// Display the **italic light green background** color on screen
#define IBGLGREEN "\x1B[3;42m"	            // ITALIC LIGHT GREEN BACKGROUND

// Display the **underline light green background** color on screen
#define ULBGLGREEN "\x1B[4;42m"	            // UNDERLINE LIGHT GREEN BACKGROUND

// Display the **blink light green background** color on screen
#define BKBGLGREEN "\x1B[5;42m"	            // BLINK LIGHT GREEN BACKGROUND

// Display the **strikethrough light green background** color on screen
#define CBGLGREEN "\x1B[9;42m"	            // CUT LIGHT GREEN BACKGROUND

// Display the **double line light green background** color on screen
#define DLBGLGREEN "\x1B[21;42m"	            // DOUBLE LINE LIGHT GREEN BACKGROUND

// Display the **over line light green background** color on screen
#define OLBGLGREEN "\x1B[53;42m"	            // OVER LINE LIGHT GREEN BACKGROUND


/********************************
 *    MEDIUM GREEN BACKGROUND   *
 ********************************/

/********************************
 *      DARK RED BACKGROUND     *
 ********************************/

/********************************
 *      LIGHT RED BACKGROUND    *
 ********************************/

/********************************
 *     DARK ORANGE BACKGROUND   *
 ********************************/

/********************************
 *     LIGHT ORANGE BACKGROUND   *
 ********************************/

/********************************
 *     LIGHT BLUE BACKGROUND   *
 ********************************/

/********************************
 *     LIGHT WHITE BACKGROUND   *
 ********************************/

/********************************
 *     DARK WHITE BACKGROUND   *
 ********************************/

/********************************
 *        LEMON BACKGROUND      *
 ********************************/

/********************************
 *     MID PINK BACKGROUND   *
 ********************************/

/********************************
 *     DARK PINK BACKGROUND   *
 ********************************/

/********************************
 *     LIGHT PINK BACKGROUND   *
 ********************************/
