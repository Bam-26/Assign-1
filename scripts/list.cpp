#include "tabledata.cpp"
class List : public TableData
{
private :
    int tensIterate = 0;
    int lengthIndex;
    int length;
public:
    void list()
    {
        cout << "                     >>>>> Table Row <<<<<\n";
        
        cout << "       Combination of  MPN Index/100ml  95 percent Confidence Limit  \n";
        cout << "  No   Positives (MPN)                      Lower         Upper    \n";
       

        length = to_string(i).length();
        for (int n = 0; n < i; n++)
        {
            cout << setw(4) << n + 1;
            cout << setw(13) << tableData.combinations[n];
            cout << setw(16) << tableData.indexMPN[n];
            cout << setw(15) <<tableData.lower95[n];
            cout << setw(14) <<tableData.upper95[n] << endl;
            
        }
    };
};

List list;

