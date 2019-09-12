import rainbow.RainFormat;
import rainbow.raincolorbg.*;
public class Main
{
    public static void main(String[] args) {
        RainColorBG obj = new RainColorBG();
        RainFormat rf = new RainFormat();
        System.out.println(obj.getRCB("Lr", "lwhite")+"Hello World" + rf.RESET);
    }
}