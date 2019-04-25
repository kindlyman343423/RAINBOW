/*
B       1; - bold
I       3; - italic
UL      4; - underline
BK      5; - blink
C        9; - cut
DL       21; - double line
OL       53; - overline

H       8; - hidden
FOR TESTING
#define TEST "\x1B[107m"
* unknown colors
* "\x1B[46m"
* "\x1B[45m"
*/
// #define TEST "\x1B[106m"

// ONE COMPONENT FILES
#include "rainformat.h"             // contains formatting text and highlight types
#include "raincolor.h"              // contains all text colors
#include "rainbackground.h"         // contains all background colors

// TWO COMPONENT FILES
#include "rainformatcolor.h"        // contains formatting with colors
#include "rainformatbg.h"           // contains formatting with background
#include "raincolorbg.h"            // contains colors with background

// rainformat + raincolor       => rainformatcolor
// rainformat + rainbackground  => rainformatbg
// raincolor + rainbackground   => raincolorbg