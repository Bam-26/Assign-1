#include "tabledata.cpp"
class AppExit : public TableData
{
public:
    void appExit()
    {
        cout << "==============================" << endl;
        cout << "* Program Exited. Thank You! *" << endl;
        cout << "==============================" << endl;
    }
};

AppExit appExit;