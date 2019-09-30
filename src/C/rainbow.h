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
#include "rainFormat.h"             // contains formatting text and highlight types
#include "rainColor.h"              // contains all text colors
#include "rainBackground.h"         // contains all background colors

// TWO COMPONENT FILES
// rainformat + raincolor       => rainformatcolor
#include "rainFormatColor.h"        // contains formatting with colors

// rainformat + rainbackground  => rainformatbg
#include "rainFormatBG.h"           // contains formatting with background

// raincolor + rainbackground   => raincolorbg
#include "rainColorBG.h"            // contains colors with background