#include "tabledata.cpp"
class AppExit : public TableData
{
public:
    
    void appExit()
    {
        ofstream outfile;
        outfile.open("table2.txt");

        for (int n = 0; n < i; n++)
        {
            outfile << tableData.combinations[n] << " ";
            outfile << tableData.indexMPN[n] << " ";
            outfile << tableData.lower95[n] << " ";
            outfile << tableData.upper95[n] << endl;
        }
        
        cout << "==============================" << endl;
        cout << "* Program Exited. Thank You! *" << endl;
        cout << "==============================" << endl;
    }
};

AppExit appExit;