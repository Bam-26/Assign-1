#include "tabledata.cpp"
#include "search.h"
class Update : public TableData, public Search // connect to the search class to be able to use the search function
{
    public:
    void update(int i)
    {
        appSearch(i); // reuse the search function to determine whether there is a combination in the list or not.
        if (h==1) // If there is a combination in the list, the user can update the data (MPN index, the lower and upper bounds of the 95 percent confidence range)
        {
            cout << "Update MPN number: ";
            cin >> tableData.indexMPN[index];
            cout << "Update lower bounds number: ";
            cin >> tableData.lower95[index];
            cout << "Update upper bounds number: ";
            cin >> tableData.upper95[index];
        }
    }
};

Update update;
