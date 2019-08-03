#include "rainbow.hpp"
#include <iostream>
using namespace std;

//FRIEND CLASS -- not allowed
//FRIEND FUNCTION -- not allowed

//PUBLIC INHERITANCE
class ONE:public Rainbow
{
    public:
    void myfunction()
    {
        cout << red << "use of protected members" << Rst << endl;
        cout << getDGREEN("use of public methods") << getRESET() << endl;
    }
    //FUNCTION OVERLOADING
    string getBOLD(string str)
    {
        return Itlc+str+Rst;
    }
};

//PROTECTED INHERITANCE
class TWO:protected Rainbow
{
    public:
    void myfunction()
    {
        cout << ylw << "use of protected members" << Rst << endl;
        cout << getLGREEN("use of public methods") << getRESET() << endl;
    }
};

//PRIVATE INHERITANCE
class THREE:private Rainbow
{
    public:
    void myfunction()
    {
        cout << blu << "use of protected members" << Rst << endl;
        cout << getRED("use of public methods") << getRESET() << endl;
    }
};

//USING WITH STRUCTURE
struct STRUCTURE
{
    Rainbow STR;
    int a;
};

int main()
{
    //USING GLOBAL CONSTANTS
    cout << LGREEN << "This is a green color\n"<< RESET;
    
    //USING Rainbow class object METHODS
    Rainbow R;
    cout << R.getBOLD("HELLO WORLD") << endl;
    cout << R.getBBLUE("Hey this is rainbow") << endl;

    //USING INHERITANCE
    //PUBLIC
    ONE o;
    o.myfunction();
    cout << o.getBOLD("TEST METHOD OVERLOADING") << endl;

    //PROTECTED
    TWO t;
    t.myfunction();
    
    //PRIVATE
    THREE th;
    th.myfunction();

    //USING WITH STRUCTURE
    STRUCTURE s;
    cout << s.STR.getBBLUE("Hello World") << endl;
}
