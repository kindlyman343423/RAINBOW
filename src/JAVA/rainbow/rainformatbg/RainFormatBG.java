package rainbow.rainformatbg;

public class RainFormatBG
{
    /**
     * this function will return different formated backgrounds
     * 
     * BACKGROUNDS (dgreen, lgreen, mgreen, dred, lred, dorange, lorange, lblue, lwhite, dwhite, lemon, dpink, lpink, mpink)
     * FORMATS (bold, italic, underline, blink, cut, doubleline, overline)
     * @param format
     * @param backgroundColor
     * @return
     **/
    public String getRFB(String format, String backgroundColor)
    {
        IRainFormatBG obj = null;
        switch(backgroundColor)
        {
            case "dgreen":
                obj = new DarkGreenRFB();
                break;
            case "lgreen":
                obj = new LightGreenRFB();
                break;
            case "mgreen":
                obj = new MediumGreenRFB();
                break;
            case "dred":
                obj = new DarkRedRFB();
                break;
            case "lred":
                obj = new LightRedRFB();
                break;
            case "dorange":
                obj = new DarkOrangeRFB();
                break;
            case "lorange":
                obj = new LightOrangeRFB();
                break;
            case "lblue":
                obj = new LightBlueRFB();
                break;
            case "lwhite":
                obj = new LightWhiteRFB();
                break;
            case "dwhite":
                obj = new DarkWhiteRFB();
                break;
            case "lemon":
                obj = new LemonRFB();
                break;
            case "dpink":
                obj = new DarkPinkRFB();
                break;
            case "lpink":
                obj = new LightPinkRFB();
                break;
            case "mpink":
                obj = new MediumPinkRFB();
                break;
            default:
                return "";
        }
        return getFormat(obj, format);
    }

    private String getFormat(IRainFormatBG obj, String format)
    {
        switch(format)
        {
            case "bold":
                return obj.getBold();
            case "italic":
                return obj.getItalic();
            case "underline":
                return obj.getUnderline();
            case "blink":
                return obj.getBlink();
            case "cut":
                return obj.getStrikeThrough();
            case "doubleline":
                return obj.getDoubleLine();
            case "overline":
                return obj.getOverLine();
            default:
                return "";
        }
    }
}