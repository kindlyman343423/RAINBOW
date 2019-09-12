package rainbow.raincolorbg;

public class BlackRCB implements IRainColorBG
{
    public final String BGDGREEN = "\u001B[30;40m";
    public final String BGLGREEN = "\u001B[30;42m";
    public final String BGMGREEN = "\u001B[30;100m";
    public final String BGDRED   = "\u001B[30;41m";
    public final String BGLRED   = "\u001B[30;101m";
    public final String BGDORANGE= "\u001B[30;43m";
    public final String BGLORANGE= "\u001B[30;102m";
    public final String BGLBLUE  = "\u001B[30;44m";
    public final String BGLWHITE = "\u001B[30;47m";
    public final String BGDWHITE = "\u001B[30;107m";
    public final String BGLEMON  = "\u001B[30;103m";
    public final String BGMPINK  = "\u001B[30;104m";
    public final String BGDPINK  = "\u001B[30;105m";
    public final String BGLPINK  = "\u001B[30;106m";

    @Override
    public String getBGDGREEN() {
        return BGDGREEN;
    }

    @Override
    public String getBGLGREEN() {
        return BGLGREEN;
    }

    @Override
    public String getBGMGREEN() {
        return BGMGREEN;
    }

    @Override
    public String getBGDRED() {
        return BGDRED;
    }

    @Override
    public String getBGLRED() {
        return BGLRED;
    }

    @Override
    public String getBGDORANGE() {
        return BGDORANGE;
    }

    @Override
    public String getBGLORANGE() {
        return BGLORANGE;
    }

    @Override
    public String getBGLBLUE() {
        return BGLBLUE;
    }

    @Override
    public String getBGLWHITE() {
        return BGLWHITE;
    }

    @Override
    public String getBGDWHITE() {
        return BGDWHITE;
    }

    @Override
    public String getBGLEMON() {
        return BGLEMON;
    }

    @Override
    public String getBGMPINK() {
        return BGMPINK;
    }

    @Override
    public String getBGDPINK() {
        return BGDPINK;
    }

    @Override
    public String getBGLPINK() {
        return BGLPINK;
    }
}