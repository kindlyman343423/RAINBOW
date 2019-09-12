package rainbow.raincolorbg;

public class LightRedRCB implements IRainColorBG
{
    public final String BGDGREEN = "\u001B[91;40m";
    public final String BGLGREEN = "\u001B[91;42m";
    public final String BGMGREEN = "\u001B[91;100m";
    public final String BGDRED   = "\u001B[91;41m";
    public final String BGLRED   = "\u001B[91;101m";
    public final String BGDORANGE= "\u001B[91;43m";
    public final String BGLORANGE= "\u001B[91;102m";
    public final String BGLBLUE  = "\u001B[91;44m";
    public final String BGLWHITE = "\u001B[91;47m";
    public final String BGDWHITE = "\u001B[91;107m";
    public final String BGLEMON  = "\u001B[91;103m";
    public final String BGMPINK  = "\u001B[91;104m";
    public final String BGDPINK  = "\u001B[91;105m";
    public final String BGLPINK  = "\u001B[91;106m";

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