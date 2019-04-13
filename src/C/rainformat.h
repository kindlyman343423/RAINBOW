/*****************************************************************************
 *                              FORMATTING TEXT                              *
 *****************************************************************************/

// Reset the **color to normal**
#define RESET "\x1B[0m"			                                                // RESET NORMAL COLOR

// Make the **text bold**
#define BOLD "\x1B[1m" 			                                                // BOLD TEXT

// Make the **text italic** 
#define ITALIC "\x1B[3m"  		                                                // ITALIC TEXT

// Make the **text with underline** 
#define UNDERLINE "\x1B[4m"  	                                                // UNDERLINE TEXT

// **Blink the text** displayed
#define BLINK "\x1B[5m"                                                         // BLINK TEXT

// **Hides the text** from the screen 
#define HIDDEN "\x1B[8m"                                                        // HIDDEN TEXT

// **Strikethrough the text**
#define CUT "\x1B[9m"                                                           // STRIKE THROUGH TEXT

// **Underline the text** with double lines
#define DOUBLELINE "\x1B[21m"                                                   // DOUBLE UNDERLINE TEXT

// **Overline the text** when displayed
#define OVERLINE "\x1B[53m"                                                     // OVERLINE TEXT


/******************************************************************************
 *                                  HIGHLIGHTS                                *
 ******************************************************************************/
// Change **normal highlight** to black when selected
#define HIGHLIGHT "\x1B[7m"            

// **Default color** display 
#define DEFAULTHIGHLIGHT "\x1B[98m"