package rainbow.raincolorbg;

public class RainColorBG
{
    /**
     * this function will return the color you want
     * @param textColorCode (Lg, Mg, Dg, Lr, Dr, Lw, Dw, Lb, Db, Lc, Dc, o, b, m, y, l, p)
     * @param backgroundColor (dgreen, lgreen, mgreen, dred, lred, dorange, lorange, lblue, lwhite, dwhite, lemon, mpink, lpink)
     * @return the color string code
     **/
    public String getRCB(String textColorCode, String backgroundColor)
    {
        IRainColorBG obj = null;
        switch(textColorCode)
        {
            case "Lg":
                obj = new LightGreenRCB();
                break;
            case "Mg":
                obj = new MediumGreenRCB();
                break;
            case "Dg":
                obj = new DarkGreenRCB();
                break;
            case "Lr":
                obj = new LightRedRCB();
                break;
            case "Dr":
                obj = new DarkRedRCB();
                break;
            case "Lw":
                obj = new LightWhiteRCB();
                break;
            case "Dw":
                obj = new DarkWhiteRCB();
                break;
            case "Lb":
                obj = new LightBlueRCB();
                break;
            case "Db":
                obj = new DarkBlueRCB();
                break;
            case "Lc":
                obj = new LightCyanRCB();
                break;
            case "Dc":
                obj = new DarkCyanRCB();
                break;
            case "o":
                obj = new OrangeRCB();
                break;
            case "b":
                obj = new BlackRCB();
                break;
            case "m":
                obj = new MagentaRCB();
                break;
            case "y":
                obj = new YellowRCB();
                break;
            case "l":
                obj = new LemonRCB();
                break;
            case "p":
                obj = new PinkRCB();
                break;
            default:
                return "";
        }
        return linkBackground(textColorCode, backgroundColor, obj);
    }

    /**
     * this function will link the text color to background color
     * @param textColorCode
     * @param backgroundColor
     * @param code
     * @return the final color
     **/
    private String linkBackground(String textColorCode, String backgroundColor, IRainColorBG code)
    {
        switch(backgroundColor)
        {
            case "dgreen":
                return code.getBGDGREEN();
            case "lgreen":
                return code.getBGLGREEN();
            case "mgreen":
                return code.getBGMGREEN();
            case "dred":
                return code.getBGDRED();
            case "lred":
                return code.getBGLRED();
            case "dorange":
                return code.getBGDORANGE();
            case "lorange":
                return code.getBGLORANGE();
            case "lblue":
                return code.getBGLBLUE();
            case "lwhite":
                return code.getBGLWHITE();
            case "dwhite":
                return code.getBGDWHITE();
            case "lemon":
                return code.getBGLEMON();
            case "mpink":
                return code.getBGMPINK();
            case "dpink":
                return code.getBGDPINK();
            case "lpink":
                return code.getBGLPINK();
            default:
                return "";
        }
    }
}